#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("1 FAHRENHEIT TO CELSIUS\n");
    printf("2 CELCIUS TO FAHRENHEIT\n");
    printf("3 EXIT\n");
    int choice=1;
    while(choice>0){
        printf("\nENTER THE CHOICE:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("\nENTER THE TEMPERATURE IN FAHRENHEIT:");
                float temperature;
                scanf("%f",&temperature);
                float celsius=(temperature-32)/1.8;
                printf("%.2f FAHRENHEIT = %.2f CELSIUS",temperature,celsius);
                break;
            case 2:
                printf("\nENTER THE TEMPERATURE IN CELSIUS:");
                float temp;
                scanf("%f",&temp);
                float fahrenheit=(1.8*temp)+32;
                printf("%.2f CELSIUS = %.2f FAHRENHEIT",temp,fahrenheit);
                break;
        }
        if(choice==3){
            printf("...............EXITED SUCCESSFULLY.............");
            break;
        }
        else if(choice>2){
            printf("................ENTER VALID CHOICE................");
            break;
        }
    }
    return 0;
}
