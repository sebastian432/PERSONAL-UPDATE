#include <iostream>

using namespace std;

class Mejora
{
private:
        string nombre;
        string nombre_Usuario;

public:
        Mejora(string);
        void Mostrar_mensaje();
        void Pedir_nombre();
        void Establecer_nombre();
        string Obtener_nombre();
};

Mejora::Mejora(string _nombre)
{
    nombre=_nombre;
}

void Mejora::Establecer_nombre(string nombre)
{   
    nombre_Usuario=nombre;
}

string Mejora::Obtener_nombre()
{
    return nombre_Usuario;
}

void Mejora::Mostrar_mensaje()
{
    cout<<" Hola  "<<nombre<<endl;
    cout<<" Bienvenido a PERSONAL UPDATE "<<endl;
}

void Mejora::Pedir_nombre()
{
    string nombre;
    cout<<"Como te llamas? ";cin>>nombre;

}

int main()
{
    Mejora m1=Mejora("juan");
    m1.Pedir_nombre();
    m1.Mostrar_mensaje();

return 0;
}
