#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE
#include <iostream>
#include <string>
#include "Arme.h"

class Personnage
{
 public:
  ~Personnage(); // Le destructeur
  Personnage(std::string nomArme, int degatsArme); // Surchage du constructeur 
  void recevoirDegats(int nbDegats);
  void attaquer(Personnage &cible);
  void boirePotionDeVie(int quantitePotion);
  void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
  bool estVivant() const; // const parce qu'il ne modifie pas l'objet.
  void afficherEtat() const;

 private:
  int m_vie;
  int m_mana;
  Arme m_arme;

};

#endif
