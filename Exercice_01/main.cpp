#include <iostream>
using namespace std ;

class Point // Déclaration de la classe Point
{
    float x, y ;

    public :
        void initialise(float, float) ;
        void deplace (float, float) ;
        void affiche () ;
} ;

//Définition des fonctions membres
void Point::initialise (float abs, float ord){
    x = abs ; y = ord ;
}
void Point::deplace (float dx, float dy){
    x = x + dx ; y = + dy ;
}
void Point::affiche (){
    cout << "Mes coordonnées cartésiennes sont : " << x << " et " << y << endl ;
}

int main(){
    Point p1;
    p1.initialise(2.3 , 4.5);
    p1.affiche();
    p1.deplace(10.10, 20.20);
    p1.affiche();
}

