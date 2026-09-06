#include <stdio.h>
#include <string.h>

int main()
{
    // question 1: string input lekr usko print krna and length
    char name[20];
    printf("Enter a string: ");
    scanf("%[^\n]s", name);

    printf("String is \"%s\" and length of string is %d\n", name, strlen(name));

    // question 2:

    int i = 0, j = strlen(name) - 1;
    int ans = 1;
    while (i <= j)
    {
        if (name[i] != name[j])
        {
            ans = 0;
            break;
        }
        i++;
        j--;
    }
    printf(ans == 0 ? "String is not a palindrome\n" : "String is a palindrome");

    // question 3: toggling characters

    char rdm[20];
    printf("Enter a string: ");
    scanf("%[^\n]s", rdm);

    for (int i = 0; i < strlen(rdm); i++)
    {
        if (rdm[i] <= 122 && rdm[i] >= 97)
        {
            rdm[i] -= 32;
        }
        else if (rdm[i] >= 65 && rdm[i] <= 90)
        {
            rdm[i] += 32;
        }
    }
    printf("%s", rdm);

    return 0;
}