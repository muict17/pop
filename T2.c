#includestdio.h
int main(){
  int n;
  scanf(%d,&n);
  int arr[n+1];
  for(int i=1;in+1;i++){
    do{
      scanf(%d,&arr[i]);
    }while(arr[i]!=0&&arr[i]!=1);
    if(arr[i]==0){
      arr[i]=1;
    }
    else if(arr[i]==1){
      arr[i]=0;
    }
  }
  printf(n);
  arr[n]=arr[n]+1;
  for(int i=n;i0;i--){
    if(arr[i]==2){
      arr[i]=0;
      arr[i-1]=arr[i-1]+1;
    }
  }
  for(int i=0;in+1;i++){
    printf(%d ,arr[i]);
  }
  return 0;
}