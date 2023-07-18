from breezypythongui import EasyFrame
import random

class FrameDemo(EasyFrame):
    def __init__(self):
        self.num = random.randint(1,100)
        self.count=0
        EasyFrame.__init__(self, title="window", width=500, height=500)
        self.inputLabel = self.addLabel(text="Guess a number between 1 and 100", row=0, column=0,columnspan=2,sticky="N")
        self.inputField = self.addIntegerField(value=0, row=1,width=10,column=0,columnspan=2,sticky="NSEW")
        self.confirm = self.addButton(text="confirm", row=2, column=0, command=self.confirm)
        self.new = self.addButton(text="new",row=2,column=1,state="disabled",command=self.newGame)
    def confirm(self):
        guessText = self.inputField.getNumber()
        if guessText == self.num:
            self.inputLabel["text"]="You guessed correctly in "+ str(self.count) + " times"
            self.confirm["state"]="disabled"
            self.new['state']='active'
        elif guessText > self.num:
            self.count+=1
            self.inputLabel["text"]="You guessed too high!"
            self.new['state']="disabled"
        elif guessText < self.num:
            self.count+=1
            self.inputLabel["text"]="You guessed too low!"
            self.new['state']="disabled"
    
    def newGame(self):
        self.num = random.randint(1,100)
        self.count=0
        self.inputLabel["text"]="Guess a number between 1 and 100"
        self.inputField.setNumber(0)
        self.confirm["state"]="active"
        self.new['state']='disabled'
            
def main():
    FrameDemo().mainloop()

if __name__ == "__main__":
    main()