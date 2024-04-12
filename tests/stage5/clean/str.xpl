decl
str fun1(str s), fun2(str s);
enddecl

str fun1(str s){

decl
	str ret;
enddecl

begin
	if(s == "Hi") then
		ret = "Bye";
		else
			ret = "Farewell";
			if(s =="Hello") then
				ret = "World";
			endif;
			
	endif;
	return fun2(ret);
end
}



str fun2(str s){
decl
	str ret;
enddecl

begin
if (s== "Hi") then
	ret = "2";
	else
		ret = "1";
		if(s== "Hello") then
			ret = "3";
		endif;
endif;

return ret;
end
}


int main(){
	decl 
		int n;
	enddecl
	begin
		str s1, s2, s3;
		s1 = "Hello";
		s2 = fun1(s1);
		write(s2);
		write(fun1(s1));
		s1 = "Hi";
		s2 = fun1(s1);
		write(s2);
		write(fun1(s1));
		s1 = fun1("Bye");
		write(s1);
		n = 0;
	
	return n;

	end
}
