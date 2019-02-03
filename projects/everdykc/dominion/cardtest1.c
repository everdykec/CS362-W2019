#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <string.h>

int main(){
    //Testing the smithy card
    struct gameState state;
    int numCards;
    state.whoseTurn = 0;
    numCards = state.handCount[0];

    //Check if it returns 0
    if(cardEffect(smithy, 1, 2, 3, &state, 1, 0) == 0){
        printf("newSmithy(): PASS returns 0 \n");
    }
    else{
        printf("newSmithy(): FAIL returns 0 \n");
    }
    //Test players cards
    if(state.handCount[0] - numCards == 2){
        printf("newSmithy(): PASS added two new cards to hand \n");
    }
    else{
        printf("newSmithy(): FAIL did not add two new cards to hand \n");
    }
}