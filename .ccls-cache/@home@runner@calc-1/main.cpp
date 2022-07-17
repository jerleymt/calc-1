#include "menu.h"

int main(){
bool bandera = true;
char continuar;
 while(bandera){

  menu();
  
  std::cout<<"deseas continuar (Y/N)"<<std::endl;
    std::cin>>continuar;
    if (continuar == 'y'){
        bandera = true;
    }
    else if (continuar == 'n'){
        bandera = false;
    }
 }
} 







/*
#include <iostream>
using namespace std;
#include <fstream>  // Para ofstream

int main() {
  bool bandera = true;
  ofstream fich("ejemplo.txt");
  string prueba;
  int contador = 0;

  while(bandera){
  float n1, n2;
  char op;
  double r;
  string respuesta;
  cout<<"Ingrese operador (+,-,,/,#): ";
  cin>>op;
  cout<<"Ingrese primer Nro: ";
  cin>>n1;
  cout<<"Ingrese segundo Nro: ";
  cin>>n2;


  switch(op){case '+': r=n1+n2; break;
             case '-': r=n1-n2; break;
             case '*': r=n1*n2; break;
             case '/': r=n1/n2; break;
             default: cout<<"Operador no definido";
             exit(1);
             }
  cout<<"El resultado es: "<< r << endl;



  fich << n1 << " " << op << " " << n2 << " = " << r <<  endl;
  contador = contador + 1;

  ifstream fich("ejemplo.txt");
  for(int i = 0; i < contador; i++){
  getline(fich, prueba);
  cout << prueba  << endl;
  }

  cout<<"Quieres continuar?" << endl;
  cin>>respuesta;
  if(respuesta == "si"){
    bandera = true;
  }
    else{
      bandera = false;
    }


    }

  }
  */