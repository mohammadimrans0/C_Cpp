#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int max_value = *max_element(a, a + n);

  cout << max_value;
  return 0;
}