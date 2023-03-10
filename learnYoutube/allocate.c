#include <stdio.h>

void bar(int a, int b)
{
if (b%2 == a && b >= 2) {
printf("hi");
bar(1-a, b-4);
}
else if (b > 0) {
printf("ha");
bar(a, b-1);
}
}
int main()
{
bar(1, 10);
return 0;
}