
#include <stdio.h>
#include <stdbool.h>

int main() {
    int ram = 0;
    char buffer[200000];

    FILE* code = fopen("main.whygod", "r");

    fscanf(code, "%s", buffer);

    for(int i = 1; i < (sizeof buffer); i++) {
        switch(buffer[i]) {
            case '0':
                ram = -1;
                break;
            case ';':
                putchar(ram+1);
                break;
            case ']':
                ram--;
                break;
            case '[':
                ram++;
                break;
            default:
                return 0;

        }

    }

    return 0;

}