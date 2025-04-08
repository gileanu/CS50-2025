#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int meows = get_int("How many? ");
    for (int i = 0; i < meows; i++)
    {
        printf("meow\n");
    }
}
