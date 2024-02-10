#include<bits/stdc++.h>
using namespace std;

// bubble sort :

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1;j++){
            if (a[j] > a[j + 1] ){
                    swap(a[j], a[j + 1]);
                }
        }
    }

    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
        return 0;
}

// selection sort :

// int main() {
//   int N;
//   cin >> N;

//   int A[N];
//   for (int i = 0; i < N; i++) {
//     cin >> A[i];
//   }

//   // Selection sort in descending order
//   for (int i = 0; i < N - 1; i++) {
//     // Find the index of the largest element in the unsorted part
//     int max_index = i;
//     for (int j = i + 1; j < N; j++) {
//       if (A[j] > A[max_index]) {
//         max_index = j;
//       }
//     }

//     // Swap the largest element with the first element of the unsorted part
//     swap(A[i], A[max_index]);
//   }

//   // Print the sorted array
//   for (int i = 0; i < N; i++) {
//     cout << A[i] << " ";
//   }
//   cout << endl;

//   return 0;
// }