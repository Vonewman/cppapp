#include <iostream>

int main()
{
    double valeur1, valeur2, valeur3;
    valeur1 = 3;
    valeur2 = 7;
    valeur3 = 11;
    int n;
    double *choix;

    
    do {
        std::cout <<"Entrez un nombre entre [1,3]: ";
        std::cin >> n;
    } while ((n > 3) || (n < 1));

    if (n == 1) { choix = &valeur1; }
    if (n == 2) { choix = &valeur2; }
    if (n == 3) { choix = &valeur3; }

    std::cout << "Vous avez choisi: " << *choix << std::endl;
    
    
}
