#include <stdio.h>
#include<stdlib.h>
#include <time.h>
/**
* main - Genarates random valid password for the
* program 101-crackme
* Return: Always 0
*/
int main(void)
{
char passwd[84];
int index = 0, sum = 0, half1, half2;
srand(time(0));
while (sum < 2722)
{
passwd[index] = 33 + rand() % 94;
sum += passwd [index++];
}
passwd[index] = '\0';
if (sum != 2722)
{
half1 = (sum - 2722) / 2;
half2 = (sum - 2722) / 2;
if ((sum - 2722) % 2 != 0)
half1++;
for (index = 0; passwd[index]; index++)
{
if (passwd[index] >= (33 + half1))
{
passwd[index] -= half1;
break;
}
for (index = 0; passwd[index]; index++)
{
if (passwd[index] >= (33 + half2))
{
passwd[index] -= half2;
break;
}
}
}
printf("%s", passwd);
return (0);
}
}
