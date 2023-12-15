#include<iostream> 
#include<cmath>//biblioteca para poder utilizar la funcion pow() 
#include<chrono>
using namespace std; 
/*para encontrar una raiz de la ecuación f(x)=0 analiticamente, proporcionar la funcion 
F(X) 
DATOS: 
-->a Y b que forman un intervalo, en donde se halla una raiz 
-->TOL criterio de convergencia//la tolerancia 
-->EX criterio de exactitud 
-->MAXIT número maximo de iteraciones 
RESULTADOS: 
-->X la raiz aproximada o mensaje de falla 
*/ 
double F(double x){ 
     
    //3*x^3-2*x-5->función tomado como referencia
    return 3*pow(x,3)-2*x-5;
} 
double biseccion(double a,double b,int MAXIT,double TOL,double EX){ 
    int cont=1; 
    double c; 
    double fc; 
    while(cont<MAXIT){ 
        c=(a+b)/2; 
        fc=F(c); 
        if(abs(b-a)<TOL) 
            return c; 
        if(abs(fc)<EX) 
            return c; 
        if(F(a)*fc<0) 
            b=c; 
        if(fc*F(b)<0) 
            a=c; 
        cont=cont+1;
        cout<<"Iteracion numero: "<<cont<<endl;
		cout<<"Valor de c: "<<c<<endl; 
		cout<<"\n";
    } 
    return c;
} 

int main (int argc, char *argv[]) {
    cout<<"La funcion es: 3x^3 - 2x -5\n"; 
    cout<<"\n";
    cout<<"\n";
    
    std::chrono::time_point<std::chrono::system_clock> start, end;
    start = std::chrono::system_clock::now();
    
    cout<<"La raiz de la funcion es: "<<biseccion(0,2,100,0.0005,0.00005); 
    
    end = std::chrono::system_clock::now();
    int elapse = std::chrono::duration_cast<std::chrono::seconds>
    
    cout<<"Bisection elapse time: "<<elapse<<"seconds"<<endl
    return 0; 
}
