#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n], c[n];

        for (int i = 0; i < n;i++){
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < n; i++) {
            b[i] = a[i];
        }


        for (int i = 0; i < n - 1; i++) {
          for (int j = i + 1; j < n; j++) {
            if (b[i] > b[j]) {
              int temp = b[i];
              b[i] = b[j];
              b[j] = temp;
            }
          }
        }

        for (int i = 0; i < n; i++) {
            c[i] = a[i] - b[i];
        }

        for (int i = 0; i < n; i++) {
            if(c[i] < 0){
                c[i] *= -1;
            }
            printf("%d ", c[i]);
        }

        printf("\n");
    }
    
    return 0;
}