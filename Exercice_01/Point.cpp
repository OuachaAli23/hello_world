#include <iostream>
#include "Point.h"

using namespace std ;

//D�finition des fonctions membres
void Point::initialise (float abs, float ord){
    x = abs ; y = ord ;
}
void Point::deplace (float dx, float dy){
    x = x + dx ; y = + dy ;
}
void Point::affiche (){
    cout << "Mes coordonn�es cart�siennes sont : " << x << " et " << y << endl ;
}
