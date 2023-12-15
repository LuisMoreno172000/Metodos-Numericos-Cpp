#include "gauss.h"
#include <iostream>

using namespace std;

Gauss::Gauss(const int N, const int M)
{
    filas=N;
    cols=M;
}

void Gauss::impMatrix()
{
	for(int i=0;i<filas;i++) {
		for(int j=0;j<cols;j++) {
			cout<<matrix[i][j]<<" ";	
		}
		cout<<"\n\n";
	}	
}

void Gauss::intercambioFilas(int r0, int r1)
{
    for(int i=0;i<cols;i ++)
    {
        int temp = matrix[r0][i];
        matrix[r0][i] = matrix[r1][i];
        matrix[r1][i] = temp;
    }
}

void Gauss::productoEscFila(float k, int j,int i)
{

	for(i=0;i<cols;i++)
	{
		matrix[j][cols]*=k;
	}
}

void Gauss::sumaFilas(int f1, int f2)
{
	
	for(int i=0;i<cols;i++)
	{
		int a=matrix[f1][i];
		matrix[f2][i]+=a;
	}
}

void Gauss::restaFilas(int f1, int f2, int inicio)
{
	for(int i=0;i<inicio;i++)
	{
		int a=matrix[f1][i];
		
		matrix[f2][i]-=a;
		
	}
}

int Gauss::encPivote(int cols)
{
	float max=-999;
	int pivotIndex=-1;
	
	for(int i=0;i<filas;i++)
	{
		if (matrix[i][cols]>max)
		{
			max=matrix[i][cols];
			pivotIndex=i;
		}
	}
	 return pivotIndex;
}

void Gauss::gaussElimination()
{
	cout<< "Matriz original"<<endl;
	impMatrix();
	
	for (int i=0; i<filas;i++)
	{
		float pivot=matrix[i][i];
		
		int conteoCambios=0;
		
		if(pivot==0)
		{
			int filadifcero=encPivote(i);
			
			if(filadifcero==-1)
			{
				cout<<"El sistema no tiene solucion"<<endl;
				exit(0);
			}
			else
			{
				intercambioFilas(filadifcero,i);
				
				cout<<"Despues del pivoteo"<<endl;
				impMatrix();
			}
		}
		pivot=matrix[i][i];
		float k;
		for (int j=0;j<filas;j++)
		{
			if(j==0)
			{
				k=1/matrix[i][i];
				productoEscFila(k,i,i);
			}
			if((matrix[j][i] !=0) && (j!=i))
			{
				k=1/matrix[j][i];
				productoEscFila(k,j,i);
				restaFilas(j,i,i);
			}
		
		}
		
		cout<<"Matriz tras la eliminacion.\n"<<endl;
		impMatrix();

		
	}
		cout<<"Matriz final.\n"<<endl;
		impMatrix();
		
		cout<<"Valor de la ultima variable es: "<<matrix[2][3]<<endl;
		
}

