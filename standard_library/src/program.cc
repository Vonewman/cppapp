#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main() {

  vector<int> tab = {5, 2, 4, 6, 1, 3};
  vector<int>::iterator it;

  for (it = tab.begin(); it != tab.end(); ++it) {
    cout << *it << endl;
  }
  return 0;
}

