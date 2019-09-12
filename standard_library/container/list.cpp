#include <iostream>
#include <list>
#include <vector>

int main()
{
    /*
    std::list<double> a; // Une liste de double
    if(a.empty())
	std::cout << "la liste est vide." << std::endl;
    else
	std::cout << "la liste n'est pas vide." << std::endl;
    */

    std::vector<double> a(8, 3.14);
    std::vector<double> b(5, 2.71);

    a.swap(b);
    return 0;
}
