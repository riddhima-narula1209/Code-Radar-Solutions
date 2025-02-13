// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>1){
        if(n%1==0 && n%n==0){
            printf("Prime");
        }
        //printf("Prime");

    }
    else{
        printf("Not Prime");
    }
    
    return 0;
    
}