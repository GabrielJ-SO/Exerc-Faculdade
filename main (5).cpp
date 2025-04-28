/******************************************************************************

7) Escreva um algoritmo para calcular as raízes de uma equação do 2o grau (Ax2 + Bx + C), sendo que 
os valores A, B e C são fornecidos pelo usuário. Lembre-se:  não pode ser negativo. 

*******************************************************************************/
#include <iostream>
#include <math.h>
 using namespace std;

int main () 
{
    float a, b, c, delta, raiz, X1, X2;

    cout<<"Escreva a equação: "; cin>>a>>b>>c;
    
    delta = pow (b, 2) -4 * a * c;
    
    if (delta < 0) {
        cout<<"\nDelta = "<<delta<<endl<<"Não existe solução nos Reais.";
        
        return 1;
    }
    
    cout<<"\nDelta = "<<delta;
    
    raiz = pow(delta, 0.5);
     X1 = (-b + raiz) / 2*a;
     X2 = (-b - raiz) / 2*a;
    
    cout<<"\n"<<"("<<X1<<","<<X2<<")";
    
    return 0;
}