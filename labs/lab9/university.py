import sys
from student import Student
from course import Course

class University:

    def __init__(self):
        self._students= []
        self._courses= []

    def create_course(self, course_id, course_name):
        self._courses.append(Course(course_id,course_name))

    def show_courses(self):
        for course in self._courses:
            print(course)

    def get_course(self, course_id):
        for course in self._courses:
            if(course._id == course_id):
                return course

    def create_student(self, student_id, student_name):
        self._students.append(Student(student_id,student_name))

    def get_student(self, student_id):
        for student in self._students:
            if(student._id == student_id):
                return student

    def enroll_student(self, student_id, course_id):
        self.get_student(student_id)._courses.append(self.get_course(course_id))


    def student_drop_course(self, student_id, course_id):
        s = self.get_student(student_id)
        s.set_courses(list(filter(lambda c: c._id !=course_id, s._courses)))
 
    def expel(self, student_id):
        self._students = list(filter(lambda s: s._id !=student_id,self._students))

    def show_students(self):
        for s in self._students:
            print(s)

    def __str__(self):
        uni = "Students:\n"
        for s in self._students:
            uni += "   "+ s._name + " #" + str(s._id) + ",\n"

        uni += "Clases:\n"
        for c in self._courses:
            uni += "   "+ c._name + " #" + str(c._id)+ ",\n"
        return uni
