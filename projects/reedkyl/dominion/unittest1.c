/* -----------------------------------------------------------------------
 * Demonstration of how to write unit tests for dominion-base
 * Include the following lines in your makefile:
 *
 * testUpdateCoins: testUpdateCoins.c dominion.o rngs.o
 *      gcc -o testUpdateCoins -g  testUpdateCoins.c dominion.o rngs.o $(CFLAGS)
 * -----------------------------------------------------------------------
 */

#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

// set NOISY_TEST to 0 to remove printfs from output
#define NOISY_TEST 1

int main() {
    int i;
    int seed = 1000;
    int numPlayer = 2;
    int maxBonus = 10;
    int p, r, handCount;
    int bonus;
    int k[10] = {adventurer, council_room, feast, gardens, mine
               , remodel, smithy, village, baron, great_hall};
    struct gameState G;
    int maxHandCount = 5;
    // arrays of all coppers, silvers, and golds
    int coppers[MAX_HAND];
    int silvers[MAX_HAND];
    int golds[MAX_HAND];
    for (i = 0; i < MAX_HAND; i++)
    {
        coppers[i] = copper;
        silvers[i] = silver;
        golds[i] = gold;
    }

    printf ("TESTING getCost():\n");
	char bec[5] = "sell";
	char grif = "happy";
	//memset(&G, 23, sizeof(struct gameState));   // clear the game state
    //r = initializeGame(numPlayer, k, seed, &G); // initialize a new game
    //G.handCount[p] = handCount;                 // set the number of cards on hand
    //memcpy(G.hand[p], smithy, sizeof(int) * handCount); // set all the cards to copper
    int x = getCost(smithy);
	int y = getCost(smithy + 1);
	int z = getCost(200);
	int xx = getCost(27);
	int yy = getCost("Hi");
	int zz = getCost(bec);
	int aa = getCost(grif);
	//int zzz = getCost(1, 2);
	//int z = smithy;
	//printf("z is %d\n", z);
	if (x == 4)
		printf("Test 1 passed, testing smithy returned 4\n");
	else
		printf("Test 1 failed, testing smithy didn't return 4\n");
	
	if(y == 3)
		printf("Test 2 passed, testing smithy + 1 returned cost of village\n");
	else
		printf("Test 2 failed, testing smithy + 1 didn't return cost of village\n");
	
	if(z == -1)
		printf("Test 3 passed, testing number outside of 0-26 returns -1\n");
	else
		printf("Test 3 failed, testing number outside of 0-26 doesn't return -1\n");
	
	if(xx == -1)
		printf("Test 4 passed, testing number outside of 0-26 returns -1\n");
	else
		printf("Test 4 failed, testing number outside of 0-26 doesn't return -1\n");
	
	if(yy == -1)
		printf("Test 5 passed, testing unusual input ('Hi') returns -1\n");
	else
		printf("Test 5 failed, testing unusual input ('Hi') doesn't return -1\n");
	
	if(zz == -1)
		printf("Test 6 passed, testing unusual input (char array) returns -1\n");
	else
		printf("Test 6 failed, testing unusual input (char array) doesn't return -1\n");
	
	if(aa == -1)
		printf("Test 7 passed, testing unusual input (char variable) returns -1\n");
	else
		printf("Test 7 failed, testing unusual input (char variable) doesn't return -1\n");

    printf("All tests taken!\n");

    return 0;
}
