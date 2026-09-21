#include<stdio.h>
#include<string.h>

int main(){

    // Mad libs game //

    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter a adjective(description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0'; // to remove the newline character from the string //
    printf("Enter a noun (animnal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0'; // to remove the newline character from the string //
    printf("Enter a adjective(description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0'; // to remove the newline character from the string //
    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0'; // to remove the newline character from the string //
    printf("Enter a adjective(description): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0'; // to remove the newline character from the string //

    printf("\nToday I went to a %s zoo.\n", adjective1);
    printf("In exhit, i saw a %s.\n", noun);
    printf("%s was %s and %s!\n", noun, adjective2, verb);

return 0;
}