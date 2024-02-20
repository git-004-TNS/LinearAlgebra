#include <stdlib.h>
#include "Matrix.h"


Matrix::Matrix(int rows=2, int columns=2)
{
  n = rows;
  m = columns;
  M = (int**)malloc(m*n*sizeof(int));

}




Matrix::~Matrix()
{
  free(M);

}


