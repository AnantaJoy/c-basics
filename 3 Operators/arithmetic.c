/* 
arithmetic operators:
+ - * / % ++ --
*/
#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 25;
    int d = 25;
    int e;

    e = (a + b) * c / d;      // ( 30 * 25 ) / 25
    printf("(%d + %d) * %d / %d = %d\n", a, b, c, d, e);
    printf("%d %% %d = %d\n",d,a,d%a);
    return 0;
}