class Student(object):
    def __init__(self,name,age):
        self.name=name
        self.age=age
    
    def display(self):
        print('Name:',self.name,'Age:',self.age)

def main():
    name1,name2=input().split()
    age1,age2=map(int,input().split())
    s1=Student(name1,age1)
    s1.display()
    s2=Student(name2,age2)
    s2.display()
if __name__=="__main__":
    main()