#include <stdio.h>
#include <iostream>
#include <math.h>
#include <set>
#include <cstdlib>
using namespace std;

void abundant(int n)
{
  int aCount = 0;
  int i = 2;
  int dSum = 0;
  while (aCount < n) {
    dSum = 0;
     //Counts the divisor sum.
    for(int u = 1; u < i; u++){
      //printf(" divider: %d  | ", u);
      if(i%u == 0) {
        dSum = dSum + u;
      };
    };
     //Prints abundant numbers.
    if(dSum > i){
      cout << i << "\n";
      //printf("\n %d is Abundant Number   ||  aCount is %d\n\n", i, aCount);
      aCount++;
    };
    //printf("Number = %d | Sum = %d | %d < %d\n\n", i, dSum, aCount, n);
    i++;
  };
  return;
}

int main(int argc, char* argv[]) {
  if(argc > 1){
    int number = atoi(argv[1]);
    abundant(number);
  }
  return 0;
};
