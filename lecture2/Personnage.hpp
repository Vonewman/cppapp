#ifndef DEF_PERSONNAGE_HPP
#define DEF_PERSONNAGE_HPP
#include <iostream>
#include <string>
#include "Arme.hpp"
class Personnage
{
public:
    ~Personnage();
    Personnage();
    Personnage(Personnage const& autre);
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int
                     degatsNouvelleArme);
    bool estVivant() const;
    
private:
    int m_vie;
    int m_mana;
    Arme m_arme;
};
#endif
