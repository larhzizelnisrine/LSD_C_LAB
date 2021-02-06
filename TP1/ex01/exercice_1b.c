#include <stdio.h>
#include <stdlib.h>
#define N 10

float *remontee(float A[N][N], float B[N], int n)
{
x = malloc(sizeof(float) * n);

  
  x[n - 1] = B[n - 1] / A[n -1][n-1];

  for (i = n-2 ; i >= 0; i--)
  {
	  s = 0;
	  for (j = i + 1; j < n; j++)
	  {
		 s += A[i][j] * x[j];
	  }
	  x[i] = (B[i] - s) / A[i][i];
  } 
  return x;
}

int main()
{
  float   A[N][N], B[N];
  float   *x;
  int     n;

  printf("Entrer la dimension de la matrice: ");
  scanf("%d", &n);

  printf("donner les elements de A\n");
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      printf("A[%d][%d] = ", i, j);
      scanf("%f", &A[i][j]);
    }
  }

  printf("donner les elements de B\n");
  for (int i = 0; i < n; i++)
  {
    printf("B[%d] = ", i);
    scanf("%f", &B[i]);
  }

  x = remontee(A, B, n)
  printf("\nle resultat: [");
  for (int i = 0; i < n; i++)
    printf("%f%c", x[i], ",]"[i == n - 1]);
}

