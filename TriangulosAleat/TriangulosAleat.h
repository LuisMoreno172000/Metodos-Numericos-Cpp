#include <iostream>
#include <ctime>
#include <cstdlib>

class TriangulosAleat{
	private:
		int Vert1[3];
		int Vert2[3];
	
	public:
		void setVert1(int x1,int y1,int z1);
		void setVert2(int x2,int y2,int z2);
		int AreaTrian();
};
