#include <iostream>
#include "fecha.h"

class Fecha{

    private:
    int anyo_;
    int mes_;
    int dia_;
    
    public:
    
    Fecha(int m_dia, int m_mes, int m_anyo){
        m_dia = dia_;
        m_mes = mes_;
        m_anyo = anyo_;
    }

    void Dia(int dia){
        dia_ = dia;
    }

    void Mes(int mes){
        mes_ = mes;
    }

    void Anyo(int anyo){
        anyo_ = anyo;
    }

    void FechaActual(int dia, int mes,  int anyo){
        std::cout << dia_ << "/" << mes_ << "/" << anyo_ << std::endl;
    }

    void Bisiesto(){
        if(anyo_ % 4 == 0){
            std::cout << "El año es bisiesto." << std::endl;
        }else{
            std::cout << "El año no es bisiesto." << std::endl;
        }
    }

    
};




