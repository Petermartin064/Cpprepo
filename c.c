#include <stdio.h>  
  
int main( )  
{  
int a = 5;  
int *b;  
b = &a;  
  
printf ("value of a = %d\n", a);  
printf ("value of a = %d\n", *(&a));  
printf ("value of a = %d\n", *b);  
printf ("address of a = %d\n", &a);  
printf ("address of a = %d\n", b);  
printf ("address of b = %d\n", &b);  
printf ("value of b = address of a = %d", b);  
return 0;  
}  
