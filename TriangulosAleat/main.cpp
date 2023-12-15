#include <iostream>
#include <ctime>
#include <cstdlib>
#include <math.h>
#include "TriangulosAleat.h"

using namespace std;

int main() {
	
    srand((int)time(0));
    const int ntriang = 100;
    TriangulosAleat arrT[ntriang];
    int maxA = -1, minA = 1000, minTriang, maxTriang;

    for(int i = 0; i<ntriang; i++){

        arrT[i].setVert1(rand() % 10 + 1,rand() % 10 + 1,rand() % 10 + 1);
        arrT[i].setVert2(rand() % 10 + 1,rand() % 10 + 1,rand() % 10 + 1);
        
        int AreaT=arrT[i].AreaTrian();
        if(AreaT < minA)
        {
            minA = AreaT;
            minTriang=i;
        }
        if(AreaT > maxA)
        {
            maxA = AreaT;
            maxTriang=i;
        }
    }
    cout<<"El triangulo de menor area esta en la posicion: "<<minTriang<<"\t siendo su area de: "<<minA<<endl;
    cout<<"El triangulo de mayor area esta en la posicion: "<<maxTriang<<"\t siendo su area de: "<<maxA<<endl;
	
	return 0;
}
