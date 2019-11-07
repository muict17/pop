#include<stdio.h>
#include<math.h>
int main (){
  int n,k=2;
  scanf("%d",&n);
  int x=n;
  while(x%3!=0){
    x++;
  }
  int y=x/3;
  int arr[x],e[y];
  
  for(int i=0;i<x;i++){
    arr[i]=0;
  }
  for(int i=0;i<x;i++){
    e[i]=0;
  }
  for(int i=x-n;i<x;i++){
    scanf("%d",&arr[i]);
  }

  for(int i=0;i<y;i++){
    for(int j=i*3;j<(i*3)+3;j++){
      e[i]=e[i]+arr[j]*pow(2,k);
      k--;
    }
    k=2;
  }
  for(int i=0;i<y;i++){
    printf("%d ",e[i]);
  }
  return 0;
}