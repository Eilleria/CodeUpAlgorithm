#include <stdio.h>

int main() {
    int frontDigit, lastDigit;
    
    scanf("%d-%d", &frontDigit, &lastDigit);
    printf("%06d%07d", frontDigit, lastDigit);
    
    return 0;
}
