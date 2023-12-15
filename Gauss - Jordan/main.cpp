#include <iostream>
#include "gauss.h"



  using namespace std;

int main() {
  
    int n=3, m=4;
    Gauss objGauss(n,m);

    objGauss.gaussElimination();
    
    return 0;
}

