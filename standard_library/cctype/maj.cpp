#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    cout << "Entrez une phrase : " << endl;
    string phrase;
    getline(cin, phrase);

    // On parcourt la chaine pour la convertir en majuscules
    for (int i(0); i<phrase.size(); ++i)
	phrase[i] = toupper(phrase[i]);

    cout <<"Votre phrase en majuscules est : " << phrase << endl;
    return 0;
}
