# include <stdio.h>


int main (void) {
    char name[105]={}; fgets(name, 100, stdin);
    printf("happy diwali, %s\n", name);
    return 0;
}

