class noParam(object):
    def __init__(self):
        self.radius=10

    def area(self):
        print('Area:',3.14*self.radius*self.radius)

def main():
    c1=noParam()
    c1.area()
    c2=noParam()
    c2.radius=100
    c2.area()
if __name__=="__main__":
    main()