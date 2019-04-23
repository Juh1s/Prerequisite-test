#include <stdio.h>
#include <iostream>
#include <math.h>
#include <set>
using namespace std;

void abundant(int n)
{
  int aCount = 0;
  while (aCount < n) {
    int i = 2;
    int dSum = 0;

     //Counts the divisor sum.
    for(int u = 1; u < i; u++){
      if(i%u == 0) {
        dSum = dSum + u;
      };
    };
     //Prints abundant numbers.
    if(dSum > i){
      cout << i << "\n";
      aCount++;
    };
    i++;
  };
  return;
}

int main() {
  return 0;
};
