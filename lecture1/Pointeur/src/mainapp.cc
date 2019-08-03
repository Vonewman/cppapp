#include <iostream>


int main()
{
    int ageUtilisateur(16);
    //Pour afficher l'adresse de ageutilisateur on utilise &ageutilisateur
    //int &maReference(ageUtilisateur); // délcaration d'une référence
    //std::cout << "L'adresse est: " << &ageUtilisateur << std::endl;
    //    std::cout << "La valeur de ageutilisateur est " << maReference << std::endl;

    int *pointeur(0);
    // Un pointeur qui peut contenir l'adresse d'un entier

    
    double *pointeurA(0);
    // Un pointeur qui peut contenir l'adresse d'un nombre à virgule

    unsigned int *pointeurB(0);
    // Un pointeur qui peut contenir l'adresse d'un entier positif
    
    // Un pointeur qui peut contenir l'adresse d'un tableau dynamique d'entiers;

    int const *pointeurE(0);

    int *ptr(0);

    ptr = &ageUtilisateur;
    // On met l'adresse de 'ageUtilisateur' dans le pointeur 'ptr'

    std::cout << "La valeur de la case mémoire est: " << *ptr << '\n';
    return 0;
}
