class SuperClass1:
    def __init__(self):
        self.num1 = 3

class SuperClass2:
    def __init__(self):
        self.num2 = 5

class SubClass( SuperClass1, SuperClass2):
    def addition(self):
        SuperClass1.__init__(self)  
        SuperClass2.__init__(self)
        return self.num1 + self.num2

obj = SubClass()
print(obj.addition())