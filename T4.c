#include<stdio.h>
int n,m,a;
int transpose(int,int,int[n][m],int[n][m],int);
int main(){
  scanf("%d %d",&n,&m);
  int y=m;
  int arr[n][m],trans[m][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  int i=0,j=0;
  transpose(i,j,arr,trans,y);
  return 0;
}
int transpose(int i,int j,int arr[n][m],int trans[n][m],int y){
  if(i==n&&j==m){
    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
        printf("%d ",trans[i][j]);
      }
      printf("\n");
    }
  }
    trans[j][i]=arr[i][y];
    if(j==m){
      j=0;
      y=m;
    transpose(i+1,j,arr,trans,y);
    }
    else{
    transpose(i,j+1,arr,trans,y-1);
    }
    return trans[j][i];
}