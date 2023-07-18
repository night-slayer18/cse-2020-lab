class SuperClass:
    x = 3
class SubClass1(SuperClass):
    pass
class SubClass2(SuperClass):
    pass
class SubClass3(SuperClass):
    pass
a = SubClass1()
b = SubClass2()
c = SubClass3()
print(a.x, b.x, c.x)