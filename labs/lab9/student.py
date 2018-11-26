class Student:
    def __init__(self, id, name):
        self._id=id
        self._name=name
        self._courses=[]

    def set_courses(self, courses):
        self._courses = courses

    def __str__(self):
        l =""
        for c in self._courses:
            l += str(c)+ "  "
        return "Student id: "+str(self._id) + "\nname: " +self._name+ "\nenrolled in: " + l
