#include <iostream>
#include <cmath>
/* Le but de ce programme est d'écrire une classe représentant la notion de Cercle! */
using namespace std;

// -----=====----- un point dans le plan -----=====-----
struct Point {
  double x; // abscisse
  double y; // ordonnée
};

// -----=====----- la classe Cercle -----=====-------
class Cercle{
public:
  double surface() const { return M_PI * m_rayon * m_rayon; }
  bool estInterieur(const Point& p) const {
    return (((p.x-centre.x) * (p.x-centre.x) +
	     (p.y-centre.y) * (p.y-centre.y))
	     <= m_rayon * m_rayon);
  }

  // interface des attributs
  Point getCentre() const { return centre; }
  void setCentre(const Point& p) { centre = p; }
  double getRayon() const { return m_rayon; }
  void setRayon(double r) {
    if (r < 0.0) r = 0.0;
    m_rayon = r;
  }
private:
  double m_rayon;
  Point centre;
};

// ------------------------------------------
void dans(bool oui) {
  if (oui) cout << "dans"; else cout << "hors de";  
}

// --------------------------------------------------------------------
void test(Point p, Cercle c1, Cercle c2) {
  cout << "position du point (" << p.x << ", " << p.y << ") : ";
  dans(c1.estInterieur(p));
  cout << " C1 et ";
  dans(c2.estInterieur(p));
  cout << " C2." << endl;
}

//----------------------------------------------------------------------
int main() {
  Cercle c1, c2;
  Point p;

  p.x = 1.0; p.y = 2.0;
  c1.setCentre(p);
  c1.setRayon(sqrt(5.0));

  p.x = -2.0; p.y = 1.0;
  c2.setCentre(p);
  c2.setRayon(2.25);

  cout << "Surface de C1 : " << c1.surface() << endl;
  cout << "Surface de C2 : " << c2.surface() << endl;
  p.x=0.0; p.y=0.0;
  test(p,c1,c2);
  p.x=1.0; p.y=1.0;
  test(p,c1,c2);
}

    
