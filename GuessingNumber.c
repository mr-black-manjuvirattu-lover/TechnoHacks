#include<stdio.h>
#include<stdlib.h>
void guess(int num){
    printf("ENTER THE NUMBER BETWEEN 1 AND 100:");
    int guessed,attempt=0;
    scanf("%d",&guessed);
    attempt++;
    while(guessed!=num){
        if(guessed>num){
            printf("TOO HIGH! TRY AGAIN....\n");
        }
        else{
            printf("TOO LOW! TRY AGAIN....\n");
        }
        printf("ENTER YOUR GUESS BETWEEN 1 TO 100:");
        scanf("%d",&guessed);
        attempt++;
    }
    printf("CONGRATULATION! YOU GUESSED THE NUMBER IN %d ATTEMPTS...\n",attempt);
}
int main(){
    int number;
    srand(time(0));
    number=rand()%100+1;
    guess(number);
    return 0;
}
