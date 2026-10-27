#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char word[1000];
    int result;

    while ((result = scanf("%999s", word)) == 1)
    {
        printf("%s\n", word);
    }

    if (result != EOF)
    {
        fprintf(stderr, "Error reading input\n");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
