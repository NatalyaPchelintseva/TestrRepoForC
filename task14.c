#include <stdio.h> 


int main(){
    char str[]="Hello world!";
    printf("%s\n", str);

    char str2[17];
    scanf("%s", str2);
    printf("%s\n", str2);

    getchar();
    gets(str2);
    printf("%s\n", str2);

    fgets(str2, 17, stdin);
    printf("%s\n", str2);

    return(0); 
}