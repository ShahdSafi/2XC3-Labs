#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double lines, words, characters;

    if (scanf("%lf %lf %lf", &lines, &words, &characters) != 3)
    {
        fprintf(stderr, "Error reading wc output\n");
        return EXIT_FAILURE;
    }

    if (lines <= 0)
    {
        fprintf(stderr, "Cannot calculate average for zero lines\n");
        return EXIT_FAILURE;
    }

    printf("%.1f\n", characters / lines - 1);

    return EXIT_SUCCESS;
}
