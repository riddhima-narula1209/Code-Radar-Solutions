// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12){
        printf("%d",31);
    }
    else{
        printf("%d",30);
    }
    return 0;
}