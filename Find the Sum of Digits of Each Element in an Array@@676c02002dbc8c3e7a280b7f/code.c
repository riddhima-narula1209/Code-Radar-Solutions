// Your code here...
#include<stdio.h>
int main(){
    int i;
    int N;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        int n,r;
        int sum=0;
        while(n>0){
            r=n%10;
            sum=sum+r;
            n=n/10;
        }
    }
    printf("%d",arr[i]);
    return 0;
}