#include<stdio.h>
int main(){
  while(1){
    int i,j,H,W;
  scanf("%d %d ",&H,&W);
  if(H == 0 && W == 0) break;
  for(i = 0; i <= H; i++){
    for(j = 0; j < W; j++){
      if(i == 1 || i ==H || j == 1 || j == W){
	printf("#");
      }else {
	printf(".");
	  }
    }
    printf("\n");
  }
  return 0;
  }
}
  
