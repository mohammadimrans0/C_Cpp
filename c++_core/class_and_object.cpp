#include <bits/stdc++.h>
using namespace std;

class Student {
public:
  char name[100];
  int roll;
  double cgpa;
};

int main() {
  Student a;
  a.roll = 29;
  a.cgpa = 3.95;

  char temp[100] = "rakib";
  strcpy(a.name, temp);

  cout << a.name << " " << a.roll << " " << a.cgpa << endl;

  return 0;
}