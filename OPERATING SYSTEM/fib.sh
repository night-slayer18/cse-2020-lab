echo "enter a limit"
read n
a=0
b=1
echo "the fibonacci series is "
for(( i=0;i<n;i++ ))
do
	echo $a
	((fn=a+b))
	a=$b
	b=$fn
done



enter a limit
10
the fibonacci series is 
0
1
1
2
3
5
8
13
21
34
