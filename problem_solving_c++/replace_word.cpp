#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    string s, x;
    cin >> s >> x;

    while (s.find(x) != static_cast<size_t>(-1)) {
      s.replace(s.find(x), x.length(), "#");
    }

    cout << s << endl;
  }

  return 0;
}