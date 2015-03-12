#include <cmath>
#include "functions.h"

using namespace std;

double f1 (double x)
{
    return exp(-x) - x;
}


double df1(double x)
{
  return -exp(-x) -1;    
}
