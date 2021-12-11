#include <stdio.h>
 
void main(){
    int a;
    printf("a=");
    scanf("%d", &a);
    
    int b;
    printf("b=");
    scanf("%d", &b);

    printf("a+b=%d\n", a+b);
    printf("a-b=%d\n", a-b);
    printf("a*b=%d\n", a*b);
    printf("a/b=%d\n", a/b);
    printf("a%%b=%d\n", a%b);
    
}