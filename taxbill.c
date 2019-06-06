#include <stdio.h>

//declare taxbill function, s=subtotal, C, T, N=salestax, t=taxedbill
void addtax (float s, float* C, float* T, float* N)
{
  *C = s * 1.075;
  *T = s * 1.065;
  *N = s * 1.08875;
}

int main(void) 
{
   float s = 411;
   float C;
   float N;
   float T;
   addtax(s, &C, &T, &N)
   printf("California taxed bill is $%f\n", C);
   printf("New York City taxed bill is $%f\n", N);
  printf("Texas taxed bill is $%f\n", T);
}
