# include <stdio.h>


int main (void) {
    char name[105]={}; fgets(stdin, name, 100);
    printf("hello, %s\n", name);
    return 0;
}

