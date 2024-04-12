decl
	int toh(int n, string src, string dst);
enddecl

int toh(int n, string src, string dst, string inter){
	decl
		int dummy;
	enddecl
	begin
		if (n == 0) then
			return 0;
		else
			dummy = toh(n - 1, src, inter, dst);
			write("Move ");
			write(n);
			write(" from ");
			write (src);
			write(" to ");
			write(dst);
			dummy = toh(n - 1, inter, dst, src);
	end
		
}

int main(){
	decl
		int n, dummy;
	enddecl
	
	begin
		read(n);
		dummy = toh(n, "A", "B", "C");
		return 0;
	end

}

