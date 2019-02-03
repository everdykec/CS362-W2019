#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <string.h>

int main(){
    //This unit test will check the supplyCount() function
    struct gameState * state = malloc(sizeof(struct gameState));

    //Check when the amount is 0
    state->supplyCount[copper] = 0;
    if(supplyCount(copper, state) == 0){
        printf("supplyCount(): PASS when supply is 0 \n");
    }
    else{
        printf("supplyCount(): FAIL when supply is 0 \n");
    }

    //Check when the amount is 1
    state->supplyCount[copper] = 1;
    if(supplyCount(copper, state) == 1){
        printf("supplyCount(): PASS when supply is 1 \n");
    }
    else{
        printf("supplyCount(): FAIL when supply is 1 \n");
    }
    //Check when it is a negative
    state->supplyCount[copper] = -1;
    if(supplyCount(copper, state) >= 0){
        printf("supplyCount(): FAIL when supply is negative \n");
    }
    else{
        printf("supplyCount(): PASS when supply is negative \n");
    }
    free(state);
}