// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    int d;
    scanf("%d ",&a);
    scanf("%d ",&b);
    scanf("%d",&c);
    d=a+b;
    if(d>c){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;

}