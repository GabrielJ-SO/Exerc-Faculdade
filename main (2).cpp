/******************************************************************************

10) Faça um algoritmo que solicite ao usuário uma data, composta de 3 variáveis: dia, mês e ano. Informe 
se a data digitada é válida ou não, considerando:   
• Anos bissextos (conforme regra descrita no exercício 11): em anos bissextos fevereiro possui 29 
dias. Nos outros anos 28 dias.   
• Meses: existem somente meses de 1 a 12.  
• Dias: os meses de janeiro, março, maio, julho, agosto, outubro e dezembro possuem 31 dias.  
O mês de fevereiro pode possuir 28 ou 29 dias. O restante possui 30 dias.   
• Um ano nunca será negativo. 

*******************************************************************************/
#include <iostream>
 using namespace std;
 
int main()
{
    int dia,mes, ano, diasm, diasf, bis;
    
    cout<<"Digite a data:";
    cout<<"\nDia: ";cin>>dia;
    cout<<"Mes: ";cin>>mes;
    cout<<"Ano: ";cin>>ano;
     system("clear");
    cout<<dia<<"/"<<mes<<"/"<<ano<<endl;
    
    
     //Definindo número de dias para fevereiro;
     if ((ano%400 == 0) && (mes == 2)) {
        diasf = 29;
        
     }else if ((ano/5%5 == 0) && (mes == 2)) {
         diasf = 28;  
        
      }else if ((ano%4 == 0) && (mes == 2)) {
          diasf = 29;
         
        }else {
           diasf = 28;
    }
    
    if (ano < 0) {
        cout<<"Data inválida.";
     return 1;
    }
    
    //Definindo número de dias para os demais meses;
    if (mes == 4 && 6 && 9 && 11) {
        diasm = 30;
     }else {
         diasm = 31;
    }
    
    //Conferindo se a data é valida;
    if ((mes == 2) && (dia > diasf)) {
        cout<<"Data inválida.";
     return 2;
    }
    
    if (mes<1 || mes>12) {
      cout<<"Data inválida."<<endl;
     return 3;
    }
    
    if ((dia > diasm) || (dia < 1)) {
        cout<<"Data inválida.";
     return 4;
     }else {
         cout<<"Data valida.";
    }
   
    return 0;
}