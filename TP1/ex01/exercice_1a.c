#include <stdio.h>
#include <stdlib.h>
#define N 10


float (float A[N][N], float B[N], int n)
{
  float   *x;

  x = malloc(sizeof(float) * n);
   x[0] = B[0] / A[0][0];

  for (i= 1; i < n; i++)
  {
	  s = 0;
          for (j = 0; j <= i-1; j++)
	  {
		  s += A[i][j] * x[j];
          }
	  x[i] = (B[i] - s) / A[i][i];
  }

  return (x);
}


int main()
{
  float   A[N][N], B[N];
  float   *x;
  int     n;

  printf("Entrer la dim de la matrice: ");
  scanf("%d", &n);
  printf("entrer les elements de la matrice A\n");
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      printf("A[%d][%d] = ", i, j);
      scanf("%f", &A[i][j]);
    }
  }
  printf("Entrer les elements de la matrice B\n");
  for (int i = 0; i < n; i++)
  {
    printf("B[%d] = ", i);
    scanf("%f", &B[i]);
  }
  x = descente(A, B, n);
  
  printf("\n le resultat: [");
  for (int i = 0; i < n; i++)
    printf("%f%c", x[i], ",]"[i == n - 1]);
}
