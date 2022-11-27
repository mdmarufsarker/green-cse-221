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

int i = 0;

// add student record using array
struct student{
    int id;
    string name;
    string dept;
    string session;
    string email;
    string phone;
} s[100];

void add_student_record(){
    // add student record using array insertion
    cout << "Enter the number of student: ";
    int n;
    cin >> n;
    for(int j = 0; j < n; j++){
        cout << "Enter the student id: ";
        cin >> s[j].id;
        cout << "Enter the student name: ";
        cin >> s[j].name;
        cout << "Enter the student department: ";
        cin >> s[j].dept;
        cout << "Enter the student session: ";
        cin >> s[j].session;
        cout << "Enter the student email: ";
        cin >> s[j].email;
        cout << "Enter the student phone: ";
        cin >> s[j].phone;
        i++;
    }
    cout << "Student record added successfully!" << endl;
}
void del_student_record(){
    // sort student record in ascending order using bubble sort and delete student record using array deletion
    int temp_id;
    string temp_name;
    string temp_dept;
    string temp_session;
    string temp_email;
    string temp_phone;
    for (int j = 0; j < i; j++){
        for (int k = 0; k < i - j - 1; k++){
            if (s[k].id > s[k + 1].id){
                temp_id = s[k].id;
                s[k].id = s[k + 1].id;
                s[k + 1].id = temp_id;

                temp_name = s[k].name;
                s[k].name = s[k + 1].name;
                s[k + 1].name = temp_name;

                temp_dept = s[k].dept;
                s[k].dept = s[k + 1].dept;
                s[k + 1].dept = temp_dept;

                temp_session = s[k].session;
                s[k].session = s[k + 1].session;
                s[k + 1].session = temp_session;

                temp_email = s[k].email;
                s[k].email = s[k + 1].email;
                s[k + 1].email = temp_email;

                temp_phone = s[k].phone;
                s[k].phone = s[k + 1].phone;
                s[k + 1].phone = temp_phone;
            }
        }
    }
}
void up_student_record(){
    cout << "Enter student id: ";
    int id;
    cin >> id;
    for(int j = 0; j < 100; j++){
        if(s[j].id == id){
            switch(j){
                case 1:
                    cout << "Enter student name: ";
                    cin >> s[j].name;
                    break;
                case 2:
                    cout << "Enter student department: ";
                    cin >> s[j].dept;
                    break;
                case 3:
                    cout << "Enter student session: ";
                    cin >> s[j].session;
                    break;
                case 4:
                    cout << "Enter student email: ";
                    cin >> s[j].email;
                    break;
                case 5:
                    cout << "Enter student phone: ";
                    cin >> s[j].phone;
                    break;
            }
        }
    }
    cout << "Student record updated successfully" << endl;
}
void find_student_by_id(){
    // sort student record in ascending order using selection sort by student id and search student record by using binary search
    int temp_id;
    string temp_name;
    string temp_dept;
    string temp_session;
    string temp_email;
    string temp_phone;
    for (int j = 0; j < i; j++){
        for (int k = j + 1; k < i; k++){
            if (s[k].id < s[j].id){
                temp_id = s[j].id;
                s[j].id = s[k].id;
                s[k].id = temp_id;

                temp_name = s[j].name;
                s[j].name = s[k].name;
                s[k].name = temp_name;

                temp_dept = s[j].dept;
                s[j].dept = s[k].dept;
                s[k].dept = temp_dept;

                temp_session = s[j].session;
                s[j].session = s[k].session;
                s[k].session = temp_session;

                temp_email = s[j].email;
                s[j].email = s[k].email;
                s[k].email = temp_email;

                temp_phone = s[j].phone;
                s[j].phone = s[k].phone;
                s[k].phone = temp_phone;
            }
        }
    }
    cout << "Enter student id: ";
    int id;
    cin >> id;
    int low = 0;
    int high = i - 1;
    int mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(s[mid].id == id){
            cout << "Student id: " << s[mid].id << endl;
            cout << "Student name: " << s[mid].name << endl;
            cout << "Student department: " << s[mid].dept << endl;
            cout << "Student session: " << s[mid].session << endl;
            cout << "Student email: " << s[mid].email << endl;
            cout << "Student phone: " << s[mid].phone << endl;
            break;
        }
        else if(s[mid].id < id){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << "Student not found!" << endl;
}
void find_student_by_phone_number(){
    // find student by phone number using linear search
    string phone;
    cout << "Enter the student phone number: ";
    cin >> phone;
    for(int j = 0; j < 100; j++){
        if(s[j].phone == phone){
            cout << "Student id: " << s[j].id << endl;
            cout << "Student name: " << s[j].name << endl;
            cout << "Student department: " << s[j].dept << endl;
            cout << "Student session: " << s[j].session << endl;
            cout << "Student email: " << s[j].email << endl;
            cout << "Student phone: " << s[j].phone << endl;
            return;
        }
    }
    cout << "Student not found!" << endl;
}
void show_all_records(){
    // show all student record by sort student record in ascending order using insertion sort by student id and show all student record using array traversal
    for (int j = 1; j < 100; j++){
        int key = s[j].id;
        string key_name = s[j].name;
        string key_dept = s[j].dept;
        string key_session = s[j].session;
        string key_email = s[j].email;
        string key_phone = s[j].phone;
        int k = j - 1;
        while (k >= 0 && s[k].id > key){
            s[k + 1].id = s[k].id;
            s[k + 1].name = s[k].name;
            s[k + 1].dept = s[k].dept;
            s[k + 1].session = s[k].session;
            s[k + 1].email = s[k].email;
            s[k + 1].phone = s[k].phone;
            k--;
        }
        s[k + 1].id = key;
        s[k + 1].name = key_name;
        s[k + 1].dept = key_dept;
        s[k + 1].session = key_session;
        s[k + 1].email = key_email;
        s[k + 1].phone = key_phone;
    }
    for(int j = 0; j < 100; j++){
        cout << "Student id: " << s[j].id << endl;
        cout << "Student name: " << s[j].name << endl;
        cout << "Student department: " << s[j].dept << endl;
        cout << "Student session: " << s[j].session << endl;
        cout << "Student email: " << s[j].email << endl;
        cout << "Student phone: " << s[j].phone << endl;
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
        if(username != "admin"){
            cout << "Username is incorrect" << endl;
        }else if(password != "admin"){
            cout << "Password is incorrect" << endl;
        }else{
            cout << "Username and password is incorrect" << endl;
        }
    }
}

// global variables
#define LEN 50
char username[LEN] = "admin";
char password[LEN] = "admin";

int main() {
    int n = 3;
    while(n != 10){
        login();
        n--;
        cout << "You have " << n << " chances left" << endl;
    }
    sorry();
}