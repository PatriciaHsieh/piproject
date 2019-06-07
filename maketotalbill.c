#include <stdio.h>
#include <totalbill.h>
 
int main(int argc, char* argv[])
{
 if (argc != 3)
  {
    printf("%s : expected 2 args, please enter two floats\n", argv[0]);
    return 1;
  }
  
  float subtotal;
  int found = sscanf(argv[1], "%f", &subtotal);
  if (found != 1)
    {
	printf("First arg is not a decimal, enter two floats\n");
	return 1;
    }

  float partysize;
  found = sscanf(argv[2], "%f", &partysize);
  if (found != 1)
    {
	printf("Second arg is not a decimal, enter two floats\n");
	return 1;
    }

//call addtax
 float s = subtotal;
 float C;
 float N;
 float T;
 addtax(s, &C, &T, &N);
 printf("California taxed bill is $%f\n", C);
 printf("New York City taxed bill is $%f\n", N);
 printf("Texas taxed bill is $%f\n", T);

//California Output
printf("\nIf you live in California:\n");

//call splitbill
 float p;
 float n = partysize;
 float tax = C;
 p = splitbill(tax, n, p);
 printf("Each person will pay $%f\n", p);

//call addtip
for (float i=0; i<21; i+=5)
 {
   float r = i;
   float taxtip;
   float s = subtotal;
   taxtip = addtip(tax, r, taxtip);
   printf("%f% Tip: Your table will tip $%f\n", r, taxtip);
 }

//Texas Output
printf("\nIf you live in Texas:\n");

//call splitbill
 tax = T;
 p = splitbill(tax, n, p);
 printf("Each person will pay $%f\n", p);

//call addtip
for (float i=0; i<21; i+=5)
 {
   float r = i;
   float taxtip;
   float s = subtotal;
   taxtip = addtip(tax, r, taxtip);
   printf("%f% Tip: Your table will tip $%f\n", r, taxtip);
   }

//New York Output
printf("\nIf you live in New York:\n");

//call splitbill
 tax = N;
 p = splitbill(tax, n, p);
 printf("Each person will pay $%f\n", p);

//call addtip
for (float i=0; i<21; i+=5)
 {
   float r = i;
   float taxtip;
   float s = subtotal;
   taxtip = addtip(tax, r, taxtip);
   printf("%f% Tip: Your table will tip $%f\n", r, taxtip);
 }

printf("\nIMPORTANT: If you have a discount, use these new subtotals:\n");
//call adddiscount
for (float i=0; i<31; i+=5)
 {
   float d = i;
   float t;
   float s = subtotal;
   t = adddiscount(s, d, t);
   printf("If you have a %f percent discount, the new subtotal is $%f\n", d, t);
   }
}
