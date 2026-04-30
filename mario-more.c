#include <stdio.h>

void print_row(int spaces, int bricks);
int main(void)
{
    // Prompt for input
    int height;
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height > 8 || height < 1);

    // Print pyramid of that height
    for (int i = 1; i <= height; i++)
    {
        // Print row based on which row
        print_row(height - i, i);
    }
}

// Given a number of bricks, print that number of bricks
void print_row(int spaces, int bricks)
{
    // print spaces

    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    // print bricks
    for (int j = 0; j < bricks; j++)
    {
        printf("#");
    }
    printf("  ");

    for (int j = 0; j < bricks; j++)
    {
        printf("#");
    }

    printf("\n");
}