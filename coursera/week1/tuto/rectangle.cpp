#include <iostream>
using namespace std;

class Rectangle{
public:
  double surface() const { return longueur*largeur; }
  double getLongueur() const { return longueur; }
  void setLongueur(double x) { longueur = x; }
  double getLargeur() const { return largeur; }
  void setLargeur(double x) { largeur = x; } 
private:
  double longueur;
  double largeur;
};

int main() {
  Rectangle rect; // instance de la classe Rectangle
  rect.setLargeur(1.5);
  rect.setLongueur(12.8);
  cout << "Surface : " << rect.surface() << endl;
  return 0;
}
