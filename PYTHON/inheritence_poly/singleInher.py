class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

class Professor(Person):
    def isProfessor(self):
        return f"{self.name} is a Professor"

sir = Professor("John", 30)
print(sir.isProfessor())