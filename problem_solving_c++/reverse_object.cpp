#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string nm;
        int cls;
        char s;
        int id;
};

int main(){
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n;i++){
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }

    int left = 0, right = n - 1;
    while (left < right)
    {
      char temp = a[left].s;
      a[left].s = a[right].s;
      a[right].s = temp;
      
      left++;
      right--;
    }
    

    for (int i = 0; i < n; i++) {
      cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }

    return 0;
}