#include <stdio.h>

//declare taxbill function, s=subtotal, C, T, N=salestax, t=taxedbill
void addtax (float s, float* C, float* T, float* N)
{
  *C = s * 1.075;
  *T = s * 1.065;
  *N = s * 1.08875;
}

//declare addtip function, s=subtotal, r=rate, t=subtotal+tip(total)
float addtip (float s, float r, float t)
{
  t = s * (1 + (r / 100));
  return t;
}

//declare splitbill function, s=subtotal, n=number of people, t=total
float splitbill (float s, float n, float t)
{
  t = s / n;
  return t;
}

int main(void) 
{
 char input[256];
 float subtotal;
 printf("What is the subtotal?\n");
 fgets(input, 256, stdin);
 sscanf(input, "%f", &subtotal);
 printf("Input=%f\n", subtotal);
 float partysize;
 printf("How many people are in your party?\n");
 fgets(input, 256, stdin);
 sscanf(input, "%f", &partysize);
 printf("Input=%f\n", partysize);

//call tax
float s = subtotal;
  float C;
  float N;
  float T;
  addtax(s, &C, &T, &N);
  printf("California taxed bill is $%f\n", C);
  printf("New York City taxed bill is $%f\n", N);
  printf("Texas taxed bill is $%f\n", T);

//call addtip
for (float i=0; i<26; i+=5)
{
  float r = i;
  float t;
  float s = subtotal;
  t = addtip(s, r, t);
  printf("If you tip %f percent, your total is $%f\n", r, t);
}

//call splitbill
 float t;
 float n = partysize;
 t = splitbill(s, n, t);
 printf("Each person will pay $%f\n", t);
}
