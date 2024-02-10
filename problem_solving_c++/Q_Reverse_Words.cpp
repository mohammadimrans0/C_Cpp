#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    stringstream ss(s);

    string word;
    bool isFirstWord = true;

    while ( ss >> word){
        reverse(word.begin(), word.end());
        if(isFirstWord){
            isFirstWord = false;
            cout << word;
        }else{
            cout << " " << word;
        }
    }
    
    return 0;
}