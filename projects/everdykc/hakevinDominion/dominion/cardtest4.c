#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <string.h>

int main(){
    //Testing adventurer

    struct gameState * state = malloc(sizeof(struct gameState));

    int numCards;
    int actions;

    state->handCount[0] = 5;

    state->deck[0][1] = copper;
    state->deck[0][2] = gold;
    state->deck[0][3] = silver;
    state->deck[0][4] = smithy;
    state->deck[0][5] = sea_hag;
    state->deck[0][6] = mine;
    state->deck[0][7] = great_hall;
    state->deck[0][8] = village;
    state->deckCount[0] = 8;
    state->playedCardCount = 0;
    state->discardCount[0] = 0;
    state->whoseTurn = 0;
    numCards = state->handCount[0];

    //Returned 0
    if(cardEffect(adventurer, 1, 2, 3, state, 1, 0) == 0){
        printf("adventurer(): PASS returns 0 \n");
    }
    else{
        printf("adventurer(): FAIL does not return 0 \n");
    }

    //Check if deck reshuffles if it's empty
    state->deckCount[0] = 0;
    cardEffect(adventurer, 1, 2, 3, state, 1, 0);
    if(state->deckCount[0] == 0){
        printf("adventurer(): FAIL empty deck did not change \n");
    }
    else{
        printf("adventurer(): PASS empty deck changed \n");
    }

    //Test with two treasure cards
    state->hand[0][1] = copper;
    state->hand[0][2] = silver;
    state->hand[0][3] = adventurer;
    state->hand[0][4] = adventurer;
    state->hand[0][5] = province;
    state->hand[0][6] = smithy;
    state->hand[0][7] = great_hall;
    state->hand[0][8] = cutpurse;
    state->hand[0][9] = smithy;
    cardEffect(adventurer, 1, 2, 3, state, 1, 0);
    if(state->handCount[0] == 9){
        printf("adventurer(): FAIL cards were not discarded \n");
    }
    else{
        printf("adventurer(): PASS cards were discarded \n");
    }
    free(state);
}