#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    puts("Enter the card name: ");
    scanf("%2s", card_name);

    int val = 0;

    int counter = 0;

    switch (card_name[0])
    {
    case 'K':
    case 'Q':
    case 'J':
        val = 10;
        break;
    case 'A':
        val = 11;
        break;
    default:
        val = atoi(card_name);
        break;
    };

    if (val >= 3 || val <= 6)
    {
        puts("Count has gone up!");
    }
    else
    {
        puts("Count has gone down");
    }

    printf("The card value is: %i\n", val);

    return 0;
}