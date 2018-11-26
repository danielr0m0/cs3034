import sys
from university import University

def main():
    university = University()
    university.create_student(323,"bob")
    university.create_student(12,"bill")

    university.create_course(206, "math")
    university.create_course(101, "english")
    university.create_course(3034,"cs")

    print(university)
    print()

    university.enroll_student(323,3034)
    university.enroll_student(323,101)
    university.enroll_student(12,3034)
    university.enroll_student(12,206)
    university.show_students()

    print("\nbob drop english", end="\n\n")
    university.student_drop_course(323,101)
    university.show_students()
    print("\nexpel bob", end="\n\n")
    university.expel(323)
    university.show_students()



if __name__ == "__main__":
    sys.exit(main())
