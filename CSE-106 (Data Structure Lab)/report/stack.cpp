#include <bits/stdc++.h>
using namespace std;

#define size 5

int myStack[size], top = -1;

/*
// debugging
size = 3
arr = [1, 2, 3]

top++ = -1 -> 0 -> 1
top++ = 0 -> 1 -> 2
top++ = 1 -> 2 -> 3
*/

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
void show(){
    if(top >= 0){
        cout << "Stack Elements are: ";
        for(int i = 0;i <= top; i++)
            cout << myStack[i] << " ";
        cout << endl;
    }else{
        cout << "Stack is Empty\n";
    }
}

int main() {
    int choice, val;
    do{
        cout << "\n--------Implement Stack using Arrays--------\n";
        cout << "Select any options: ";
        cout << "\n1. PUSH\n";
        cout << "2. POP\n";
        cout << "3. Show The Stack\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        system("clear");
        switch (choice){
            case 1:
                cout << "Enter the value to be pushed = ";
                cin >> val;
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout << "Invalid choice!\n";
                break;
        }       
    } while (choice <= 3);
    
    return 0;
}