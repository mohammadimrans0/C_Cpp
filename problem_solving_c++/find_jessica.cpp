#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    stringstream ss(s);

    string word;
    bool found = false;

    while (ss >> word)
    {
        if(word == "Jessica"){
            found = true;
        }
    }

    if(found){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}