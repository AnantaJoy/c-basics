// commenting using preprocessor in a c program
#include <stdio.h>
#if 0 /* this is a comment */
int main(){
    // This is a single line comment
    /* This is a multi-line comment
    that spans multiple lines */
    return 0;
}
#endif
int main()
{
    // This is a single line comment
    /* This is a multi-line comment
    that spans multiple lines */
    printf("Hello World\n");
    return 0; // This is a single line comment/ 
}
