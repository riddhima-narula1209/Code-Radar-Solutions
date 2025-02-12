// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int rem=n-8;
    int oct=10 + rem;
    int rem2=n-9;
    int hex= 64+ rem2;
    printf("Hexadecimal:%c\n",rem2);
    printf("Octal:%d",rem);

    return 0;
}