#include <stdio.h>
#include <stdlib.h>

int sum_lines(char *name);

int main() {
    printf("%d",sum_lines("../file.txt"));
}

int sum_lines(char *name){
    FILE * file = fopen (name, "r");
    int sum;
    if ( file != NULL ){
        sum = 0;
        int c;
        char buffer [80];
        while ( fgets ( buffer , 80, file ) != NULL ) {
            c = atoi(buffer);
            sum += c;
        }
        fclose(file);
    }
    return sum;
}