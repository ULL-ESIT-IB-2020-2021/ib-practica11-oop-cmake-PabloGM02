#ifndef RACIONAL_H
#define RACIONAL_H

class Racional{

    private:
    double numerador_;
    double denominador_;

    public:
    Racional(double num, double den){
        numerador_ = num;
        denominador_ = den;
    }

    void Suma(Racional num_1, Racional num_2){
        std::cout << num_1.numerador_ << "/" << num_1.denominador_ << "+" << num_2.numerador_ << "/" << num_2.denominador_ << std::endl;
        numerador_ = num_1.denominador_ * num_2.numerador_ + num_2.denominador_ * num_1.numerador_;
        denominador_ = num_1.denominador_ * num_2.denominador_;

    }   

    void Resta(Racional num_1, Racional num_2){
        std::cout << num_1.numerador_ << "/" << num_1.denominador_ << "-" << num_2.numerador_ << "/" << num_2.denominador_ << std::endl;
        numerador_ = num_1.denominador_ * num_2.numerador_ - num_2.denominador_ * num_1.numerador_;
        denominador_ = num_1.denominador_ * num_2.denominador_;

    }

    void Multiplicar(Racional num_1, Racional num_2){
        std::cout << num_1.numerador_ << "/" << num_1.denominador_ << "*" << num_2.numerador_ << "/" << num_2.denominador_ << std::endl;
        numerador_ = num_1.numerador_ * num_2.numerador_;
        denominador_ = num_1.denominador_ * num_2.denominador_;

    }

    void Dividir(Racional num_1, Racional num_2){
        std::cout << num_1.numerador_ << "/" << num_1.denominador_ << "  /  " << num_2.numerador_ << "/" << num_2.denominador_ << std::endl;
        numerador_ = num_1.numerador_ * num_2.denominador_;
        denominador_ = num_1.denominador_ * num_2.numerador_;

    }

    void Imprimir(){
        std::cout << numerador_ << "/" << denominador_ << std::endl;
        
    }


};

#endif