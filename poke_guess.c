#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int typeChoice;
    char *selectedPokemon;

    srand(time(0));
    int randomIndex = rand() % 6;
    int attempts = 6;

    char guessChar;
    char hidden[30];
    char *grassPokemon[6] = {"Bulbasaur", "Abomasnow", "Sceptile", "Chikorita", "Torterra", "Chespin"};
    char *firePokemon[6] = {"Moltres", "Charizard", "Cyndaquil", "Blaziken", "Ninetales", "Growlithe"};
    char *waterPokemon[6] = {"Blastoise", "Poliwhirl", "Azumarill", "Totodile", "Gyarados", "Kyogre"};

    printf("=================================\n");
    printf("           PokeGuess\n");
    printf("=================================\n");

    printf("Please enter your pokemon type:\n");
    printf("1.Fire\n2.Grass\n3.Water\n");
    scanf("%d", &typeChoice);

    if (typeChoice == 1)
    {
        selectedPokemon = firePokemon[randomIndex];
    }
    else if (typeChoice == 2)
    {
        selectedPokemon = grassPokemon[randomIndex];
    }
    else if (typeChoice == 3)
    {
        selectedPokemon = waterPokemon[randomIndex];
    }
    else
    {
        printf("Invalid choice!\n");
        return 0;
    }

    int length = strlen(selectedPokemon);

    for (int i = 0; i < length; i++)
    {
        hidden[i] = '_';
    }

    hidden[length] = '\0';

    while (attempts > 0)
    {
        int found = 0;

        printf("\nYour Pokemon is : ");

        for (int i = 0; i < length; i++)
        {
            printf("%c", hidden[i]);
        }

        printf("\nAttempts left: %d", attempts);

        printf("\nGuess a character: ");
        scanf(" %c", &guessChar);

        for (int i = 0; i < length; i++)
        {
            if (selectedPokemon[i] == guessChar)
            {
                hidden[i] = guessChar;
                found = 1;
            }
        }

        if (found == 0)
        {
            attempts--;
            printf("Wrong guess!\n");
        }
        else
        {
            printf("Correct guess!\n");
        }

        if (strcmp(selectedPokemon, hidden) == 0)
        {
            printf("\nCongratulations! You guessed the Pokemon!\n");
            printf("Pokemon was: %s\n", selectedPokemon);
            break;
        }
    }

    if (attempts == 0)
    {
        printf("\nGame Over!\n");
        printf("Pokemon was: %s\n", selectedPokemon);
    }

    return 0;
}