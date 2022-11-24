
#include <stdio.h>
#include <stdbool.h>

int main() {
    int ram = 0;
    char buffer[200000];
    char closer[] = "thineprogrammehathconcluded";

    FILE* code = fopen("main.whygod", "r");

    fscanf(code, "%s", buffer);

    for(int i = 1; i < (sizeof buffer)-1; i++) {
        switch(buffer[i]) {
            case '0':
                ram = -1;
                break;
            case ';':
                printf("%c", 1+ram);
                break;
            case ']':
                ram--;
                break;
            case '[':
                ram++;
                break;
            case '\\':
                break;
            default:
                printf("\n>%c", buffer[i]);
                printf("\nTry:\n[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[;0[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[;0[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[;0[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[;0[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[;0[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[;\0");
                return 0;

        }

    }

    return 0;

}