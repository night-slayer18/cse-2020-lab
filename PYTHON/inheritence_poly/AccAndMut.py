class Student(object):
    def __init__(self,name,age,mark):
        self.name=name
        self.age=age
        self.mark=mark

    def getNameAccessor(self):
        return self.name
    
    def getAgeAccessor(self):
        return self.age
    
    def updateMarkMutator(self,newMark):
        self.mark=newMark

    def display(self):
        print('Name:',self.name)
        print('Age:',self.age)
        print('Mark:',self.mark)

def main():
    s1=Student('John',20,90)
    print("Name:",s1.getNameAccessor(),"Age:",s1.getAgeAccessor())
    s1.display()
    s2=Student('Mary',19,80)
    print("Name:",s2.getNameAccessor(),"Age:",s2.getAgeAccessor())
    s1.updateMarkMutator(100)
    s1.display()
    s2.updateMarkMutator(70)
    s2.display()

if __name__=="__main__":
    main()