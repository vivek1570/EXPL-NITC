decl
   int r1,qi,r0,si,ti,ri;
  enddecl

  int main()
  {
   decl
    int s0,s1,t0,t1;
   enddecl

   begin
    read(r0);
    read(r1);
    s0 = 1;
    s1 = 0;
    t0 = 0;
    t1 = 1;

    while(r1 != 0) do
     qi = r0/r1;
     ri = r0 - (qi*r1);
     si = s0 - (qi*s1);
     ti = t0 - (qi*t1);
     r0 = r1;
     r1 = ri;
     s0 = s1;
     s1 = si;
     t0 = t1;
     t1 = ti;
    endwhile;

    write(r0);
    write(s0);
    write(t0);

    return 0;
   end
  }
