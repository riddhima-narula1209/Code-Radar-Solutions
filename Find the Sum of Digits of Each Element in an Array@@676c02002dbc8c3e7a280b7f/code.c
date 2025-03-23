// Your code here...
#include<stdio.h>
int sumdigits(int n){
    int sum=0;
    int r;
    n=(n<0)? -n:n;
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
        printf("%d ",sumdigits(arr[i]));
    }
    return 0;
}