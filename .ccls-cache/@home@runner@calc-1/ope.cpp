   #include "ope.h"

    clase_operacion::clase_operacion(){}
    
    clase_operacion::~clase_operacion(){
        std::cout<<"";
    }


    float clase_operacion::set_numero1(float num){
        return _numero = num;
    }
    float clase_operacion::get_numero1(){
        return _numero;
    }
    float clase_operacion::set_numero2(float num){
        return _numero2 = num;
    }
    float clase_operacion::get_numero2(){
        return _numero2;
    }


    float clase_operacion::suma(){
        return _numero + _numero2;
    }
    float clase_operacion::resta(){
        return _numero - _numero2;
    }
    float clase_operacion::multiplicacion(){
        return _numero * _numero2;
    }
    float clase_operacion::divicion(){
        return _numero / _numero2;
    }