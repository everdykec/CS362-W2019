#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <tgmath.h>

int main(){
    int i;
    int kingdomCards[10] = {adventurer, embargo, smithy, copper, great_hall, gold, sea_hag, feast, mine, baron};
    struct gameState state;
    int p;
    int j;
    int k;
    int l;
    int rand1;
    int coins = 0;
    int updatedCoins;
    int discardError = 0;
    int testPasses = 0;
    srand(time(NULL));

    for(i = 0; i < 500000; i++){
        initializeGame(2, kingdomCards, 500, &state);
        p = floor(Random() * 2);
        state.deckCount[p] = floor(Random() * MAX_DECK);
        state.discardCount[p] = floor(Random() * MAX_DECK);
        state.handCount[p] = floor(Random() * MAX_HAND);
        state.whoseTurn = p;

        //Set coin cards; set everything else randomly
        for(j = 0; j < state.handCount[p]; j++){
            rand1 = rand() % 10;
            if(rand1 == 1){
                state.hand[p][j] = copper;
                coins++;
            }
            else if(rand1 == 2){
                state.hand[p][j] = silver;
                coins++;
            }
            else if(rand1 == 3){
                state.hand[p][j] = gold;
                coins++;
            }
            else{
                state.hand[p][j] = kingdomCards[rand1];
            }
        }
        cardEffect(adventurer, 1, 2, 3, &state, 1, 0);
        //Check how many coins the player has now
        for(k = 0; k < state.handCount[p]; k++){
            if(state.hand[p][k] == copper || state.hand[p][k] == silver || state.hand[p][k] == gold){
                updatedCoins++;
            }
        }
        //Check to make sure that only non-coins were discarded
        for(l = 0; l < state.discardCount[p]; l++){
            if(state.discard[p][l] == copper || state.discard[p][l] == silver || state.discard[p][l] == gold){
                discardError = 1;
            }
        }
        if(updatedCoins > coins + 2){
            printf("FAIL: Player picked up too many cards\n");
            testPasses = 1;
        }
        if(updatedCoins < coins + 2){
            printf("FAIL: Player did not pick up enough cards\n");
            testPasses = 1;
        }
        if(discardError == 1){
            printf("FAIL: Player discarded a coin card\n");
            testPasses = 1;
        }
        if(testPasses == 0){
            printf("PASS: Congrats all tests were passed!");
        }
    }
}
