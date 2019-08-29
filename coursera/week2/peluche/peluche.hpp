#include <iostream>
#include <string>

class Peluche {
private:
    string espece;
    string nom;
    double prix;
    
public:
    string getEspece() const { return espece };
    string getNom() const { return nom; }
    double getPrix() const { return prix; }
    
    void setPrix(double valeur) { prix = valeur; }
};
    
