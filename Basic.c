#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n;
    scanf("%d", &n);

    int a1[n];
    for (int j = 0; j < n; j++) {
        scanf("%d", &a1[j]);
    }

    int a3[n - 1];
    for (int i = 0; i < n - 1; i++) {
        a3[i] = abs(a1[i] - a1[i + 1]);
    }

   
    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < n - i - 2; j++) {
            if (a3[j] > a3[j + 1]) {
                int temp = a3[j];
                a3[j] = a3[j + 1];
                a3[j + 1] = temp;
            }
        }
    }

    int ok = 1; 
    for (int i = 0; i < n - 1; i++) {
        if (a3[i] != i + 1) {
            ok = 0; 
            break; 
        }
    }

    if (ok) {
        printf("UB Jumper");
    } else {
        printf("Not UB Jumper");
    }

    return 0;
}
