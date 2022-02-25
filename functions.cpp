#include "functions.h"


float findMinValue(float n1, float n2, float n3)
{

float min = n1;
  if (n2 <= min) 
  {
       min = n2;
  }
  if (n3 <= min)
  {
      min = n3;
  }

	return min;
}
