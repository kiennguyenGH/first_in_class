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
            break;
        }
    }
}

void changeMax(){

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

        }
        if (x ==3){
            printf("Thank you for playing!");
            break;
        }
    }
}