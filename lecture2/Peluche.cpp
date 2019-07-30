#include <iostream>
#include <string>

class Peluche {
private:
    std::string espece;
    std::string nom;
    double prix;
public:
    std::string getEspece() const { return espece; }
    std::string getNom() const { return nom; }
    double getPrix() const { return prix;}
};

int main()
{
    return 0;
}
