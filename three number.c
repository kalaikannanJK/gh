#include <stdio.h>
void main() {
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
int max;
if(a>b && a>c)
{
printf("%d is greater",a);
}
else if(b>a && b>c)
{
printf("%d is greater",b);
}
else
{
printf("%d is greater",c);
}
getch();
}
