// Your code here...
#include<stdio.h>
int main(){
    int even=0,odd=0;
    int N;
    scanf("%d",&N);
    int i;
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("%d ",even);
    printf("%d",odd);
    return 0;


}