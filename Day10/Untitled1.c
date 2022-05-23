#include <stdio.h>
int main()
{
int n, p;
int result = 1;
scanf("%d", &n);
scanf("%d", &p);
for (p; p>0; p--)
{
result = result * n;
}
printf("%lld", result);
return 0;
}
