/******************************************************************************

1) Faça um programa que solicita ao usuário uma letra e verifique se ela é uma vogal ou não exibindo 
uma mensagem correspondente. Saídas:  
Pedido ao usuário= "Digite uma letra:";  
• Caso verdadeiro = “É uma vogal”;  
• Caso falso = “Não é uma vogal”.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    char letra;
    cout<<"Digite uma letra: ";
    cin>>letra;
    
   switch (letra)
   {
       case 'a': case 'A':
       cout<<"É vogal.";
       break;
       
       case 'e': case 'E':
       cout<<"É vogal.";
       break;
       
       case 'i': case 'I':
       cout<<"É vogal.";
       break;
       
       case 'o': case 'O':
       cout<<"É vogal";
       break;
       
       case 'u': case 'U':
       cout<<"É vogal";
       break;
       
       default:
       cout<<"é consoante.";
       
   }
    
    return 0;
}