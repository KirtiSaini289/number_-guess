#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random,guess;
    int no_of_guess=0;
    
    srand(time(NULL));
    printf("Welcome to the World of guessing number!\n");
    random = rand() % 100 + 1;
    do{
        printf("\n Please enter your guess number between 1 to 100:\n");
        scanf("%d",&guess);
        no_of_guess++;
        if(guess<random){
            printf("Enter a largur number!");
        }
        else if(guess>random){
            printf("Enter a smaller number!");
        }
        else{
            printf("Congratulations!!!,you have succesfully guessed the number in %d atempts\n",no_of_guess);

        }
        }
      while(guess!=random);
      

    return 0;
}