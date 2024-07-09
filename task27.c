// работа со структурами

#include <stdio.h>
#include <stdlib.h>


struct FullName {
    char FirstName[50];
    char LastName[50];
};


int main() {
    struct FullName h1, h2;

    printf("enter first name for human 1: ");
    scanf("%s", &h1.FirstName);
    printf("enter last name for human 1: ");
    scanf("%s", &h1.LastName);

    printf("enter first name for human 2: ");
    scanf("%s", &h2.FirstName);
    printf("enter last name for human 2: ");
    scanf("%s", &h2.LastName);

    printf("\nYou entered the following data:\n");
    printf("data for the first man:\n");
    printf("\t%s\n\t%s\n", h1.FirstName, h1.LastName);
    printf("data for the second man:\n");
    printf("\t%s\n\t%s", h2.FirstName, h2.LastName);

    struct FullName *h3 = malloc(sizeof(struct FullName));
    printf("\nenter first name for human 3: ");
    scanf("%s", h3->FirstName);
    printf("enter last name for human 3: ");
    scanf("%s", h3->LastName);

    printf("\nYou entered the following data:\n");
    printf("data for the third man:\n");
    printf("\t%s\n\t%s\n", h3->FirstName, h3->LastName);

    return 0;
}