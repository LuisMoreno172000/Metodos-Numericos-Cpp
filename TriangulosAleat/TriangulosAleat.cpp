#include <iostream>
#include <ctime>
#include <cstdlib>
#include <math.h>
#include "TriangulosAleat.h"

using namespace std;

void TriangulosAleat::setVert1(int x1, int y1, int z1){
	Vert1[0]=x1;
	Vert1[1]=y1;
	vert1[2]=z1;
}

void TriangulosAleat::setVert2(int x2, int y2, int z2){
	Vert2[0]=x2;
	Vert2[1]=y2;
	Vert2[2]=z2;
}

int TriangulosAleat::AreaTrian(){
	int comp1 = (y1*z2)-(y2*z1);
	int comp2 = (x1*z2)-(x2*z1);
	int comp3 = (x1*y2)-(x2*y1);
	
	return (sqrt((comp1^2)+(comp2^2)+(comp3^2)))/2;
}
