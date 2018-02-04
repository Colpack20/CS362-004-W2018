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
	//int a = 3;
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

    printf ("TESTING fullDeckCount():\n");

				numPlayer = 2;
				//handCount = 5;
#if (NOISY_TEST == 1)
                //printf("Test player %d with %d treasure card(s).\n", p, handCount);
#endif*/
	printf("test 1 on number of provinces after initialize game is run\n");
                memset(&G, 23, sizeof(struct gameState));   // clear the game state
                r = initializeGame(numPlayer, k, seed, &G); // initialize a new game
                //G.handCount = handCount;                 // set the number of cards on hand
				//G.supplyCount[province] = 1;
				//printf("supply count is %d \n", G.supplyCount[duchy]);
                //memcpy(G.hand[p], coppers, sizeof(int) * handCount); // set all the cards to copper
                //int a = isGameOver(&G);
				
				//printf("a is %d\n", isGameOver(&G));
				//printf("count is %d\n", fullDeckCount(0, copper, &G));
				printf("province count %d\n", supplyCount(province, &G));
				int ptotal = supplyCount(province, &G);
				if(ptotal == 8)
					printf("passed, there are 8 provinces\n");
				else
					printf("failed, there aren't 8 provinces\n");
				
	printf("test 2 on number of curses after initialize game is run\n");	
				int ctotal = supplyCount(curse, &G);
				if(ctotal == 10)
					printf("passed, there are 10 curses\n");
				else
					printf("failed, there aren't 10 curses\n");
	printf("test 3 on number of silvers after initialize game is run\n");
				int stotal = supplyCount(silver, &G);
				if(stotal == 40)
					printf("passed, there are 40 silvers\n");
				else
					printf("failed, there aren't 40 silvers\n");
	printf("test 4 on number of coppers after initialize game is run\n");
				int coppertotal = supplyCount(copper, &G);
				if(coppertotal == 46)
					printf("passed, there are 46 coppers\n");
				else
					printf("failed, there aren't 46 coppers\n");
	printf("test 5 on number of silvers after initialize game is run and 1 extra silver is added\n");
				G.supplyCount[silver]++;
				stotal = supplyCount(silver, &G);
				if(stotal == 41)
					printf("passed, there are 41 silvers\n");
				else
					printf("failed, there aren't 41 silvers\n");		

    printf("All tests taken!\n");

    return 0;
}
