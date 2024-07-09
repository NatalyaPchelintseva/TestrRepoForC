#include <stdio.h>
#include <string.h>


int main() {
    char *filename = "text.txt";
    char text[256] = "";
    
    FILE *file = fopen(filename, "r");

    if (file) {
        while((fgets(text, 256, file)) != NULL) {
            printf("%s", text);
            char space[] = " ";
            strcat(text, space);
            char first = text[0], last;
            int count = 0;
            for(int i = 1; i < strlen(text); i++) {
                if (text[i] == ' ') {
                    last = text[i-1];
                    printf("\nfirst = %c last = %c", first, last);
                    if (first == last) {
                        count++;
                    }
                    first = text[i+1];
                }
            }
            printf("\ncount = %d", count);
        }
        fclose(file);
        printf("\nFile has been read successfully!\n");
    }

    return 0;
}