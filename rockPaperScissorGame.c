#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int userPoints = 0, computerPoints = 0, userChoice, computerChoice;

    while(1){
        srand(time(NULL));
        computerChoice = rand() % 3 + 1;

        printf("1 FOR ROCK\n");
        printf("2 FOR PAPER\n");
        printf("3 FOR SCISSOR\n");
        printf("4 FOR RESULT\n");
        printf("5 FOR EXIT\n");
        printf("\nENTER THE CHOICE:");
        scanf("%d", &userChoice);
        printf("\n");
        if ((userChoice == 3 && computerChoice == 1) || (userChoice == 2 && computerChoice == 3) || (userChoice == 1 && computerChoice == 2)){
            printf("*******COMPUTER WINS*******\n");
            computerPoints++;
        }
        else if ((userChoice == 1 && computerChoice == 3) || (userChoice == 2 && computerChoice == 1) || (userChoice == 3 && computerChoice == 2)){
            printf("*******USER WINS*******\n");
            userPoints++;
        }
        else if (userChoice==computerChoice){
            printf("*******GAME IN TIE*******\n");
        }

        if (userChoice == 4){
            printf("EVALUATING RESULT\n");
            printf("COMPUTER SCORE:%d\n", computerPoints);
            printf("YOUR SCORE:%d\n", userPoints);
            if (computerPoints > userPoints){
                printf("COMPUTER WINS THE GAME\n");
                printf("WELL PLAYED\n");
            }
            else{
                printf("CONGRATULATIONS, YOU WIN THE GAME\n");
            }
        }
        else if (userChoice == 5){
            printf(".......GAME END.......\n");
            break;
        }
    }

    return 0;
}
