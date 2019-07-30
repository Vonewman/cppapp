#include "Personnage.hpp"
#include <iostream>
using namespace std;


Personnage::Personnage() : m_vie(100),
                           m_mana(100),
                           m_degatsArme(10)
{}

Personnage::Personnage(std::string nomArme, int degatsArme) : m_vie(100),
                                                              m_mana(100),
                                                              m_arme(nomArme, degatsArme)
{}

Personnage::Personnage(Personnage const& autre): m_vie(autre.m_vie),
                                                 m_mana(autre.m_mana), m_nomArme(autre.m_nomArme),
                                                 m_degatsArme(autre.m_degatsArme)
{}

Personnage::~Personnage()
{}

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;

    if (m_vie < 0)
    {
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_degatsArme);
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;

    if (m_vie > 100)  
    {
        m_vie = 100;
    }
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_nomArme = nomNouvelleArme;
    m_degatsArme = degatsNouvelleArme;
}

bool Personnage::estVivant() const
{
    return m_vie;
}


int main()
{
    Personnage goliath("Epée aiguisée", 20);
    Personnage david(goliath);
    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);
    return 0;
}
