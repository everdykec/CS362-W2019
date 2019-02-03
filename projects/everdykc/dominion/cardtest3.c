#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <string.h>

int main(){
    //Testing great hall

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
    if(cardEffect(great_hall, 1, 2, 3, state, 1, 0) == 0){
        printf("great_hall(): PASS returns 0 \n");
    }
    else{
        printf("great_hall(): FAIL does not return 0 \n");
    }

    //Number of cards is the same (grab one and discard one)
    if(state->handCount[0] == numCards){
        printf("great_hall(): PASS added card and discarded card \n");
    }
    else{
        printf("great_hall(): FAIL did not add card and discarded card \n");
    }

    int num;
    num = state->numActions - actions;
    //Actions increase by one
    if(num == 1){
        printf("great_hall(): PASS added one actions \n");
    }
    else{
        printf("great_hall(): FAIL did not add one actions \n");
    }
    free(state);
}