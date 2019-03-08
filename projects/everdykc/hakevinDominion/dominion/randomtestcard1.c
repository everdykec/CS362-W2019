#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <tgmath.h>

int main() {
    //Testing remodel
    int i;
    int j;
    int rand1;
    int kingdomCards[10] = {adventurer, village, smithy, copper, great_hall, gold, sea_hag, feast, mine, baron};
    struct gameState state;
    int p;
    int numCards;
    int testPasses = 0;
    int discardCount;
    srand(time(NULL));
    for (i = 0; i < 500000; i++) {
        initializeGame(2, kingdomCards, 500, &state);
        p = floor(Random() * 2);
        state.whoseTurn = p;
        state.deckCount[p] = floor(Random() * MAX_DECK);
        state.discardCount[p] = floor(Random() * MAX_DECK);
        state.handCount[p] = floor(Random() * MAX_HAND);
        for(j = 0; j < state.handCount[p]; j++) {
            rand1 = rand() % 10;
            state.hand[p][j] = kingdomCards[rand1];
        }
        numCards = state.handCount[p];
        discardCount = state.discardCount[p];
        cardEffect(remodel, 1, 2, 3, &state, 1, 0);
        //Number of cards should be the same
        if(state.hand[p] != &numCards){
            printf("FAIL: Player did not trash card and pick up new one\n");
            testPasses = 1;
        }
        //Discard count should go up
        if(state.discardCount[p] < discardCount){
            printf("FAIL: Discard card wasn't added to discard pile");
            testPasses = 1;
        }
        if(testPasses == 0){
            printf("PASS: All tests passed\n");
        }
    }
}
