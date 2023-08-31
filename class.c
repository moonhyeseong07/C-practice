#include <stdio.h>

int main() {
    int a[100];
    int i, input, count = 0;


    while (count < 100) {
        scanf("%d", &input);
        
        if (input == 0)
            break;
        
        a[count] = input;
        count++;
    }

    for (i = count - 1; i >= 0; i--) 
        printf("%d ", a[i]);
    
    return 0;
}