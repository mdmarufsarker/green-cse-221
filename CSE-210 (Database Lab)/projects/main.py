import random
from datetime import datetime, timedelta

# Sample lists of names
first_names = ["John", "Jane", "Alex", "Emily", "Chris", "Katie", "Michael", "Laura", "David", "Sarah"]
middle_names = ["James", "Anne", "Lee", "Marie", "Jordan", "Grace", "Ryan", "Louise", "Scott", "Elizabeth"]
last_names = ["Smith", "Johnson", "Williams", "Jones", "Brown", "Davis", "Miller", "Wilson", "Moore", "Taylor"]
schools = ["Greenwood High", "Riverdale Academy", "Hilltop School", "Lakewood School", "Sunrise Academy"]
subjects = ["Math", "Science", "History", "Art", "Physical Education"]

def random_date(start_year=1990, end_year=2010):
    """Generate a random date of birth."""
    start_date = datetime(start_year, 1, 1)
    end_date = datetime(end_year, 12, 31)
    delta = end_date - start_date
    random_days = random.randint(0, delta.days)
    return (start_date + timedelta(days=random_days)).strftime('%Y-%m-%d')

def generate_student_inserts():
    with open('insert_students.sql', 'w') as f:
        for i in range(1, 10001):
            student_id = f'S{i}'
            gender = 'M' if i % 2 == 0 else 'F'
            first_name = random.choice(first_names)
            middle_name = random.choice(middle_names)
            last_name = random.choice(last_names)
            date_of_birth = random_date()
            other_student_details = "Details about student " + first_name

            query = (f"INSERT INTO Students (student_id, gender, first_name, middle_name, last_name, date_of_birth, other_student_details) "
                     f"VALUES ('{student_id}', '{gender}', '{first_name}', '{middle_name}', '{last_name}', TO_DATE('{date_of_birth}', 'YYYY-MM-DD'), '{other_student_details}');\n")
            f.write(query)

def generate_addresses_inserts():
    with open('insert_addresses.sql', 'w') as f:
        for i in range(1, 10001):
            address_details = f"Address {i}"
            query = f"INSERT INTO Addresses (address_id, address_details) VALUES ({i}, '{address_details}');\n"
            f.write(query)

def generate_schools_inserts():
    with open('insert_schools.sql', 'w') as f:
        for i in range(1, 10001):
            address_id = random.randint(1, 10000)
            school_name = random.choice(schools)
            school_principal = random.choice(first_names) + " " + random.choice(last_names)
            other_school_details = f"Details about {school_name}"
            query = (f"INSERT INTO Schools (school_id, address_id, school_name, school_principal, other_school_details) "
                     f"VALUES ({i}, {address_id}, '{school_name}', '{school_principal}', '{other_school_details}');\n")
            f.write(query)

def generate_parents_inserts():
    with open('insert_parents.sql', 'w') as f:
        for i in range(1, 10001):
            gender = random.choice(['M', 'F'])
            first_name = random.choice(first_names)
            middle_name = random.choice(middle_names)
            last_name = random.choice(last_names)
            other_parent_details = f"Details about {first_name}"
            query = (f"INSERT INTO Parents (parent_id, gender, first_name, middle_name, last_name, other_parent_details) "
                     f"VALUES ({i}, '{gender}', '{first_name}', '{middle_name}', '{last_name}', '{other_parent_details}');\n")
            f.write(query)

def generate_parent_addresses_inserts():
    with open('insert_parent_addresses.sql', 'w') as f:
        for i in range(1, 10001):
            parent_id = random.randint(1, 10000)
            address_id = random.randint(1, 10000)
            date_address_from = random_date()
            date_address_to = random_date()
            query = (f"INSERT INTO Parent_Addresses (parent_id, address_id, date_address_from, date_address_to) "
                     f"VALUES ({parent_id}, {address_id}, TO_DATE('{date_address_from}', 'YYYY-MM-DD'), TO_DATE('{date_address_to}', 'YYYY-MM-DD'));\n")
            f.write(query)

def generate_student_addresses_inserts():
    with open('insert_student_addresses.sql', 'w') as f:
        for i in range(1, 10001):
            student_id = random.randint(1, 10000)
            address_id = random.randint(1, 10000)
            date_from = random_date()
            date_to = random_date()
            query = (f"INSERT INTO Student_Addresses (student_id, address_id, date_from, date_to) "
                     f"VALUES ({student_id}, {address_id}, TO_DATE('{date_from}', 'YYYY-MM-DD'), TO_DATE('{date_to}', 'YYYY-MM-DD'));\n")
            f.write(query)

def generate_teachers_inserts():
    with open('insert_teachers.sql', 'w') as f:
        for i in range(1, 10001):
            school_id = random.randint(1, 10000)
            gender = random.choice(['M', 'F'])
            first_name = random.choice(first_names)
            middle_name = random.choice(middle_names)
            last_name = random.choice(last_names)
            other_teacher_details = f"Details about {first_name}"
            query = (f"INSERT INTO Teachers (teacher_id, school_id, gender, first_name, middle_name, last_name, other_teacher_details) "
                     f"VALUES ({i}, {school_id}, '{gender}', '{first_name}', '{middle_name}', '{last_name}', '{other_teacher_details}');\n")
            f.write(query)

def generate_subjects_inserts():
    with open('insert_subjects.sql', 'w') as f:
        for i in range(1, 10001):
            subject_name = random.choice(subjects)
            query = f"INSERT INTO Subjects (subject_id, subject_name) VALUES ({i}, '{subject_name}');\n"
            f.write(query)

def generate_classes_inserts():
    with open('insert_classes.sql', 'w') as f:
        for i in range(1, 10001):
            subject_id = random.randint(1, 10000)
            teacher_id = random.randint(1, 10000)
            class_code = f"C{i}"
            class_name = f"Class {i}"
            date_from = random_date()
            date_to = random_date()
            query = (f"INSERT INTO Classes (class_id, subject_id, teacher_id, class_code, class_name, date_from, date_to) "
                     f"VALUES ({i}, {subject_id}, {teacher_id}, '{class_code}', '{class_name}', TO_DATE('{date_from}', 'YYYY-MM-DD'), TO_DATE('{date_to}', 'YYYY-MM-DD'));\n")
            f.write(query)

def generate_student_parents_inserts():
    with open('insert_student_parents.sql', 'w') as f:
        for i in range(1, 10001):
            student_id = random.randint(1, 10000)
            parent_id = random.randint(1, 10000)
            query = f"INSERT INTO Student_Parents (student_id, parent_id) VALUES ({student_id}, {parent_id});\n"
            f.write(query)

def generate_families_inserts():
    with open('insert_families.sql', 'w') as f:
        for i in range(1, 10001):
            head_of_family_parent_id = random.randint(1, 10000)
            family_name = f"Family {i}"
            query = (f"INSERT INTO Families (family_id, head_of_family_parent_id, family_name) "
                     f"VALUES ({i}, {head_of_family_parent_id}, '{family_name}');\n")
            f.write(query)

def generate_family_members_inserts():
    with open('insert_family_members.sql', 'w') as f:
        for i in range(1, 10001):
            family_id = random.randint(1, 10000)
            parent_or_student_member = random.choice(['P', 'S'])
            parent_id = random.randint(1, 10000) if parent_or_student_member == 'P' else 'NULL'
            student_id = random.randint(1, 10000) if parent_or_student_member == 'S' else 'NULL'
            parent_id_str = str(parent_id) if parent_or_student_member == 'P' else 'NULL'
            student_id_str = str(student_id) if parent_or_student_member == 'S' else 'NULL'
            query = (f"INSERT INTO Family_Members (family_member_id, family_id, parent_or_student_member, parent_id, student_id) "
                     f"VALUES ({i}, {family_id}, '{parent_or_student_member}', {parent_id_str}, {student_id_str});\n")
            f.write(query)

def generate_student_classes_inserts():
    with open('insert_student_classes.sql', 'w') as f:
        for i in range(1, 10001):
            student_id = random.randint(1, 10000)
            class_id = random.randint(1, 10000)
            query = f"INSERT INTO Student_Classes (student_id, class_id) VALUES ({student_id}, {class_id});\n"
            f.write(query)

def generate_all_inserts():
    generate_student_inserts()
    generate_addresses_inserts()
    generate_schools_inserts()
    generate_parents_inserts()
    generate_parent_addresses_inserts()
    generate_student_addresses_inserts()
    generate_teachers_inserts()
    generate_subjects_inserts()
    generate_classes_inserts()
    generate_student_parents_inserts()
    generate_families_inserts()
    generate_family_members_inserts()
    generate_student_classes_inserts()

if __name__ == "__main__":
    generate_all_inserts()
