#include <stdio.h>
#include <stdlib.h>

#include "func2.h"

int main (int argc, char *argv[])
{
  if (argc < 2)
    {
    fprintf(stdout,"Usage: %s number\n",argv[0]);
    return 1;
    }
  double inputValue = atof(argv[1]);
  
  showMatrix(inputValue);
  return 0;
}