BEGIN{
	data=0
}
{
	if($1=="r" && $5=="tcp" && $4==4)
	{
		data+=$6
		print $2,data*8/$2/1000000
	}
}END{
}
