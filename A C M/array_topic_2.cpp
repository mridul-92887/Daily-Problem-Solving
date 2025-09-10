#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int array[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int min = 1e9;

    for (int i = 0; i < n; i++) {
        int count = 0;
        
        while (array[i] % 2 == 0) {
            array[i] = array[i] / 2;
            count++;
        }
        
        if (count < min) {
            min = count;
        }
    }

    printf("%d\n", min);

    return 0;
}