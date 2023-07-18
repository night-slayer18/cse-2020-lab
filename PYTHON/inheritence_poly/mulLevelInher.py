class Parent:
    str1 = "Python"

class Child(Parent):
    str2 = "Geeks"

class GrandChild(Child):
    def get_str(self):
        print(self.str1 + self.str2)

person = GrandChild()
person.get_str()