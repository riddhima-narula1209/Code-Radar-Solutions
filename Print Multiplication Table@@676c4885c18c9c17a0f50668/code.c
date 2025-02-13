// Your code here...
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d * %d = %d\n",n,i,n*i);
        }

    }
    return 0;
}