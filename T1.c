#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int arr[n],sum=0,count=0;
  int max_minus=-1,count_mm=0;
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++){
    if(arr[i]>=0){
      sum=sum+arr[i];
      count++;
    }
  }
  int x=(count-3)*(-1);
  while(count_mm<x){
    for(int i=0;i<n;i++){
      if(arr[i]==max_minus){
        count_mm++;
        sum=sum+max_minus;
        if(count_mm==x){
          break;
        } 
      }
    }
    max_minus--;
  }
  printf("%d",sum);
  return 0;
}