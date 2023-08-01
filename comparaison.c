#include <stdio.h>

int main (){
    int a = 12;
    int b = 12 ;
    int c = 12;
    int res ;

    res = (a == b && b == c);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("res = %d\n", res);
   
    return 0;
}