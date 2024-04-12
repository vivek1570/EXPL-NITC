1.for functions binding address is not added
2.sp is strating from bind is at 4096


Each activation record must have a base pointer BP

relative to teh base the all the local variables and arguments are saved

for initialy the BP is initialized to the base

if Main calls funtion Fact  then activation  record of Fat is cregated above the activation record of main

return adrresss is IP+2



Tasks
1.  Local table for each function and putting adrress into it.


over//

1. do the return in main
2. all kinda type cheking and evaluation



decl
  int a,b,n,arr[10];
  int swap(int index, int newindex);
  int readarr(int temp);
  int writearr(int temp);
  int partition (int low, int high);
  int quicksort(int low,int high);
enddecl

int swap(int index ,int newindex)
{
  decl
    int s;
  enddecl

  begin
    s = arr[index];
    arr[index] = arr[newindex];
    arr[newindex] = s;

    return s;
  end
}

int readarr(int temp)
{
  decl
    int count;
  enddecl

  begin
    count=0;

    while(count < temp) do
      read(arr[count]);
      count=count+1;
    endwhile;

    return count;
  end
}

int writearr(int temp)
{
  decl
    int count;
  enddecl

  begin
    count = 0;

    while(count < temp) do
      write(arr[count]);
      count = count+1;
    endwhile;

    return count;
  end
}

int partition (int low, int high)
{
  decl
    int pivot,t;
    int i,j;
  enddecl

  begin
    pivot = arr[high];
    j = low;
    i = low;

    while(i < high) do
      if (arr[i] <= pivot) then
      t = swap (i , j);
      j = j+1;
      endif;
      i=i+1;
    endwhile;

    i = swap (j , high);

    return j;
  end
}



int quicksort (int low , int high)
{
  decl
    int pp,temp,t;
  enddecl

  begin

    if (low < high) then
      pp = partition (low , high);
      temp = quicksort(pp+1,high);
      t = quicksort(low , pp-1);
    endif;

    return 1;
  end
}

int main()
{
  decl
    int junk;
    int temp;
  enddecl

  begin

    read(n);
    junk = readarr(n);
    temp = quicksort(0,n-1);
    write("val:");
    write(temp);
    junk = writearr(n);

  end
}




// for (int i = 0; i <= reg; i++)
        //         fprintf(fp, "PUSH R%d\n", i);
        //     status = reg;


 // for (int i = status; i >= 0; i--)
        //         fprintf(fp, "POP R%d\n", i);
        //     reg = status;