#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <tgmath.h>

int main() {
    //Testing smithy
    int i;
    int j;
    int rand1;
    int kingdomCards[10] = {adventurer, embargo, smithy, copper, great_hall, gold, sea_hag, feast, mine, baron};
    struct gameState state;
    int p;
    int numCards;
    int numActions;
    int num;
    int discardNum;
    int testPasses = 0;
    srand(time(NULL));
    for (i = 0; i < 500000; i++) {
        initializeGame(2, kingdomCards, 500, &state);
        p = rand() % MAX_PLAYERS;
        state.deckCount[p] = rand() % MAX_DECK;
        state.discardCount[p] = rand() % MAX_DECK;
        state.handCount[p] = rand() % MAX_HAND;
        state.whoseTurn = p;
        discardNum = state.discardCount[p];
        //Set random cards
        for(j = 0; j < state.handCount[p]; j++) {
            rand1 = rand() % 10;
            state.hand[p][j] = kingdomCards[rand1];
        }
        numActions = rand() % 20;
        numCards = state.handCount[p];
        //Call smithy
        cardEffect(smithy, 1, 2, 3, &state, 1, 0);
        if(state.discardCount[p] - discardNum != 1){
            printf("FAIL: Player did not add a card to the discard\n");
            testPasses = 1;
        }
        if(state.hand[p] != &numCards + 2){
            printf("FAIL: Player did pick up enough cards\n");
            testPasses = 1;
        }
        if(testPasses == 0){
            printf("PASS: All tests passed\n");
        }
    }
}
