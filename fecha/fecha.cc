#include <iostream>
#include "fecha.h"

class Fecha{

    private:
    int m_anyo;
    int m_mes;
    int m_dia;
    
    public:
    
    void FechaActual(int anyo, int mes, int dia){
        m_anyo = anyo;
        m_mes = mes;
        m_dia = dia;
        std::cout << m_anyo << "/" << m_mes << "/" << m_dia << std::endl;
    }
};

int main(){
    Fecha hoy;
    FechaActual(2020, 12, 31);
    std::cout << hoy.FechaActual(2020, 12, 31);

    return 0;

}


