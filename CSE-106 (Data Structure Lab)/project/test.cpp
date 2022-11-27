// Written by: Md. Maruf Sarker
// Platform: Linux
// Problem: Student Management System
// Language: cpp / go / c / python
// Date: 2022-11-27

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define pi 3.141592653589793238462
#define mod 1000000007
#define ll long long
#define ull unsigned long long
#define ld long double

// add student record using linked list
struct student{
    int id;
    string name;
    string dept;
    string session;
    string email;
    string phone;
    student *next;
};

student *head = NULL;

void add_student_record(){
    student *new_student = new student();
    cout << "Enter student id: ";
    cin >> new_student->id;
    cout << "Enter student name: ";
    cin >> new_student->name;
    cout << "Enter student department: ";
    cin >> new_student->dept;
    cout << "Enter student session: ";
    cin >> new_student->session;
    cout << "Enter student email: ";
    cin >> new_student->email;
    cout << "Enter student phone: ";
    cin >> new_student->phone;
    new_student->next = NULL;
    if(head == NULL){
        head = new_student;
    }
    else{
        student *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_student;
    }
}

void del_student_record(){
    int id;
    cout << "Enter student id: ";
    cin >> id;
    student *temp = head;
    student *prev = NULL;
    while(temp != NULL){
        if(temp->id == id){
            if(prev == NULL){
                head = temp->next;
                delete temp;
                break;
            }
            else{
                prev->next = temp->next;
                delete temp;
                break;
            }
        }
        prev = temp;
        temp = temp->next;
    }
}

void up_student_record(){
    int id;
    cout << "Enter student id: ";
    cin >> id;
    
    // update student record by using switch case and linked list
    student *temp = head;
    while(temp != NULL){
        if(temp->id == id){
            int choice;
            cout << "1. Update student name" << endl;
            cout << "2. Update student department" << endl;
            cout << "3. Update student session" << endl;
            cout << "4. Update student email" << endl;
            cout << "5. Update student phone" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            switch(choice){
                case 1:
                    cout << "Enter student name: ";
                    cin >> temp->name;
                    break;
                case 2:
                    cout << "Enter student department: ";
                    cin >> temp->dept;
                    break;
                case 3:
                    cout << "Enter student session: ";
                    cin >> temp->session;
                    break;
                case 4:
                    cout << "Enter student email: ";
                    cin >> temp->email;
                    break;
                case 5:
                    cout << "Enter student phone: ";
                    cin >> temp->phone;
                    break;
                default:
                    cout << "Invalid choice" << endl;
            }
            break;
        }
        temp = temp->next;
    }
}

void find_student_by_id(){
    int id;
    cout << "Enter student id: ";
    cin >> id;

    // find student record by using linked list
    student *temp = head;
    while(temp != NULL){
        if(temp->id == id){
            cout << "Student id: " << temp->id << endl;
            cout << "Student name: " << temp->name << endl;
            cout << "Student department: " << temp->dept << endl;
            cout << "Student session: " << temp->session << endl;
            cout << "Student email: " << temp->email << endl;
            cout << "Student phone: " << temp->phone << endl;
            break;
        }
        temp = temp->next;
    }
}

void find_student_by_phone_number(){
    string phone;
    cout << "Enter student phone number: ";
    cin >> phone;

    // find student record by using linked list
    student *temp = head;
    while(temp != NULL){
        if(temp->phone == phone){
            cout << "Student id: " << temp->id << endl;
            cout << "Student name: " << temp->name << endl;
            cout << "Student department: " << temp->dept << endl;
            cout << "Student session: " << temp->session << endl;
            cout << "Student email: " << temp->email << endl;
            cout << "Student phone: " << temp->phone << endl;
            break;
        }
        temp = temp->next;
    }
}

void show_all_records(){
    student *temp = head;
    while(temp != NULL){
        cout << "Student id: " << temp->id << endl;
        cout << "Student name: " << temp->name << endl;
        cout << "Student department: " << temp->dept << endl;
        cout << "Student session: " << temp->session << endl;
        cout << "Student email: " << temp->email << endl;
        cout << "Student phone: " << temp->phone << endl;
        cout << endl;
        temp = temp->next;
    }
}

// user documentation
void user_documentation(){
    system("clear");
}

// author information
void author_details(){
    system("clear");
    printf("Author: Maruf Sarker\n");
    printf("Github: https://github.com/mdmarufsarker\n");
    printf("Email: mdmarufsarker.mms@gmail.com\n");
    printf("Website: https://marufsarker.netlify.app/\n");
}

// bug report
void bug_report(){
    system("clear");
}

// print sorry on the terminal
void sorry(){
    system("clear");
    printf("##### ###### ##### ##### #       #\n");
    printf("#     #    # #   # #   #  #     #\n");
    printf("#     #    # #   # #   #   #   #\n");
    printf("##### #    # ##### #####     #\n");
    printf("    # #    # # #   # #       #\n");
    printf("    # #    # #  #  #  #      #\n");
    printf("##### ###### #   # #   #     #   ## ## ##\n");   
}

// login functionality
void login(){
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    // Comparing username and password
    if(username == "admin" && password == "admin"){
        system("clear");
        printf("Login successful\n");
        printf("Welcome to student management system\n");
        printf("Loading...");
        system("clear");
        while(1){
            cout << "1. Add student record" << endl;
            cout << "2. Delete student record" << endl;
            cout << "3. Update student record" << endl;
            cout << "4. Find student by id" << endl;
            cout << "5. Find student by phone number" << endl;
            cout << "6. Show all records" << endl;
            cout << "7. User documentation" << endl;
            cout << "8. Author details" << endl;
            cout << "9. Bug report" << endl;
            cout << "10. Exit" << endl;
            cout << "Enter your choice: ";
            int choice;
            cin >> choice;
            fflush(stdin);
        }
    }else{
        system("clear");
        cout << "Login failed" << endl;
        cout << "Please try again" << endl;
    }
}

// global variables
#define LEN 50
char username[LEN] = "admin";
char password[LEN] = "admin";

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);  cout.tie(NULL);  cout.precision(2);

    int n = 3;
    while(n != 10){
        login();
        n--;
        printf("You have %d attempts left\n", n);
    }
    sorry();
}