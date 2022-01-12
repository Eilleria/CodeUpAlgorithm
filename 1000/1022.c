#include <stdio.h>

int main() {
    char str[2000];
    
    fgets(str, 2000, stdin);
    printf("%s", str);
    
    return 0;
}
