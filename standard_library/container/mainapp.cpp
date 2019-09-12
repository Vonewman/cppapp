#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr(5, 4); // un tableau contenant 5 entier dont la valeur est 4

    arr.pop_back();
    arr.push_back(6);

    for (size_t i(0); i<arr.size(); ++i)
	cout << arr[i] << endl;

    return 0;
}







