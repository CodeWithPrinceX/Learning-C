#include <stdio.h>
#include <string.h>

typedef struct user
{
    char name[20];
    int age;
} Details;

// void displayUser(struct user s);
void displayUser(Details *s);  

int main()
{
    // struct user s1;
    // strcpy(s1.name, "Golu");     // long method
    // s1.age = 21;

    Details s1 = {"Golu", 21};
    Details s2 = {"Polu", 18};

    displayUser(&s1);
    displayUser(&s2);
    // printf("Size : %u\n", sizeof(s1));
    return 0;
}

void displayUser(Details *s)
{
    // printf("Name = %s and age = %d\n", (*s).name, (*s).age);
    printf("Name = %s and age = %d\n", s->name, s->age);
}