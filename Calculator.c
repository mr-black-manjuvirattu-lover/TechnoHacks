#include<stdio.h>
#include <stdlib.h>
int main(){
    printf("1 for ADDITION\n");
    printf("2 for SUBTRACTION\n");
    printf("3 for MULTIPLICATION\n");
    printf("4 for DIVISION\n");
    printf("5 for EXIT\n");
    int num1,num2,choice=1;
    printf("ENTER THE FIRST NUMBER:");
    scanf("%d",&num1);
    printf("ENTER THE SECOND NUMBER:");
    scanf("%d",&num2);
    while(choice>0){
        printf("\nENTER YOUR CHOICE:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("%d + %d = %d",num1,num2,num1+num2);
                break;
            case 2:
                printf("%d - %d = %d",num1,num2,num1-num2);
                break;
            case 3:
                printf("%d * %d = %d",num1,num2,num1*num2);
                break;
            case 4:
                if(num2!=0){
                    printf("%d / %d = %d",num1,num2,num1/num2);
                    break;
                }
                else{
                    printf("DIVISIBLE BY 0 IS NOT POSSIBLE");
                    break;
                }
        }
        if(choice==5){
            printf("............EXITED SUCCESSFULLY...........");
            break;
        }
        else if(choice>5){
            printf("......ENTER THE VALID CHOICE......");
        }
    }
    return 0;
}
