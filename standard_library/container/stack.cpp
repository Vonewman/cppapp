#include <stack>
#include <iostream>

using namespace std;

int main()
{
    stack<int> lifo;

    lifo.push(3);
    lifo.push(4);
    lifo.push(5);

    cout << lifo.top() << endl;

    lifo.pop();

    cout << lifo.top() << endl;

    
    return 0;
}
