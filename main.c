#include <stdio.h>    //
#include <stdlib.h>

int main()
{

    char characterName[] = "Jon"; // %s
    int characterAge = 91;         // %d
    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);

    characterAge = 30;
    printf("He really like the name %s\n", characterName);
    printf("but he did not like being %d.\n", characterAge);

    return 0;
}
