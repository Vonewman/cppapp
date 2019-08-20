#include <iostream>
#include <vector>

using namespace std;

vector<int> solve()
{
  int n, i, value;

  cin >> n;

  vector<int> temp;

  temp.clear();

  for (i = 0; i < n; i++){
    cin >> value;
    temp.push_back(value);
  }

  return temp;
}

int main() {
  vector<int> ans;

  ans.clear();

  ans = solve();

  for (int i = 0; i < ans.size(); i++)
    cout << ans*;

  return 0;
}
