#include<stdio.h>
#include<stdlib.h>
int isprime(int);
int main(){
  int i,n1,n2;
  printf("Enter range:");
  scanf("%d%d",&n1,&n2);
  if(n1==n2){
    printf("Both lower and upper limit cannot be same\n");
    exit(0);
  }
  if(n1<1||n2<1){
    printf("Please enter natural numbers only\n");
    exit(1);
  }
  printf("Prime numbers in range of %d to %d are:\n",n1,n2);
  for(i=n1;i<=n2;i++){
    if(isprime(i)==1){
      printf("%d\n",i);
    }
  }
}
int isprime(int n){
  int i,c=0;
  for(i=1;i<=n;i++){
    if(n%i==0)
    c++;
  }
  if(c==2){
    return 1;
  }
}
