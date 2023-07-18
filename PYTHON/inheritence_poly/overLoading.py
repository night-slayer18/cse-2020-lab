from multipledispatch import dispatch

class Human(object):
    def __init__(self):
        pass
    
    @dispatch(int, int)
    def add(self, a, b):
        print(a + b)

    @dispatch(int, int, int)
    def add(self, a, b, c):
        print(a + b + c)

    @dispatch(float, float)
    def add(self, a, b):
        print(a + b)

def main():
    h = Human()
    h.add(1, 2)
    h.add(1, 2, 3)
    h.add(2.2, 3.3)

if __name__ == '__main__':  
    main()