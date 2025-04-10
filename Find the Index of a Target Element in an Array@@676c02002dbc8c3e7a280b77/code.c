// Your code here...
int find(int arr[],int T,int N){
    int i;
    for(i=0;i<N;i++){
        if(arr[i]==T){
            return i;
        }
    }
    return -1;
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int T;
    scanf("%d",&T);
    int index=find(arr,T,N);
    printf("%d",index);
    return 0;
}