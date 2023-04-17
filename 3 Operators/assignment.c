/*
Assignments are expressions that assign values to variables.
The assignment operator is =.
The assignment operator has the lowest precedence of all operators.
The assignment operator associates from right to left.
*/
/*
=
+=
-=
*=
/=
%=
<<=
>>=
&=
^=
|=
*/
#include <stdio.h>

int main(){
    int a=10;
    int b=20;
    int c=0;

    c=a+b;
    printf("c=a+b=%d", c);
    c += a;
    printf("c+=a=%d", c);
    return 0;
}