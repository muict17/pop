#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int x=n,count=0,non=0;
  for(int i=0;i<=n;i++){
    if((i*i*i)==n){
      printf("true");
      non++;
      break;
    }
  }
  if(non==0){
    printf("false");
  }
  return 0;
}