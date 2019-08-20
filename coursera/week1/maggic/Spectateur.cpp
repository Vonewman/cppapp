#include "Spectateur.h"

using namespace std;

void Spectateur::arriver()
{
  cout << "[Spectateur] (j'entre en scène)" << endl;
  cout << "Quel âge ai-je ?";
  cin >> age;
  do {
    cout << "Combien d'argent ai-je en poche (<100) ? ";
    cin >> argent;
  } while(argent >= 100);
  cout << "[Spectateur] (je suis là)" << endl;
}
