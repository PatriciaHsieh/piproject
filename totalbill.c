#include <stdio.h>

//declare addtax function, s=subtotal, C=California, T=Texas, N=NewYork
void addtax (float s, float* C, float* T, float* N)
{
  *C = s * 1.075;
  *T = s * 1.065;
  *N = s * 1.08875;
}

//declare splitbill function, tax, n=number of people, p=total per person
float splitbill (float tax, float n, float p)
{
  p = tax / n;
  return p;
}

//declare addtip function, tax=state tax, r=rate, tip=tip for the table
float addtip (float tax, float r, float tip)
{
  tip = tax * (r / 100);
  return tip;
}

int main(void) 
{
 char input[256];
 float subtotal;
 printf("What is the subtotal?\n");
 fgets(input, 256, stdin);
 sscanf(input, "%f", &subtotal);
 float partysize;
 printf("How many people are in your party?\n");
 fgets(input, 256, stdin);
 sscanf(input, "%f", &partysize);

//call addtax
 float s = subtotal;
 float C;
 float N;
 float T;
 addtax(s, &C, &T, &N);
 printf("California taxed bill is $%f\n", C);
 printf("New York City taxed bill is $%f\n", N);
 printf("Texas taxed bill is $%f\n", T);

printf("If you live in California:\n");

//call splitbill
 float p;
 float n = partysize;
 float tax = C;
 p = splitbill(tax, n, p);
 printf("Each person will pay $%f\n", p);

//call addtip
for (float i=0; i<26; i+=5)
 {
   float r = i;
   float taxtip;
   float s = subtotal;
   taxtip = addtip(tax, r, taxtip);
   printf("If you tip %f percent, your table will tip $%f\n", r, taxtip);
 }

}
