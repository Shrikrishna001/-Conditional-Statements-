#include<stdio.h>
int main()
{
   int n;
   printf("Enter the Marks: ");
   scanf("%d",&n);
   if(n>=75)
{
   printf("Grade A");
}
   else if(n<75 && n>=50)
{
   printf("Grade B");
}
   else if(n<50 && n>=25)
{
   printf("Grade C");
}
   else
{
   printf("Grade F");
}
   return 0;
} 
