class X:
    num = 10
class A(X):
    pass
class B(A):
    pass
class C(A):
    pass
class D(B, C):
    pass

ob = D()
ob.num = 100
print(ob.num)