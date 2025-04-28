#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
    int saque, notas100, notas50, notas10, notas5, notas1, sobra;
    
    cout<<"Digite o valor do saque:";
    cin>>saque;
    
    notas100 = saque/100;
    
    sobra=saque%100;
    notas50=sobra/50;
    
    sobra=sobra%50;
    notas10=sobra/10;
    
    sobra=sobra%10;
    notas5=sobra/5;
    
    notas1=sobra%5;
    
    
    cout<<"notas de R$100: "<<notas100<<endl;
    cout<<"Notas de R$50: "<<notas50<<endl;
    cout<<"notas de R$10: "<<notas10<<endl;
    cout<<"Notas de R$5: "<<notas5<<endl;
    cout<<"notas de R$1: "<<notas1<<endl;
    
    return 0;
}