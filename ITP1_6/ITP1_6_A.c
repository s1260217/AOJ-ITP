#include <stdio.h>
int main () {
  int n;
  int input;
  int arr[100];
  int i;
  int j;
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    scanf("%d",&input);
    arr[i] = input;
    }
  for(j = i - 1; j >= 0; j--){
    printf("%d",arr[j]);
    if(j != 0){
      printf(" ");
    }
  }
  printf("\n");

  return 0;
}
