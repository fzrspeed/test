# include <stdio.h>


int main (void) {
    char name[105]={};
    printf("hello, %s\n", fgets(name, 100, stdin));
    return 0;
}