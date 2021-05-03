#include<stdio.h>
int main(){
  i=snt n,a[100],sum,i=0;
  printf("Enter how many elephent are there : ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum=sum+a[i];
  }
  printf("The avg of %d elefant is %d .",n,sum/n);
  return 0;
}