#include <bits/stdc++.h>
using namespace std;

class Student {
public:
  int id;
  string name;
  char section;
  int totalMarks;

  Student(int id, const string &name, char section, int totalMarks) {
    this->id = id;
    this->name = name;
    this->section = section;
    this->totalMarks = totalMarks;
  }
};

int main() {
  int T;
  cin >> T;

  while (T--) {
    Student students[3] = {Student(0, "", ' ', 0), Student(0, "", ' ', 0), Student(0, "", ' ', 0)};

    for (int i = 0; i < 3; ++i) {
      cin >> students[i].id >> students[i].name >> students[i].section >>
          students[i].totalMarks;
    }

    
    int highestMarks = -1;
    int highestId = -1;

    for (int i = 0; i < 3; ++i) {
      if (students[i].totalMarks > highestMarks ||
          (students[i].totalMarks == highestMarks &&
           students[i].id < highestId)) {
        highestMarks = students[i].totalMarks;
        highestId = students[i].id;
      }
    }
    
    for (int i = 0; i < 3; ++i) {
      if (students[i].id == highestId) {
        cout << students[i].id << " " << students[i].name << " " << students[i].section << " " << students[i].totalMarks << endl;
        break;
      }
    }
  }

  return 0;
}