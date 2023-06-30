echo "enter the number"
read n
fact=1
for(( i=1;i<=n;i++ ))
do
	((fact=fact*i))
done
echo "factorial is $fact"



enter the number
5
factorial is 120
