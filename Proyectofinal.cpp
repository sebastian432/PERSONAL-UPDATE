#include <iostream>

using namespace std;

class Mejora
{
private:
        int aspecto_f;
        string nombre;
public:
        void Mostrar_mensaje();
        void Fisica();
};
/*
Mejora::Mejora(string _nombre)
{
    nombre=_nombre;
}
*/

void Mejora::Mostrar_mensaje()
{
    string nombre;
    cout<<"Como te llamas? ";cin>>nombre;
    cout<<" Hola  "<<nombre<<"!"<<endl;
    cout<<" Bienvenido a PERSONAL UPDATE "<<endl;
    cout<<endl;
}

void Mejora::Fisica()
{
    int aspecto_f;
    cout<<"Que aspecto fisico quieres mejorar? \n\n";
    cout<<"Elige una opcion: \n";
    cout<<"1. Abdominales \n\n";
    cout<<"2. Piernas \n\n";
    cout<<"3. Brazos \n\n";
    cout<<"4. Espalda \n\n";

    cin>>aspecto_f;
    if (aspecto_f == 1)
    {
        cout<<"Abdominales: \n\n ";
        cout<<"\t Conseguir un abdomen fuerte y tonificado es lo que mas \n\n";
        cout<<"\t nos cuesta y a la gran mayoria de nosotros se nos escapan \n\n";
        cout<<"\t algunos puntos clave que siempre hay que tener en cuenta \n\n";
        cout<<"\t a la hora de trabajar esta parte del cuerpo. \n\n";
        cout<<"\t Por ello en esta ocasión nos vamos a detener en algunos \n\n";
        cout<<"\t aspectos a tener en cuenta a la hora de conseguir un \n\n";
        cout<<"\t vientre en perfectas condiciones. \n\n";

        cout<<"\t En primer lugar es necesario que distingamos entre las diferentes \n\n";
        cout<<"\t partes de la pared abdominal. \n\n";
        cout<<"\t La parte inferior que trabajaremos en primer lugar, la media que \n\n";
        cout<<"\t trabajaremos seguidamente en la misma sesion, \n\n";
        cout<<"\t la superior que trabajaremos en tercer lugar y por último los oblicuos \n\n";
        cout<<"\t que dejaremos para el final \n\n";
        cout<<"\t de la sesion de entrenamiento abdominal. Siguiendo este orden tendremos \n\n";
        cout<<"\t un abdomen bien trabajado en todo momento. \n\n";

    }

}

int main()
{
    Mejora m1;

    m1.Mostrar_mensaje();
    m1.Fisica();

return 0;
}
