#include <stdio.h>

//declare addtip function, s=subtotal, r=rate, t=tip
float adddiscount (float s, float r, float t)
{
  t = s * (100-r) / 100;
  return t;
}

int main(void) 
{
  //call adddiscount
  for (float i=0; i<31; i+=5)
  {
    float r = i;
    float t;
    float s = 100;
    t = adddiscount(s, r, t);
    printf("If you have a %f percent discount, the new subtotal is $%f\n", r, t);
  }
}
