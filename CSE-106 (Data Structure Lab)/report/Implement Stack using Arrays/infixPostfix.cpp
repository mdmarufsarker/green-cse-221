// infix to postfix --> resources collected from neso academy and jenny's lectures

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define n 50
int top = -1;

char infix[n], postfix[n], stack[n];
int isEmpty(){
    if(top == -1)
        return 1;
    else return 0;
}

int precedence(char symbol){
    switch(symbol){
        case '^':
            return 3;
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default :
            return 0;
    }
}

void push(char c){
    if (top == n - 1){
        return;
    }
    else{
        top++;
        stack[top] = c;
    }
}

char pop(){
    char c;
    if (top == -1){
        return;
    }
    else{
        c = stack[top];
        top--;
        return c;
    }
}

void inToPost(){
    char symbol,next;
    int i = 0,j = 0;
    while(infix[i] !='\0'){
        symbol = infix[i];
        switch(symbol){
            case '(' :
                push(symbol);
                break;
            case ')':{
                next = pop();
                while(next != '(')
                    postfix[j++] = next;
                break;
                }
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':{
                while(!isEmpty() && precedence(stack[top]) >= precedence(symbol))
                    postfix[j++] = pop();
                push(symbol);
                break;
            }
            default :
                postfix[j++] = symbol;
        }
        i++;
    }
    while(!isEmpty()){
        postfix[j++] = pop();
        postfix[j] = '\0';
    }
    puts(postfix);
}
int main(){
    printf("Enter Infix Expression : ");
    gets(infix);

    inToPost();
}