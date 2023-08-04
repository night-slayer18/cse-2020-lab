BEGIN{
	send=0
	drop=0
}
{
	if($1=="+")
	{
		send++
	}
	if($1=="d")
	{
		drop++
	}
}
END{
	print("packets send:",send)
	print("packets drop:",drop)
	print("drop rate :",drop*100/send)
}
