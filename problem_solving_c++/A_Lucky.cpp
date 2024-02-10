#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;

        int left = 0, right = s.size() - 1;
        int leftSum = 0, rightSum = 0;

        while (left < right)
        {
          leftSum += s[left] - '0';
          rightSum += s[right] - '0';
          left++;
          right--;
        }

        if(leftSum == rightSum){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
    
    return 0;
}