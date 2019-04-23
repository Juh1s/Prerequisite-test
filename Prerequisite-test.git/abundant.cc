#include <stdio.h>
#include <iostream>
#include <math.h>
#include <set>
#include <cstdlib>
using namespace std;

 /*Function that prints abundant numbers
 e.a. numbers with their proper divisors
 being larger than the number itself.
 example: number 12
    Proper divisors for 12 are 1, 2, 3, 4 and 6.
    The sum of these is 1 + 2 + 3 + 4 + 6 = 16.
    16 > 12; therefore 12 is an abundant number.*/
void abundant(int n)
{
  int aCount = 0;
  int i = 2;
  int dSum = 0;
  while (aCount < n) {
    dSum = 0;
     //Counts the divisor sum.
    for(int u = 1; u < i; u++){
      if(i%u == 0) {
        dSum = dSum + u;
      };
    };
     //Prints abundant numbers but not other numbers.
    if(dSum > i){
      cout << i << "\n";
      aCount++;
    };
    i++;
  };
  return;
}

 //Main loop.
int main(int argc, char* argv[]) {
  if(argc > 1){
    int number = atoi(argv[1]);
    abundant(number);
  }
  return 0;
};
