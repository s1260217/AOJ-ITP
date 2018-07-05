#include<stdio.h>

int a[101][101];
int r,c;

void p() {
  int i, j;
  for(i = 0; i < c+1; i++){
    for(j = 0; j <= r; j++){
      if (j) printf(" ");
      printf("%d",a[j][i]);
    }
    printf("\n");
  }
}

int main()
{
  int i,j;
  scanf("%d %d",&c,&r);
  for(i = 0; i < c; i++){
    for(j= 0; j < r; j++){
      scanf("%d",&a[j][i]);
    }
  }
  a[r][c]=0;
  for(i = 0; i < c; i++){
    a[r][i]=0;
    for(j = 0; j < r; j++){
      a[r][i] += a[j][i];
      a[r][c] += a[j][i];
    }
  }
  for(j = 0; j < r; j++){
    a[j][c]=0;
    for(i = 0; i < c; i++){
      a[j][c] += a[j][i];
    }
  }

  p();
  
  return 0;
}
