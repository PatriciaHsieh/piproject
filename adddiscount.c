#include <stdio.h>

//declare adddiscount function, s=subtotal, d=discount, newsub=new subtotal
float adddiscount (float s, float d, float newsub)
{
  newsub = s * (100-d) / 100;
  return newsub;
}

int main(void) 
{
//call adddiscount
for (float i=0; i<31; i+=5)
 {
   float d = i;
   float newsub;
   float s = 100;
   newsub = adddiscount(s, d, newsub);
   printf("If you have a %f percent discount, the new subtotal is $%f\n", d, newsub);
   }
}
