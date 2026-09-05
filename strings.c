#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = {'a', 'b', 'c', '\0'};
    char str[] = "abc"; // compiler automaticaly add null character
    printf("%s\n", s);
    printf("%s\n", str);

    //  characters print krwane ho toh
    int size = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("%c\n", s[i]);
        size++;
    }
    printf("Size is : %d\n", size);

    char Name[20];
    printf("Enter a name: ");
    // scanf("%s", Name);
    // scanf("%[^\n]s", Name);  jab tk new line na ajje tbh tk input lena
    //  another input way can be ==> (fgets)
    fgets(Name, 20, stdin);
    printf("%s\n", Name);
    printf("size: %d\n", strlen(Name) - 1);

    char str1[20] = "hello";
    char str2[20] = "wello";

    // strcpy(str1, str2);    string copy
    // strcat(str1, str2);    string concat
    int ans = strcmp(str1, str2); // string comp  ==> remember the concept of ascii value

    // printf("%s\n", str1);
    printf("%d\n", ans);
 
    return 0;
}