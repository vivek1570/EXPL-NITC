read(a);
read(b);
i = 0;
j = 0;
c = 0;
while (i < n) do
	j = 0;
	while(j=n) do
		if(i<j) then
			c = j - i;
		else
			c = i - j;
		endif
		
		if (c <= b) then
			write("*  ");
		else
			write("0  ");
		j = j +1;
		
	
	write("\n");
	i = i + 1;
endwhile
