opt=0
while [ $opt -ne 6 ]
do
	echo "1.ADDITION 2.SUBTRACTION 3.MULTIPLICATION 4.DIVISION 5.MODULUS 6.EXIT "
	echo "enter an option"
	read opt
	if [ $opt -eq 1 ]
	then
		echo "enter two numbers"
		read a
		read b
		((sum=a+b))
		echo "sum : $sum"
	elif [ $opt -eq 2 ]
	then
		echo "enter two numbers"
		read a
		read b
		((diff=a-b))
		echo "difference : $diff"
	elif [ $opt -eq 3 ]
	then
		echo "enter two numbers"
		read a
		read b
		((mul=a*b))
		echo "product : $mul"
	elif [ $opt -eq 4 ]
	then
		echo "enter two numbers"
		read a
		read b
		((div=a/b))
		echo "division : $div"
	elif [ $opt -eq 5 ]
	then
		echo "enter two numbers"
		read a
		read b
		((mod=a%b))
		echo "modulus : $mod"
	elif [ $opt -eq 6 ]
	then
		echo "EXITING...."
		exit
	else
		echo "enter a valid input"
	fi
done





1.ADDITION 2.SUBTRACTION 3.MULTIPLICATION 4.DIVISION 5.MODULUS 6.EXIT 
enter an option
1
enter two numbers
45
65
sum : 110
1.ADDITION 2.SUBTRACTION 3.MULTIPLICATION 4.DIVISION 5.MODULUS 6.EXIT 
enter an option
2
enter two numbers
12
39
difference : -27
1.ADDITION 2.SUBTRACTION 3.MULTIPLICATION 4.DIVISION 5.MODULUS 6.EXIT 
enter an option
3
enter two numbers
45
6
product : 270
1.ADDITION 2.SUBTRACTION 3.MULTIPLICATION 4.DIVISION 5.MODULUS 6.EXIT 
enter an option
4
enter two numbers
74
6
division : 12
1.ADDITION 2.SUBTRACTION 3.MULTIPLICATION 4.DIVISION 5.MODULUS 6.EXIT 
enter an option
5
enter two numbers
36
12
modulus : 0
1.ADDITION 2.SUBTRACTION 3.MULTIPLICATION 4.DIVISION 5.MODULUS 6.EXIT 
enter an option
6
EXITING....

