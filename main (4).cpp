#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main ()
{
    string nome, sexo, rua, bairro;
    int idade, cep, telefone, numero;
    
    cout<<"Olá, seja muito bem vindo à nossa acadêmia.\nAntes de começar, realize o cadastro.";
    
    cout<<"\nnome completo:";
      getline(cin, nome);
      
    cout<<"\nNúmero de telefone:";
      cin>>telefone;
      
    cout<<"idade:";
      cin>>idade;
      
    cout<<"sexo:";
      cin>>sexo;
      
    cout<<"CEP:";
      cin>>cep;
      
cin.ignore(); //Exclui o enter(\n) do cin.
      
    cout<<"Rua:";
       getline(cin, rua);
      
    cout<<"Número da casa/apartamento:";
      cin>>numero;
      
cin.ignore();
      
    cout<<"Bairro:";
      getline(cin, bairro);
    cout<<endl<<endl;
  
    
    cout<<"Nome: "<<nome <<"   "<<"sexo: "<<sexo;
    
    cout<<"\nNúmero de telefone: "<<telefone;
    cout<<"\nIdade: "<<idade;
    cout<<"\nCEP: "<<cep;
    cout<<"\nRua: "<<rua;
    cout<<"\nNúmero casa/apartamento: "<<numero;
    cout<<"\nBairro: "<<bairro;
    
    
    return 0;
}