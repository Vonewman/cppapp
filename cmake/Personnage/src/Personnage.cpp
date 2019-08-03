#include "Personnage.h"

using namespace std;

Personnage::Personnage() : m_vie(100), m_mana(100),
                           m_nomArme("Epée rouillée"), m_degatsArme(10) {} 

Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100), m_mana(100),
                                                         m_nomArme(nomArme), m_degatsArme(degatsArme) {}


void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    // On enlève le nombre de dégats reçus à la vie du personnage

    if (m_vie < 0)
        m_vie = 0;  // On met la vie à 0 pour éviter d'avoir une vie négative.
    
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_degatsArme);
    // On inflige à la cible des dégats quer cause notre arme
}


void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_nomArme = nomNouvelleArme;
    m_degatsArme = degatsNouvelleArme;
}

bool Personnage::estVivant()
{
    return m_vie > 0;
}

