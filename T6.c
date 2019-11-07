#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int x=n,digits=1;
  while(x>1){
    x=x/2;
    digits++;
  }
  int bi[digits];
  x=n;
  for(int i=digits-1;i>=0;i--){
    bi[i]=x%2;
    x=x/2;
  }
  for(int i=0;i<digits;i++){
    printf("%d ",bi[i]);
  }
  return 0;
}