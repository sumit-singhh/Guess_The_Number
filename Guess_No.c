#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int Number;
    int Guess;
    int TGuess=1;
    srand(time(0));
    Number = rand() % 100 + 1;
    
    
    do{
        printf("Guess the number \n");
        scanf("%d", &Guess);

        if(Guess>Number){
            printf("Lower your Guess \n");
        }
        else if(Guess<Number){
            printf("Higher your Guess \n");
        }    
        else{
            printf("CORRECT you guessed it in %d attempts \n", TGuess);
        }
             
     TGuess++;
    }while(Guess=Number);


    return 0;
}