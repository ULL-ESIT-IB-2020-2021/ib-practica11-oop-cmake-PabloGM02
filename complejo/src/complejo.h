#ifndef COMPLEJO_H
#define COMPLEJO_H

class Complejo{
    private:
    int real_;
    int imaginario_;

    public:
    Complejo(int real, int imaginario){
        real_ = real;
        imaginario_ = imaginario;
    }

    void Suma(Complejo num_1, Complejo num_2){
        real_ = num_1.real_ + num_2.real_;
        imaginario_ = num_1.imaginario_ + num_2.imaginario_;
    }

    void Resta(Complejo num_1, Complejo num_2){
        real_ = num_1.real_ - num_2.real_;
        imaginario_ = num_1.imaginario_ - num_2.imaginario_;
    }

    void Multiplicacion(Complejo num_1, Complejo num_2){
        real_ = num_1.real_ * num_2.real_ + (num_1.imaginario_ * num_2.imaginario_) * -1;
        imaginario_ = num_2.real_ * num_1.imaginario_ + num_2.imaginario_ * num_1.real_;
        
    }

    void NumeroComplejo(){
        if(imaginario_ > 0){
            std::cout << real_ << "+" << imaginario_ << "i" << std::endl;
        }else{
            std::cout << real_ << "-" << imaginario_ << "i" << std::endl;
        }
    }

    
};

#endif
