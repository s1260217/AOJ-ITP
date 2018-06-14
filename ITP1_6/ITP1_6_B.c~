#include <stdio.h>
int main () {
  int n;
  char p;    //char型は文字列を入れる型
  int input;
  int arr[4][13];   //int[a][b]でa*bの二次元配列に記録する
  int i,j;

  for(i = 0; i < 4; i++){
    for(j = 0; j < 13; j++){
      arr[i][j] = 0;
    }
  }

  scanf("%d",&n);
  for(i = 0; i < n; i++){
    scanf("%c %d",&p,&input);
    switch(p){
    case 'S':
      arr[0][input -1] = 1;
      break;
    case 'H':
      arr[1][input -1] = 1;
      break;
    case 'C':
      arr[2][input -1] = 1;
      break;
    case 'D':
      arr[3][input -1] = 1;
      break;
    }
  }

  for(i = 0; i < 4; i++){
    for(j = 0; j < 13; j++){
      if(arr[i][j] == 0){
	switch(i) {
	case 0:
	  printf("S %d\n",j + 1);
	  break;
	case 1:
	  printf("H %d\n",j +1);
	  break;
	case 2:
	  printf("C %d\n",j +1);
	  break;
	case 3:
	  printf("D %d\n",j + 1);
	  break;
	}
      }
    }
  }
  return 0;
}
