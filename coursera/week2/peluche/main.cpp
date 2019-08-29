#include "peluche.hpp"

using namespace std;

void etiquette(Peluche p) {
    cout << "Hello, mon nom est " << p.getNom() << endl
	 << "Je suis un " << p.getEspece() << " et je coute "
	 <<p.getPrix() << " francs." << endl;
}

int main() {
    Peluche bobo;
    cout << "Etiquette :" << endl;
    etiquette(bobo);
    return 0;
}
