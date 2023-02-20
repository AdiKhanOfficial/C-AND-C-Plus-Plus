#include<stdio.h>
 
int main()
{
   int n, a = 3, b, c;
   printf("Enter the number of prime numbers required\n");
   scanf("%d",&n);
   if ( n >= 1 )
   {
      printf("First %d prime numbers are :\n",n);
      printf("2\n");
   }
   for ( b = 2 ; b <= n ;b++  )
   {
      for ( c = 2 ; c <a ; c++ )
      {
	 if ( a%c == 0 )
	    break;
      }
      if ( c == a )
      {
	 printf("%d\n",a);
      }
      a++;
   }
   return 0;
}