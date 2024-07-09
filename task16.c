#include <stdio.h> 
#include <string.h>


int main(){
    char str[100] = "";
    
    fgets(str, 100, stdin);
    printf("%s\n", str);

    for(int i = 0; i < strlen(str); i++) {
        if ((str[i] >= 65) && (str[i] <= 90)) {
            str[i] += 32;
        }
    }
    printf("%s\n", str);

    char ch = 'A';
    int code = 65;
    printf("%d\n", (int)ch);
    printf("%c\n", (char)code);

    return(0); 
}