#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int a= rand()%100 +1;
    int guess;
    int noofguess=1;
    printf("guess the number from 0 to 100 \n");


    do{
        scanf("%d", &guess);
        if (guess>a){
            printf("guess lower number \n");
        }
        else if(guess<a){
            printf("guess higher number \n");
        }
        else{
            printf("congo you the guessed the number in %d attemopts \n", noofguess);
        }
        noofguess++;
    }while (guess!=a);

    return 0;
}