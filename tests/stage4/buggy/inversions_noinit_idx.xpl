decl
	int n, arr[50], i, j, idx;
enddecl

read(n);
read(k);
i = 0;
while(k >= n) do
	n = n - 1;
	a[i] = n;
	i = i + 1;
	k = k - n;
endwhile;



while (idx < n - k - 1) do
	a[idx  + i] = idx;
	idx = idx + 1;
endwhile;

a[i + n - 1 - k] = n - 1;

idx = n - k;

while (idx < n) do 
	a[idx + i] = idx - 1;
	idx = idx + 1;
endwhile

i = 0;

while( i < n)
	write(a[i]);
	
endwhile

