#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    if (n % 2 != 0) {
      cout << -1 << endl;
    }

    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 0) {
        even++;
      } else {
        odd++;
      }
    }

    if(even == odd){
        cout << 0 << endl;
    }else if (even == 0 || odd == 0)
    {
        cout << n / 2 << endl;
    }
    // else if (even> odd)
    // {
    //   cout << even - odd << endl;
    // }else if (even < odd)
    // {
    //   cout << odd - even << endl;
    // }
    
    
        
  }

  return 0;
}