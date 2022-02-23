#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void banner_vertical(char *a){
        printf("+---+\n");
        char *ptr = a;
        while (*ptr){
          printf("| %c |\n",*ptr);
          ptr++;
        }
        printf("+---+\n");
}

int main() {
    int n;
    scanf("%d",&n);
    char **a;
    scanf("%s",&a[0]);
    if (n==1) banner_vertical(a[0]);
    //else
        //banner_horizontal(argv[1]);
}