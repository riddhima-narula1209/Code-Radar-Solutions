// Your code here...
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(n%i==0){
            printf("Not Prime");
            break;
        }
        else{
            printf("Prime");
        }

    }
    return 0;
    
}