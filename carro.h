#ifndef CARRO 
#define CARRO

#include <iostream>

using namespace std;

class carro     
{
    private:
        float kilometraje;
        float nivelGasolina;
        float autonomia = 38.5;  //kilometros por litro
        float capacidad = 50;
        char estado;
    public:
        carro();
        void recorrer(float distancia);
        void informacion();
        float tanquear(float gasolina);
    
};
#endif