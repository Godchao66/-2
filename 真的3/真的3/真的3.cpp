#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b,c;
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("%d %d", a, b);
    return 0;
}