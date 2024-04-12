type Complex{
	int real, imaginary;
}

endtype


decl
	Complex c1, c2, c;
	Complex sum(Complex c1, Complex c2);
	Complex show(Complex f);
enddecl


Complex sum(Complex c1, Complex c2){
	decl
		Complex c;
	enddecl
	begin
		c = alloc();
		c.real = c1.real + c2.real;
		c.imaginary = c1.imaginary + c2.imaginary;
	
		return c;
	end

}

int show(Complex c){

write(c.real);
write(" +")
write(c.imaginary);
write("i");

}

int main(){
decl
	int temp, a, b, c, d;
	Complex c1, c2, c;
enddecl

begin
read(a);
read(b);
read(c);
read(d);

c1 = alloc();
c2 = alloc();
c = alloc();
c1.real = a;
c1.imaginary = b;
c2.real = c;
c2.imaginary = d;

c = sum(c1, c2);

temp = initialize();
temp = show(c);

return 0;
end

}
