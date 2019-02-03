#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <string.h>

int main(){
    //Testing village
    struct gameState * state = malloc(sizeof(struct gameState));

    int numCards;
    int actions;

    state->deckCount[0] = 10;
    state->whoseTurn = 0;
    state->handCount[0] = 3;
    state->hand[0][0] = adventurer;
    state->hand[0][1] = sea_hag;
    state->hand[0][2] = mine;

    numCards = state->handCount[0];
    actions = state->numActions;

    //Returned 0
    if(cardEffect(village, 1, 2, 3, state, 1, 0) == 0){
        printf("village(): PASS returns 0 \n");
    }
    else{
        printf("village(): FAIL does not return 0 \n");
    }

    //Number of cards is the same (grab one and discard one)
    if(state->handCount[0] == 3){
        printf("village(): PASS added card and discard card \n");
    }
    else{
        printf("village(): FAIL did not add card and discard card \n");
    }

    //Actions increase by two
    int num;
    num = state->numActions - actions;
    if(num == 2){
        printf("village(): PASS added two actions \n");
    }
    else{
        printf("village(): FAIL did not add two actions \n");
    }
    free(state);
}