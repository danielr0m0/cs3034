class Course:
    def __init__ (self, id, name):
        self._id= id
        self._name=name

    def __str__(self):
        return self._name + " #" + str(self._id)
