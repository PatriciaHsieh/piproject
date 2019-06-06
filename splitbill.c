#include <stdio.h>

//declare splitbill function, s=subtotal, n=number of people, t=total
float splitbill (float s, float n, float t)
{
  t = s / n;
  return t;
}

int main(void) 
{
  //call splitbill
 float t;
 float s = 100;
 float n = 5;
 t = splitbill(s, n, t);
 printf("Each person will pay $%f\n", t);

}
