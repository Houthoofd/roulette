#include "tirages.h"
#include "UI.h"
#include <iostream>
using namespace std;

// constructor de UI //
UI::UI(){
  cout << "construction de la classe UI" << endl;
}

// Destructeur de UI //
UI::~UI(){
  cout << "destruction de la classe UI" << endl;
}

void UI::EncoderParametres(){

  cout << "nombres de tirages désirée ?\n>>\t";
  cin >> UI::tirages;

  cout << "Balance initial\n>>\t";
  cin >> UI::balance;

  cout << "stratégie disponible :" << endl;
  cout << "{0}Les voisins du zéro" << endl;
  cout << "{1}Les orphelins" << endl;
  cout << "{2}Tiers du cylindre" << endl;
  cout << "stratégie souhaitée ?\n>>\t";
  cin >> strategie;

  cout << "Mise\n>>\t";
  cin >> mise;

  tirages Tirages{};
  cout << tirages << endl;
}
