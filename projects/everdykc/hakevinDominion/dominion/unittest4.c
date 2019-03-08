#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <string.h>

int main(){
    //Testing the updateCoins() function

    struct gameState state;
    state.coins = 0;
    state.handCount[0] = 5;

    //Test with no treasure cards
    state.hand[0][0] = province;
    state.hand[0][1] = province;
    state.hand[0][2] = province;
    state.hand[0][3] = province;
    state.hand[0][4] = province;

    updateCoins(0, &state, 0);

    if(state.coins == 0){
        printf("updateCoins(): PASS no treasure cards \n");
    }
    else{
        printf("updateCoins(): FAIL no treasure cards \n");
    }

    //Test with all copper
    state.hand[0][0] = copper;
    state.hand[0][1] = copper;
    state.hand[0][2] = copper;
    state.hand[0][3] = copper;
    state.hand[0][4] = copper;


    updateCoins(0, &state, 0);
    if(state.coins == 5){
        printf("Copper: %d\n", state.coins);
        printf("updateCoins(): PASS all copper cards \n");
    }
    else{
        printf("Copper: %d\n", state.coins);
        printf("updateCoins(): FAIL all copper cards \n");
    }

    //Test with all silver
    state.hand[0][0] = silver;
    state.hand[0][1] = silver;
    state.hand[0][2] = silver;
    state.hand[0][3] = silver;
    state.hand[0][4] = silver;

    updateCoins(0, &state, 0);
    if(state.coins == 10){
        printf("Silver: %d\n", state.coins);
        printf("updateCoins(): PASS all silver cards \n");
    }
    else{
        printf("Silver: %d\n", state.coins);
        printf("updateCoins(): FAIL all silver cards \n");
    }

    //Test with all gold
    state.hand[0][0] = gold;
    state.hand[0][1] = gold;
    state.hand[0][2] = gold;
    state.hand[0][3] = gold;
    state.hand[0][4] = gold;

    updateCoins(0, &state, 0);
    if(state.coins == 15){
        printf("Gold: %d\n", state.coins);
        printf("updateCoins(): PASS all gold cards \n");
    }
    else{
        printf("Gold: %d\n", state.coins);
        printf("updateCoins(): FAIL all gold cards \n");
    }

    //Test with a mix
    state.hand[0][0] = gold;
    state.hand[0][1] = copper;
    state.hand[0][2] = copper;
    state.hand[0][3] = silver;
    state.hand[0][4] = silver;

    updateCoins(0, &state, 0);
    if(state.coins == 9){
        printf("Mix: %d\n", state.coins);
        printf("updateCoins(): PASS mixed coins: 2 copper, silver, and gold \n");
    }
    else{
        printf("Mix: %d\n", state.coins);
        printf("updateCoins(): FAIL mixed coins: 2 copper, silver, and gold \n");
    }
}