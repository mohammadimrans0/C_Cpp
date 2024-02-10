#include<bits/stdc++.h>
using namespace std;

int main(){
    char x;
    cin >> x;

    if(x >= '0' && x <= '9'){
        cout << "IS DIGIT";
    }else if(x >= 'A' && x <= 'Z'){
      cout << "ALPHA" << endl << "IS CAPITAL";
    }else{
        cout << "ALPHA" << endl << "IS SMALL";
    }

    return 0;
}