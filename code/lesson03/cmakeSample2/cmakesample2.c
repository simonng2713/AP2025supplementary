// cmakesample2.c
// 1つの数値の二乗を計算する単純なプログラム
#include <stdio.h>
#include <stdlib.h>

#include "func1.h"

int main (int argc, char *argv[])
{
  if (argc < 2)
    {
    fprintf(stdout,"Usage: %s number\n",argv[0]);
    return 1;
    }
  double inputValue = atof(argv[1]);
  
  fprintf(stdout,"The square of %g is %g\n",
          inputValue, calc_square(inputValue));
  return 0;
}