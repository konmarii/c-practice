#include <stdio.h>

void main(){
    int rectangleLength;
    printf("長方形の幅：");
    scanf("%d", &rectangleLength);
    
    int rectangleHeight;
    printf("長方形の高さ：");
    scanf("%d", &rectangleHeight);
    
    printf("長方形の面積は、%dm２です。\n", rectangleLength*rectangleHeight);
}