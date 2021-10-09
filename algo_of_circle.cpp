#include <cstdio>

#include <math.h>

using namespace std;

int main ( )  {
// radius 
const int RAD = 10;

// tolerance 
const int TOL = 5;

for(int x = -RAD; x <= RAD; x++)
{

  for(int y = -RAD; y <= RAD; y++)
  {

    int eq = x*x + y*y - RAD * RAD;

    printf(abs(eq) < TOL ? "*" : " ");

  }

  printf("\r\n");

}

return 0;

}