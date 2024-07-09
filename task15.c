#include <stdio.h> 
#include <string.h>


int main(){
    char str[100] = "";
    
    fgets(str, 100, stdin);
    printf("%s\n", str);

    printf("the length of the string: %d", strlen(str));

    return(0); 
}