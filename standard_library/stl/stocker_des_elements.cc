#include <iostream>
#include <vector>

using namespace std;

int main()
{
  
  vector<int> tab(5,4);

  tab.pop_back();
  tab.push_back();

  for (int i(0); i<tab.size(); ++i)
    cout << tab[i] << endl;

  
  return 0;
}
