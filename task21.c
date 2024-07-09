#include <stdio.h>
#include <string.h>


int main() {
    char *message = "This is data for text file.\nHello fo everyone!\n";
    char *filename = "data.txt";
    
    FILE *file = fopen(filename, "w");

    if (file) {
        fputs(message, file);
        fclose(file);
        printf("File has been written successfully!\n");
    }

    char userLine[255];
    fgets(userLine, 255, stdin);
    printf("user line: %s", userLine);

    filename = "data2.txt";

    file = fopen(filename, "w");

    if (file) {
        fputs(userLine, file);
        fclose(file);
        printf("File has been written successfully again!\n");
    }

    return 0;
}