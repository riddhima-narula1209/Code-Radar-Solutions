// Your code here...
#include<stdio.h>
void sum(int r,int n,int sum){
    int sum=0;
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    return sum;
}
int main(){
    int N;
    scanf("%d",&N);
    int i;
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        printf("%d ",sum(n,r,sum));
    }
    return 0;
}