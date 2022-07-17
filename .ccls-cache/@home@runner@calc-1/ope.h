 # ifndef clase_operacion_h
 # define clase_operacion_h
//#pragma once
#include <iostream>
#include <fstream>

class clase_operacion{
    private: 
    float _numero,_numero2;

    
    public:
    clase_operacion();
    ~clase_operacion();

    float set_numero1(float);
    float get_numero1();
    float set_numero2(float);
    float get_numero2();


    float suma();
    float resta();
    float multiplicacion();
    float divicion();
};
 #endif