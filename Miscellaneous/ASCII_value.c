#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");

    // Reads character input from the user
    scanf("%c", &c);

    // displays the actual character and value
    printf("ASCII value of %c = %d", c, c);
    return 0;
}
