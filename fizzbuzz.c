#include <stdio.h>

int main()
{
int a = 1;

while(a<=100)
{
  if(a%30==0) printf("GitHub ");
 else if(a%15==0) printf("FizzBuzz ");
else if(a%3==0) printf("Fizz ");
else if(a%5==0) printf("Buzz ");
else printf("%d ", a);
a++;
if(a%10==0) printf("\n");
}
return 0;
}
