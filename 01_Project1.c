#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    // Initialize random number generator
    int inputNo;
    srand(time(0));
// Generate random number between 1 and 100,
int randomNumber = (rand() % 100) + 1;
// Print the random number
// printf("Random Number: %d\n", randomNumber);

while(inputNo!=randomNumber){
    printf("Enter Input No: ");
scanf("%d",&inputNo);
    if(inputNo>randomNumber){
        printf("Guess Lower No \n");
    }
    if(inputNo<randomNumber){
        printf("Guess Higher No\n");}
    if(inputNo==randomNumber){
        printf("You have correctly guessed NO \n");
    }
}
return 0;
}
