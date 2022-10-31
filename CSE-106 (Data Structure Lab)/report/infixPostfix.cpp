// solve this problem
// A + B * C + D

// ABC*+D+

#include <bits/stdc++.h>
using namespace std;

char myStack[50], top = -1;

void push(int val){
    if(top >= size - 1)
        cout << "Stack is full.\n";
    else{
        top++;
        myStack[top] = val;
        cout << "Inserted element: " << myStack[top] << endl;
    }
}
void pop(){
    if(top <= -1){
        cout << "No element to delete.\n";
    }
    else{
        cout << "The popped element = " << myStack[top] << endl;
        top--;
    }
}

int precedence(char c){
    if (c == '^') return 3;
    else if (c == '/' || c == '*') return 2;
    else if (c == '+' || c == '-') return 1;
    else return -1;
}

void infixToPostfix(string s){
    string result;
 
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c >= 'A' && c <= 'Z') result += c;

        if() 
    }
    cout << result << endl;
}


int main(){
    string exp = 'A+B*C+D'

    infixToPostfix(exp);
    return 0;
}