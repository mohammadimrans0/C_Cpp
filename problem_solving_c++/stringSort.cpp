#include <bits/stdc++.h>

using namespace std;


void countingSort(char str[], int n) {
  const int NUM_CHARS = 26; // Number of lowercase letters
  int freq[NUM_CHARS] = {
      0}; // Frequency array to count occurrences of each letter

  // Count occurrences of each letter
  for (int i = 0; i < n; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      freq[str[i] - 'a']++;
    }
  }

  // Write sorted characters back to the string
  int idx = 0;
  for (int i = 0; i < NUM_CHARS; i++) {
    for (int j = 0; j < freq[i]; j++) {
      str[idx++] = 'a' + i;
    }
  }
}

int main() {
  char c;

  while ((c = cin.get()) != EOF) {
    char output[100000];
    int idx = 0;

    while ((c >= 'a' && c <= 'z') || c == ' ') {
      if (c >= 'a' && c <= 'z') {
        output[idx++] = c;
      }
      c = cin.get();
    }

    countingSort(output, idx);

    for (int i = 0; i < idx; i++) {
      cout << output[i];
    }

    if (c != EOF) {
      cout << c;
    }
  }

  return 0;
}
