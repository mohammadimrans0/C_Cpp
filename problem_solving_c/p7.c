/*
Problem Statement

You will be given a string S. The string will contain small and capital English alphabets and digits only. You need to tell how many of them are capital alphabets, how many are small alphabets and how many are digits.

Input Format

First line will contain T, the number of test cases.
Each test case will contain only S.
Constraints

1 <= T <= 1000
1 <= |S| <= 10000; Here |S| means the length of S.
Output Format

Output the count of capital alphabets first, then the count of small alphabets then the count of digits. Don't forget to put a new line after each test case.
Sample Input 0

2
theFox25IsBrave
ILoveYou100TimesAndSay2Also
Sample Output 0

3 10 2
7 16 4
*/

#include <stdio.h>
#include <string.h>

int main() {
    int testCases;
    scanf("%d", &testCases);
    
    while (testCases--) {

    char str[10001]; 
     scanf("%s", str);
        
    int capitalCount = 0, smallCount = 0, digitCount = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            capitalCount++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            smallCount++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digitCount++;
        }
    }

        printf("%d %d %d\n", capitalCount, smallCount, digitCount);
    }

    return 0;
}