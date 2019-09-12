#include <deque>
#include <iostream>

using namespace std;

int main() {
    deque<int> d(4, 5);

    d.push_front(2);
    d.push_back(8);

    for (size_t i(0); i<d.size(); ++i)
	cout << d[i] << " ";

    cout << endl;
    return 0;
}
