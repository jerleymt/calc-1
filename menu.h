 # ifndef menu_h
 # define menu_h
#include "ope.cpp"
using namespace std;
std::ofstream fich("ejemplo.txt");

int menu(){
    float valor_1,valor_2,r;
    
    std::string prueba;
    int contador = 0;


    char op{5};
    clase_operacion calculadora;
    std::cout<<"__________Menú principal___________"<<std::endl;
    std::cout<<"Elija el simbolo de la opercion a realizar (+ - * /)"<<std::endl;
    std::cin>>op;

    std::cout<<"ingrese primer numero"<<std::endl;
    std::cin>>valor_1;
    
    if (op == '+'){
       std::cout<<"ingrese numero a sumar"<<std::endl;
       std::cin>>valor_2;
       
    }
    else if (op == '-'){
       std::cout<<"ingrese numero a restar"<<std::endl;
       std::cin>>valor_2;
    }
    else if (op == '*'){
       std::cout<<"ingrese numero a multiplicar"<<std::endl;
       std::cin>>valor_2;
    }
    else if (op == '/'){
        bool aux=true;
        while (aux) {
            std::cout<<"ingrese numero a dividir"<<std::endl;
            int aux2;
            std::cin>>aux2;
            if (aux2==0){
                aux=true;
                std::cout<<"No se puede dividir entre 0"<<std::endl;
            }
            else{
                aux=false;
                valor_2=aux2;
            }
          
        }
        
    }
   
    calculadora.set_numero1(valor_1);
    calculadora.set_numero2(valor_2);

     switch(op){case '+': r = calculadora.suma(); break;
             case '-': r = calculadora.resta(); break;
             case '*': r = calculadora.multiplicacion(); break;
             case '/': r = calculadora.divicion(); break;
             default: std::cout<<"Operador no definido"<<std::endl;
             exit(1);
             }
    std::cout<<valor_1 <<op<<valor_2<<" = "<< r <<std::endl;


    

    fich << valor_1 << " " << op << " " << valor_2 << " = " << r <<  std::endl;
   contador = contador + 1;

    std::ifstream fich("ejemplo.txt");
     for(int i = 0; i < contador; i++){
    getline(fich, prueba);
    std::cout << prueba  << std::endl;
}

//   cout<<"Quieres continuar?" << endl;
//   cin>>respuesta;
//   if(respuesta == "si"){
//     bandera = true;
//   }
//     else{
//       bandera = false;
//     }


    

  

}   
 #endif