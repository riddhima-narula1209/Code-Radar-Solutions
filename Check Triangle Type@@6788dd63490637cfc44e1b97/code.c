// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d ",&a);
    scanf("%d ",&b);
    scanf("%d",&c);
    if(a==b && a==c){
        printf("Equilateral");
    }
    else if(a==b || a==c){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}