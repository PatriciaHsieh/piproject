#include <stdio.h>

//declare addtip function, s=subtotal, r=rate, t=tip
float addtip (float s, float r, float t)
{
  t = s * r / 100;
  return t;
}

int main(void) 
{
  //call addtip
  for (float i=0; i<26; i+=5)
  {
    float r = i;
    float t;
    float s = 100;
    t = addtip(s, r, t);
    printf("%f percent tip is $%f\n", r, t);
  }
}
