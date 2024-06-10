-- Populate Addresses table
BEGIN
    FOR i IN 1..10000 LOOP
        INSERT INTO Addresses (address_id, address_details)
        VALUES (i, 'Address ' || i);
    END LOOP;
    COMMIT;
END;
/

-- Populate Schools table
BEGIN
    FOR i IN 1..10000 LOOP
        INSERT INTO Schools (school_id, address_id, school_name, school_principal, other_school_details)
        VALUES (i, MOD(i, 10000) + 1, 'School ' || i, 'Principal ' || i, 'Details ' || i);
    END LOOP;
    COMMIT;
END;
/

-- Populate Parents table
BEGIN
    FOR i IN 1..10000 LOOP
        INSERT INTO Parents (parent_id, gender, first_name, middle_name, last_name, other_parent_details)
        VALUES (i, CASE WHEN MOD(i, 2) = 0 THEN 'M' ELSE 'F' END, 'ParentFirst ' || i, 'ParentMiddle ' || i, 'ParentLast ' || i, 'Details ' || i);
    END LOOP;
    COMMIT;
END;
/

-- Populate Parent_Addresses table
BEGIN
    FOR i IN 1..10000 LOOP
        INSERT INTO Parent_Addresses (parent_id, address_id, date_address_from, date_address_to)
        VALUES (i, MOD(i, 10000) + 1, SYSDATE - MOD(i, 1000), SYSDATE);
    END LOOP;
    COMMIT;
END;
/

-- Populate Students table
BEGIN
    FOR i IN 1..10000 LOOP
        INSERT INTO Students (student_id, gender, first_name, middle_name, last_name, date_of_birth, other_student_details)
        VALUES (i, CASE WHEN MOD(i, 2) = 0 THEN 'M' ELSE 'F' END, 'StudentFirst ' || i, 'StudentMiddle ' || i, 'StudentLast ' || i, SYSDATE - MOD(i, 10000), 'Details ' || i);
    END LOOP;
    COMMIT;
END;
/

-- Populate Student_Addresses table
BEGIN
    FOR i IN 1..10000 LOOP
        INSERT INTO Student_Addresses (student_id, address_id, date_from, date_to)
        VALUES (i, MOD(i, 10000) + 1, SYSDATE - MOD(i, 1000), SYSDATE);
    END LOOP;
    COMMIT;
END;
/

-- Populate Teachers table
BEGIN
    FOR i IN 1..10000 LOOP
        INSERT INTO Teachers (teacher_id, school_id, gender, first_name, middle_name, last_name, other_teacher_details)
        VALUES (i, MOD(i, 10000) + 1, CASE WHEN MOD(i, 2) = 0 THEN 'M' ELSE 'F' END, 'TeacherFirst ' || i, 'TeacherMiddle ' || i, 'TeacherLast ' || i, 'Details ' || i);
    END LOOP;
    COMMIT;
END;
/

-- Populate Subjects table
BEGIN
    FOR i IN 1..10000 LOOP
        INSERT INTO Subjects (subject_id, subject_name)
        VALUES (i, 'Subject ' || i);
    END LOOP;
    COMMIT;
END;
/

-- Populate Classes table
BEGIN
    FOR i IN 1..10000 LOOP
        INSERT INTO Classes (class_id, subject_id, teacher_id, class_code, class_name, date_from, date_to)
        VALUES (i, MOD(i, 10000) + 1, MOD(i, 10000) + 1, 'Code ' || i, 'Class ' || i, SYSDATE - MOD(i, 1000), SYSDATE);
    END LOOP;
    COMMIT;
END;
/

-- Populate Student_Parents table
BEGIN
    FOR i IN 1..10000 LOOP
        INSERT INTO Student_Parents (student_id, parent_id)
        VALUES (i, MOD(i, 10000) + 1);
    END LOOP;
    COMMIT;
END;
/

-- Populate Families table
BEGIN
    FOR i IN 1..10000 LOOP
        INSERT INTO Families (family_id, head_of_family_parent_id, family_name)
        VALUES (i, MOD(i, 10000) + 1, 'Family ' || i);
    END LOOP;
    COMMIT;
END;
/

-- Populate Family_Members table
BEGIN
    FOR i IN 1..10000 LOOP
        INSERT INTO Family_Members (family_member_id, family_id, parent_or_student_member, parent_id, student_id)
        VALUES (i, MOD(i, 10000) + 1, CASE WHEN MOD(i, 2) = 0 THEN 'P' ELSE 'S' END, MOD(i, 10000) + 1, MOD(i, 10000) + 1);
    END LOOP;
    COMMIT;
END;
/

-- Populate Student_Classes table
BEGIN
    FOR i IN 1..10000 LOOP
        INSERT INTO Student_Classes (student_id, class_id, date_from, date_to)
        VALUES (i, MOD(i, 10000) + 1, SYSDATE - MOD(i, 1000), SYSDATE);
    END LOOP;
    COMMIT;
END;
/

-- Populate Homework table
BEGIN
    FOR i IN 1..10000 LOOP
        INSERT INTO Homework (homework_id, student_id, class_id, date_created, homework_content, grade, other_homework_details)
        VALUES (i, MOD(i, 10000) + 1, MOD(i, 10000) + 1, SYSDATE - MOD(i, 1000), 'Content ' || i, 'A', 'Details ' || i);
    END LOOP;
    COMMIT;
END;
/

-- Populate Reports table
BEGIN
    FOR i IN 1..10000 LOOP
        INSERT INTO Reports (report_id, student_id, class_id, date_created, report_content, teachers_comments, other_report_details)
        VALUES (i, MOD(i, 10000) + 1, MOD(i, 10000) + 1, SYSDATE - MOD(i, 1000), 'Report Content ' || i, 'Teacher Comments ' || i, 'Details ' || i);
    END LOOP;
    COMMIT;
END;
/

SELECT * FROM Addresses;