#include "tirages.h"
#include <iostream>
using namespace std;

// Constructeur de la classe Tirages //
Tirages::Tirages(){

}
// Destructeur de la classe Tirages //
Tirages::~Tirages(){

}

int Tirages::NombresAleatoire(){
  return nombre_aleatoire = rand() % 36;
}
