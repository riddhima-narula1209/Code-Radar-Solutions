// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    int c;
    scanf("%d ",&a);
    scanf("%d",&b);
    c=a-b;
    if(c>0){
        printf("Loss");
    }
    else if(c<0){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;

}