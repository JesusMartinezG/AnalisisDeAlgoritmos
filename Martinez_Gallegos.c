#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void impArreglo(int arr[], int N)
{
  for(int i=0; i<N; i++)
    printf("%i\n", arr[i]);
  printf("\n");
}

int * arregloNumeros(int tam)
{
  int * aux = malloc(sizeof(int) * tam);
  if( aux == NULL )
  {
    return NULL;
  }
  
  for(int x=0; x<tam; x++)
  {
    aux[x] = rand();
  }
  return (int *)aux;
}

void ordenarArreglo (int * A, int tam)
{
  int i,j,aux;
  
  if(A == NULL)
    return;
  
  for(i=1; i<tam; i++)
  {
    for(j=1; j<tam; j++)
    {
       if(A[j-1] > A[j])
       {
         aux = A[j];
         A[j] = A[j-1];
         A[j-1] = aux;
        }
     }
  }
}

int main()
{
  int *A = NULL;
  int tam;

  printf("Ingresar tamaño del arreglo\n");
  scanf("%i", &tam);
  
  A = arregloNumeros(tam);
  
  printf("Arreglo desordenado\n");
  impArreglo(A,tam);
  
  printf("Ordenando\n");
  
  ordenarArreglo(A,tam);
  
  printf("Arreglo ordenado\n");
  impArreglo(A,tam);
  free(A);

  return 0;
}
