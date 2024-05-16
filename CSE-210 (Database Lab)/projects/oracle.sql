CREATE DATABASE edu_system;
USE edu_system;

CREATE TABLE Addresses (
    address_id NUMBER PRIMARY KEY,
    address_details VARCHAR2(255)
);

CREATE TABLE Schools (
    school_id NUMBER PRIMARY KEY,
    address_id NUMBER,
    school_name VARCHAR2(255),
    school_principal VARCHAR2(255),
    other_school_details VARCHAR2(255),
    FOREIGN KEY (address_id) REFERENCES Addresses(address_id)
);

CREATE TABLE Parents (
    parent_id NUMBER PRIMARY KEY,
    gender CHAR(1),
    first_name VARCHAR2(255),
    middle_name VARCHAR2(255),
    last_name VARCHAR2(255),
    other_parent_details VARCHAR2(255)
);

CREATE TABLE Parent_Addresses (
    parent_id NUMBER,
    address_id NUMBER,
    date_address_from DATE,
    date_address_to DATE,
    PRIMARY KEY (parent_id, address_id),
    FOREIGN KEY (parent_id) REFERENCES Parents(parent_id),
    FOREIGN KEY (address_id) REFERENCES Addresses(address_id)
);

CREATE TABLE Students (
    student_id NUMBER PRIMARY KEY,
    gender CHAR(1),
    first_name VARCHAR2(255),
    middle_name VARCHAR2(255),
    last_name VARCHAR2(255),
    date_of_birth DATE,
    other_student_details VARCHAR2(255)
);

CREATE TABLE Student_Addresses (
    student_id NUMBER,
    address_id NUMBER,
    date_from DATE,
    date_to DATE,
    PRIMARY KEY (student_id, address_id),
    FOREIGN KEY (student_id) REFERENCES Students(student_id),
    FOREIGN KEY (address_id) REFERENCES Addresses(address_id)
);

CREATE TABLE Teachers (
    teacher_id NUMBER PRIMARY KEY,
    school_id NUMBER,
    gender CHAR(1),
    first_name VARCHAR2(255),
    middle_name VARCHAR2(255),
    last_name VARCHAR2(255),
    other_teacher_details VARCHAR2(255),
    FOREIGN KEY (school_id) REFERENCES Schools(school_id)
);

CREATE TABLE Subjects (
    subject_id NUMBER PRIMARY KEY,
    subject_name VARCHAR2(255)
);

CREATE TABLE Classes (
    class_id NUMBER PRIMARY KEY,
    subject_id NUMBER,
    teacher_id NUMBER,
    class_code VARCHAR2(255),
    class_name VARCHAR2(255),
    date_from DATE,
    date_to DATE,
    FOREIGN KEY (subject_id) REFERENCES Subjects(subject_id),
    FOREIGN KEY (teacher_id) REFERENCES Teachers(teacher_id)
);

CREATE TABLE Student_Parents (
    student_id NUMBER,
    parent_id NUMBER,
    PRIMARY KEY (student_id, parent_id),
    FOREIGN KEY (student_id) REFERENCES Students(student_id),
    FOREIGN KEY (parent_id) REFERENCES Parents(parent_id)
);

CREATE TABLE Families (
    family_id NUMBER PRIMARY KEY,
    head_of_family_parent_id NUMBER,
    family_name VARCHAR2(255),
    FOREIGN KEY (head_of_family_parent_id) REFERENCES Parents(parent_id)
);

CREATE TABLE Family_Members (
    family_member_id NUMBER PRIMARY KEY,
    family_id NUMBER,
    parent_or_student_member CHAR(1),
    parent_id NUMBER,
    student_id NUMBER,
    FOREIGN KEY (family_id) REFERENCES Families(family_id),
    FOREIGN KEY (parent_id) REFERENCES Parents(parent_id),
    FOREIGN KEY (student_id) REFERENCES Students(student_id)
);

CREATE TABLE Student_Classes (
    student_id NUMBER,
    class_id NUMBER,
    date_from DATE,
    date_to DATE,
    PRIMARY KEY (student_id, class_id),
    FOREIGN KEY (student_id) REFERENCES Students(student_id),
    FOREIGN KEY (class_id) REFERENCES Classes(class_id)
);

CREATE TABLE Homework (
    homework_id NUMBER PRIMARY KEY,
    student_id NUMBER,
    class_id NUMBER,
    date_created DATE,
    homework_content CLOB,
    grade VARCHAR2(5),
    other_homework_details VARCHAR2(255),
    FOREIGN KEY (student_id) REFERENCES Students(student_id),
    FOREIGN KEY (class_id) REFERENCES Classes(class_id)
);

CREATE TABLE Reports (
    report_id NUMBER PRIMARY KEY,
    student_id NUMBER,
    class_id NUMBER,
    date_created DATE,
    report_content CLOB,
    teachers_comments CLOB,
    other_report_details VARCHAR2(255),
    FOREIGN KEY (student_id) REFERENCES Students(student_id),
    FOREIGN KEY (class_id) REFERENCES Classes(class_id)
);
