#include<stdio.h>

int main ()
{
 //  m[linhas][colunas]
 int m[5][5],i,j;
 
 // mudar valores da matriz
 for(i=0;i<=4;i++){
  for(j=0;j<=4;j++){
   if(i == j) {
    m[i][j] = 1;
   }
   else {
    m[i][j] = 0;
   }
  }
 }
 
 //imprimir matriz
 for(i=0;i<=4;i++){
  for(j=0;j<=4;j++){
    printf("|%d|", m[i][j]);
  }
  printf("\n");
 }
}
