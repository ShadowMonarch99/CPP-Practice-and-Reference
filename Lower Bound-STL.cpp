#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n,q,num;
  vector<int> v;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> num;
    v.push_back(num);
  }
  cin >> q;
  for (int i = 0; i < q; i++) {
    int s;
    cin >> s;
    auto low = lower_bound(v.begin(), v.end(), s);
    int index = (low - v.begin());
    if (s == v[index]) {
      cout << "Yes " << index + 1 << "\n";
    } else {
      cout << "No " << index + 1 << "\n";
    }
  }
  return 0;
}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   
