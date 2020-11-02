 #include <stdio.h>
 #include <stdlib.h>
 #include "genlib.h"
 #include "simpio.h"
 #define elements 50


 int ReadANumber();
 void fill_it(long a[],int SIZE);
 void print(int SIZE, long a[]);
 int FindMaxsPos(int size, long a[]);

  int main()
  {
 int SIZE;
 long a[elements];
  SIZE=ReadANumber();
  fill_it(a,SIZE);

  print(SIZE,a);
  FindMaxsPos(SIZE,a);

   system("pause");

    return 0;
    }
int ReadANumber()
{
 int ar;
 printf("Dose plithos twn stoixeiwn:");
 ar=GetInteger();
 return ar;
}
void fill_it(long a[],int SIZE)
{
 int i;
 for (i = 0; i<SIZE; i++)
 {
  printf("Dwse ta stoixeia:");
 a[i] = GetLong();
 }
}
void print(int SIZE, long a[])
{
 int i;
 for (i = 0; i<SIZE; i++)
 {
 printf("ta stoixeia einai %ld",a[i]);
 printf("\n");
 }

}
int FindMaxsPos(int size, long a[]){
  int max,i,count;
 max=a[0];
 count = 0;
 for (i=0;i<size;i++)
 {
 if(a[i]>max) max=a[i];
 }
 for (i=0;i<size;i++){
     if(a[i]==max) count++;
    }

 printf("O megaliteros arithmos einai: %d\n",max);
  printf("Plithos maximum: %d\n",count);

}


