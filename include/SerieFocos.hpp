#pragma once
#include <iostream>
#include <Foco.hpp>

using namespace std;

class SerieFocos
{
    private:
        Foco focos[10];
    public:
        SerieFocos() {}
        ~SerieFocos() {}
        void MostrarFocos()
        {
            for (auto &&f : focos)
            {
                cout << f.LeerEstado(); 
            }
            cout << endl;
        }
        void EncenderFocos(){
            for (auto &&f : focos)
            {
                f.Encender();
            }
            
        }
        void ApagarFocos(){
            for (auto &&f : focos)
            {
                f.Apagar();
            }
            
        }
};