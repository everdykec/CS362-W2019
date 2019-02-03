#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <string.h>

int main(){
    //Checking that the getCost function is tested properly
    //This required a different kind of legwork. I needed to check that the values
    //returned were the same I found online. http://wiki.dominionstrategy.com/
    //Additional tests added at the bottom

    //Test the curse card
    if(getCost(curse) == 0){
        printf("getCost(): PASS when using curse card \n");
    }
    else{
        printf("getCost(): FAIL when using curse card \n");
    }

    //Test the estate card
    if(getCost(estate) == 2){
        printf("getCost(): PASS when using estate card \n");
    }
    else{
        printf("getCost(): FAIL when using estate card \n");
    }

    //Test the duchy card
    if(getCost(duchy) == 5){
        printf("getCost(): PASS when using duchy card \n");
    }
    else{
        printf("getCost(): FAIL when using duchy card \n");
    }

    //Test the province card
    if(getCost(province) == 8){
        printf("getCost(): PASS when using province card \n");
    }
    else{
        printf("getCost(): FAIL when using province card \n");
    }

    //Test the copper card
    if(getCost(copper) == 0){
        printf("getCost(): PASS when using copper card \n");
    }
    else{
        printf("getCost(): FAIL when using copper card \n");
    }

    //Test the silver card
    if(getCost(silver) == 3){
        printf("getCost(): PASS when using silver card \n");
    }
    else{
        printf("getCost(): FAIL when using silver card \n");
    }

    //Test the gold card
    if(getCost(gold) == 6){
        printf("getCost(): PASS when using gold card \n");
    }
    else{
        printf("getCost(): FAIL when using gold card \n");
    }

    //Test the adventurer card
    if(getCost(adventurer) == 6){
        printf("getCost(): PASS when using adventurer card \n");
    }
    else{
        printf("getCost(): FAIL when using adventurer card \n");
    }

    //Test the council room card
    if(getCost(council_room) == 5){
        printf("getCost(): PASS when using council room card \n");
    }
    else{
        printf("getCost(): FAIL when using council card \n");
    }

    //Test the feast card
    if(getCost(feast) == 4){
        printf("getCost(): PASS when using feast card \n");
    }
    else{
        printf("getCost(): FAIL when using feast card \n");
    }

    //Test the gardens card
    if(getCost(curse) == 4){
        printf("getCost(): PASS when using gardens card \n");
    }
    else{
        printf("getCost(): FAIL when using gardens card \n");
    }

    //Test the mine card
    if(getCost(mine) == 5){
        printf("getCost(): PASS when using mine card \n");
    }
    else{
        printf("getCost(): FAIL when using mine card \n");
    }

    //Test the remodel card
    if(getCost(remodel) == 4){
        printf("getCost(): PASS when using remodel card \n");
    }
    else{
        printf("getCost(): FAIL when using remodel card \n");
    }

    //Test the smithy card
    if(getCost(smithy) == 4){
        printf("getCost(): PASS when using smithy card \n");
    }
    else{
        printf("getCost(): FAIL when using smithy card \n");
    }

    //Test the village card
    if(getCost(village) == 3){
        printf("getCost(): PASS when using village card \n");
    }
    else{
        printf("getCost(): FAIL when using village card \n");
    }

    //Test the baron card
    if(getCost(baron) == 4){
        printf("getCost(): PASS when using baron card \n");
    }
    else{
        printf("getCost(): FAIL when using baron card \n");
    }

    //Test the great hall card
    if(getCost(great_hall) == 3){
        printf("getCost(): PASS when using great hall card \n");
    }
    else{
        printf("getCost(): FAIL when using great hall card \n");
    }

    //Test the minion card
    if(getCost(minion) == 5){
        printf("getCost(): PASS when using minion card \n");
    }
    else{
        printf("getCost(): FAIL when using minion card \n");
    }

    //Test the steward card
    if(getCost(steward) == 3){
        printf("getCost(): PASS when using steward card \n");
    }
    else{
        printf("getCost(): FAIL when using steward card \n");
    }

    //Test the tribute card
    if(getCost(tribute) == 5){
        printf("getCost(): PASS when using tribute card \n");
    }
    else{
        printf("getCost(): FAIL when using tribute card \n");
    }

    //Test the ambassador card
    if(getCost(ambassador) == 3){
        printf("getCost(): PASS when using ambassador card \n");
    }
    else{
        printf("getCost(): FAIL when using ambassador card \n");
    }

    //Test the cutpurse card
    if(getCost(cutpurse) == 4){
        printf("getCost(): PASS when using cutpurse card \n");
    }
    else{
        printf("getCost(): FAIL when using cutpurse card \n");
    }

    //Test the embargo card
    if(getCost(embargo) == 2){
        printf("getCost(): PASS when using embargo card \n");
    }
    else{
        printf("getCost(): FAIL when using embargo card \n");
    }

    //Test the outpost card
    if(getCost(outpost) == 5){
        printf("getCost(): PASS when using outpost card \n");
    }
    else{
        printf("getCost(): FAIL when using outpost card \n");
    }

    //Test the salvager card
    if(getCost(salvager) == 4){
        printf("getCost(): PASS when using salvager card \n");
    }
    else{
        printf("getCost(): FAIL when using salvager card \n");
    }

    //Test the sea hag card
    if(getCost(sea_hag) == 4){
        printf("getCost(): PASS when using sea hag card \n");
    }
    else{
        printf("getCost(): FAIL when using sea hag card \n");
    }

    //Test the treasure map card
    if(getCost(treasure_map) == 4){
        printf("getCost(): PASS when using treasure map card \n");
    }
    else{
        printf("getCost(): FAIL when using treasure map card \n");
    }

    //Test a card that isn't designated
    if(getCost(58734) == -1){
        printf("getCost(): PASS random number \n");
    }
    else{
        printf("getCost(): FAIL random number \n");
    }

    //Test a negative number
    if(getCost(-12) == -1){
        printf("getCost(): PASS when using negative number \n");
    }
    else{
        printf("getCost(): FAIL when using negative number \n");
    }
}