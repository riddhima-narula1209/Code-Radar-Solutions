// Your code here...
#include<stdio.h>
int main(){
    int i,sorted=1;
    int N;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N-1;i++){
        if(arr[i]>arr[i+1]){
            sorted=0;
            break;
        }

    }
    if(sorted){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;

}