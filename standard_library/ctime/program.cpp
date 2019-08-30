#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int secondes = time(0);
    cout << "Il s'est écoulé " << secondes << " secondes depuis le 01/01/1970." << endl;
    return 0;
}
