// Your code here...
#include<stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    switch(n){
        case 'R':
        printf("Stop");
        case 'G':
        printf("Go");
        case 'Y':
        printf("Slow Down");
        default:
        printf("Invalid input");
    }
    return 0;
}