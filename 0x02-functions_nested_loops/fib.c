#include <stdio.h>



int main (void)
{
int sum, one, two, counter;
one = 0;
two = 1;
sum = one + two;
counter = 1;

while (counter <= 50)
sum = one + two;
counter++;
 printf("%d, ", sum);
return (0);
}
