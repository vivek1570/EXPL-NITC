read(a);
read(b);
i = 0;
j = 0;
c = 0;
while (i < n) do
	j = 0;
	while(j<n) do
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
		
	endwhile
	write("\n");
	i = i + 1;
endwhile










int n, d, dist;
        boolean d_cond;
        n = Integer.parseInt(args[0]);
        d = Integer.parseInt(args[1]);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                dist = Math.abs(i - j);
                if (dist <= d)
                    System.out.print("*  ");
                else
                    System.out.print("0  ");

            }
            System.out.println();
