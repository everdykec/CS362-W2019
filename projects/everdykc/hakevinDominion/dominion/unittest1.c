#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <string.h>

int main(){
    //Checking the isGameOver function
    //Two cases when the game is over: Provence supply pile is empty or any three supply piles are empty
    struct gameState * state = malloc(sizeof(struct gameState));
    int i = 0;

    printf("Testing isGameOver(): \n");

    state->supplyCount[3] = 0;
    state->supplyCount[1] = 1;
    state->supplyCount[2] = 1;
    state->supplyCount[4] = 1;

    //Test when the number of provinces is 0
    if(isGameOver(state) == 1){
        printf("isGameOver(): PASS province supply pile is empty \n");
    }
    else{
        printf("isGameOver(): FAIL province supply pile is empty \n");
    }

    //Test when the number of provinces is negative
    state->supplyCount[province] = -1;
    if(isGameOver(state) == 0){
        printf("isGameOver(): FAIL province supply pile is negative \n");
    }
    if(isGameOver(state) == 1){
        printf("isGameOver(): FAIL province supply pile is negative \n");
    }
    else{
        printf("isGameOver(): PASS province supply pile is negative \n");
    }


    //Set all supply piles equal to zero except province
    for (i = 0; i < 25; i++) {
        state->supplyCount[i] = 0;
    }
    state->supplyCount[province] = 1;

    if(isGameOver(state) == 1){
        printf("isGameOver(): PASS three empty supply piles \n");
    }
    else{
        printf("isGameOver(): FAIL province supply pile is positive \n");
    }

    //Make three piles non-empty including province
    for (i = 0; i < 25; i++) {
        state->supplyCount[i] = 2;
    }
    if(isGameOver(state) == 0){
        printf("isGameOver(): PASS no empty supply piles \n");
    }
    else{
        printf("isGameOver(): FAIL three empty supply piles \n");
    }
    free(state);
}