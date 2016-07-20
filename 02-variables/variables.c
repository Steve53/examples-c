#include <stdio.h>

int main()
{
  int age = 0;
  float price = 0.0;
 
  long x = 12345678912345;
  double y = 1.2345678923456789;
  char name[6] = "Steve";

  age = 9;
  price = 5.0;
  price = price + 0.15*age;
  printf("age %i price %f\n", age, price);
  printf("int %li\nfloat %li\nchar %li\n", sizeof(int), sizeof(float), sizeof(char)); 

  printf("x %li\ny %lf\n", x, y);
  printf("x %li\ny %li\n", sizeof(x), sizeof(y));

  printf("%s\n", name);
}

