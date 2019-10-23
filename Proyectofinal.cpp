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
    else if(aspecto_f == 2)
    {

        int opcion_piernas;
        cout<<"\t Las piernas son parte esencial de cualquier tipo de actividad física. \n\n";
        cout<<"\t Mantener unas piernas en forma está al alcance de todos. \n\n";
        cout<<"\t Todo es cuestión de realizar unos sencillos ejercicios centrados en \n\n";
        cout<<"\t los diferentes grupos musculares que forman parte del tren inferior, \n\n";
        cout<<"\t sin necesidad de salir de casa ni utilizar ningún aparato. \n\n";




        cout<<"Te recomendamos los siguientes ejercicios, elige con cual quisieras iniciar: \n";

        cout<<"1. SENTADILLAS. \n\n";
        cout<<"2. ZANCADAS ALTERNAS. \n\n";
        cout<<"3. BURPEES. \n\n";
        cout<<"4. PUENTE. \n\n";
        cout<<"5. GEMELOS. \n\n";
        cin>>opcion_piernas;


        if(opcion_piernas == 1)
        {
            cout<<"\t Usted eligio sentadillas \n";
            cout<<"\t Ponte de pie con las piernas separadas, \n\n";
            cout<<"\t situando cada pie en paralelo con los hombros. \n\n";
            cout<<"\t Con la mirada al frente, flexiona las piernas, \n\n";
            cout<<"\t descendiendo los glúteos en dirección al suelo, \n\n";
            cout<<"\t manteniendo sin levantar las plantas de los pies. \n\n";
            cout<<"\t Mientras desciendas, la espalda debe estar recta y las rodillas \n\n";
            cout<<"\t y la cadera flexionadas. \n\n";
        }

        else if(opcion_piernas == 2)
        {
            cout<<"\t Usted eligio Zancadas Alternas \n";
            cout<<"\t La posicion inicial es en cuclillas y con las manos \n\n";
            cout<<"\t posicionadas en la cadera. \n\n";
            cout<<"\t Adelanta una pierna y la otra, alternativamente. \n\n";
            cout<<"\t Ten en cuenta que la pierna que se encuentre levantada \n\n";
            cout<<"\t no debe superar un ángulo de 90 grados. \n\n";
        }

        else if(opcion_piernas == 3)
        {
            cout<<"\t Usted eligio Burpees \n";
            cout<<"\t Es un movimiento en el que participan una gran cantidad \n\n";
            cout<<"\t de músculos como, por ejemplo, los glúteos y los cuádriceps. \n\n";
            cout<<"\t El ejercicio consiste, básicamente, en colocarnos de cuclillas, \n\n";
            cout<<"\t con las manos apoyadas en el suelo, y, desde esa posición, \n\n";
            cout<<"\t estirar las piernas hacia atrás y, seguidamente, \n\n";
            cout<<"\t volver a la posición inicial. \n\n";
        }
        else if(opcion_piernas == 4)
        {
            cout<<"\t Usted eligio Puente \n";
            cout<<"\t Túmbate boca arriba con las piernas flexionadas. \n\n";
            cout<<"\t A continuación, levanta la cadera y permanecer \n\n";
            cout<<"\t inmovil durante 20 segundos. \n\n";
        }
        else if(opcion_piernas == 5)
        {
         
            
        }
    }

}

int main()
{
    Mejora m1;

    m1.Mostrar_mensaje();
    m1.Fisica();

return 0;
}

