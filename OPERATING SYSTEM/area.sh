opt=0
while [ $opt -ne 5 ]
do
	echo "1.AREA OF CIRCLE 2.CIRCUMFERENCE OF CIRCLE 3.AREA OF RECTANGLE 4.AREA OF SQUARE 5.EXIT"
	echo "enter an option"
	read opt
	if [ $opt -eq 1 ]
	then
		echo "enter the radius"
		read r
		echo "the area of circle is"
		echo "3.14*$r*$r" | bc
	elif [ $opt -eq 2 ]
	then
		echo "enter the radius"
		read r
		echo "the circumference of the circle is"
		echo "2*3.14*$r" | bc
	elif [ $opt -eq 3 ]
	then
		echo "enter the length and breadth"
		read l
		read b
		((area=l*b))
		echo "area of rectangle is $area"
	elif [ $opt -eq 4 ]
	then
		echo "enter the length of the side"
		read s
		((area=s*s))
		echo "area of square is $area"
	elif [ $opt -eq 5 ]
	then
		echo "EXITING....."
		exit
	else
		echo "enter a valid input"
	fi
done



1.AREA OF CIRCLE 2.CIRCUMFERENCE OF CIRCLE 3.AREA OF RECTANGLE 4.AREA OF SQUARE 5.EXIT
enter an option
1
enter the radius
23
the area of circle is
1661.06
1.AREA OF CIRCLE 2.CIRCUMFERENCE OF CIRCLE 3.AREA OF RECTANGLE 4.AREA OF SQUARE 5.EXIT
enter an option
2
enter the radius
9
the circumference of the circle is
56.52
1.AREA OF CIRCLE 2.CIRCUMFERENCE OF CIRCLE 3.AREA OF RECTANGLE 4.AREA OF SQUARE 5.EXIT
enter an option
3
enter the length and breadth
5
6
area of rectangle is 30
1.AREA OF CIRCLE 2.CIRCUMFERENCE OF CIRCLE 3.AREA OF RECTANGLE 4.AREA OF SQUARE 5.EXIT
enter an option
4
enter the length of the side
8
area of square is 64
1.AREA OF CIRCLE 2.CIRCUMFERENCE OF CIRCLE 3.AREA OF RECTANGLE 4.AREA OF SQUARE 5.EXIT
enter an option
5
EXITING.....

