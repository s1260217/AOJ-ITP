#include<stdio.h>

int main()
{
  int n[1000],k=0,s,sum=0,i;

  while(1){
    scanf("%d",&n[k]);
    if(n[k]==0) break;
    k++;
  }
  
  for(i=0; i<k; i++){
  while(n[i]){
    s = n[i] % 10;
    sum += s;
    n[i] /= 10;
    }
     printf("%d\n",sum);
     sum=0;
  }
  return 0;
}
