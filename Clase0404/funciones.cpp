// imprima los numeros del 1 al 10 usando while
#include <iostream> 

// declaration
void print_numbers(int nmax);

int main(void) 
{
    print_numbers(10);

  return 0;
}

// implementation
void print_numbers(int nmax)
{
  for (int n = 1; n <= 10; n++) {
    std::cout << n << std::endl;
  } 
}