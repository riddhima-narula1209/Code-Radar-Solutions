// Your code here...
#include<stdio.h>
int main(){
    int n,i,flag=0;
    scanf("%d",&n);
    if(n<=1){
        printf("Not Prime");
    }
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}