#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame(int max){
    int num, x = 0;
    time_t t;
    srand((unsigned) time(&t));
    num = rand() % max;
    char quit;
    while (x != num)
    {
        printf("Enter a number between 1-%d (Enter q to quit): ", max - 1);
        scanf("%d", &x);
        quit = getchar();
        if (quit == 'q')
        {
            printf("\n");
            break;
        }
        if (x < num)
        {
            printf("\nToo low! Guess again.\n");
        }
        if (x > num)
        {
            printf("\nToo high! Guess again.\n");
        }
        if (x == num)
        {
            printf("\nCorrect! You win!\n");
        }
    }
}

void changeMax(int *max){
    int x;
    while (1){
        printf("Enter a new max number: ");
        scanf("%d", &x);
        if (x <= 0){
            printf("Enter positive integers only");
        }
        else if (x > RAND_MAX){
            printf("Number goes above maximum value");
        }
        else {
            *max = x + 1;
            break;
        }
    }
}

void main()
{
    int max = 11;
    int x = 0;
    while (x != 3){
        printf("Press 1 to play a game\n");
        printf("Press 2 to play change the max number\n");
        printf("Press 3 to quit\n");
        scanf("%d", &x);
        if (x == 1){
            playGame(max);
        }
        if (x ==2){
            changeMax(&max);
            printf("New max number: %d\n", max-1);
        }
        if (x ==3){
            printf("Thank you for playing!");
            break;
        }
    }
}