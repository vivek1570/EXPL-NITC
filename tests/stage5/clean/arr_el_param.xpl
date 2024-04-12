decl
	int n, a[5], fun1(int n);
enddecl

int main{
	decl
		int a[5], temp1, temp2;
	enddecl
	begin
		temp1 =2;
		temp2 = 1;
		a[temp1 + temp2] = 3;
		
		temp1 = fun1(a[temp1 + temp2]);
		return 0;
	end

}

int fun1(int n){
decl
	int ret;
enddecl

begin
	write(n);
	return 0;
end

}
