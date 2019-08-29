#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    cout << "Entrez un caractère : ";
    char symbole;
    cin >> symbole;

    if (isdigit(symbole))
	cout << "C'est un chiffre." << endl;
    else
	cout << "Ce n'est pas un chiffre." << endl;

    return 0;
}
