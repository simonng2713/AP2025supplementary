// func2.cpp
#include "func2.h"

using Eigen::MatrixXd;

void showMatrix(double a) {

  MatrixXd m(2, 2);
  m(0, 0) = a;
  m(1, 0) = 0;
  m(0, 1) = 0;
  m(1, 1) = a;
  std::cout << m << std::endl;
}
