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
	
	
	//for (p = 0; p < numPlayer; p++)
    //{
      //  for (handCount = 1; handCount <= maxHandCount; handCount++)
        //{
            //for (bonus = 0; bonus <= maxBonus; bonus++)
            //{
				numPlayer = 2;
				//handCount = 5;
#if (NOISY_TEST == 1)
                //printf("Test player %d with %d treasure card(s).\n", p, handCount);
#endif*/
	printf("test 1 on player 1 after initialize game is run\n");
                memset(&G, 23, sizeof(struct gameState));   // clear the game state
                r = initializeGame(numPlayer, k, seed, &G); // initialize a new game
                //G.handCount = handCount;                 // set the number of cards on hand
				//G.supplyCount[province] = 1;
				//printf("supply count is %d \n", G.supplyCount[duchy]);
                //memcpy(G.hand[p], coppers, sizeof(int) * handCount); // set all the cards to copper
                //int a = isGameOver(&G);
				
				//printf("a is %d\n", isGameOver(&G));
				//printf("count is %d\n", fullDeckCount(0, copper, &G));
				int h, total;
				total = 0;
				for (h = 0; h < 27; h++){
					//printf("card %d is %d\n", h, fullDeckCount(0, h, &G));
					total += fullDeckCount(0, h, &G);
				}
				printf("total is %d\n", total);
				printf("deck count is %d\n", G.deckCount[0]);
				if(total == G.deckCount[0])
					printf("passed\n");
				else
					printf("failed\n");
	printf("test 2 on player 2 after initialize game is run\n");
				//int h, total;
				total = 0;
				for (h = 0; h < 27; h++){
					//printf("card %d is %d\n", h, fullDeckCount(1, h, &G));
					total += fullDeckCount(1, h, &G);
				}
				printf("total is %d\n", total);
				printf("deck count is %d\n", G.deckCount[1]);
				if(total == G.deckCount[1])
					printf("passed\n");
				else
					printf("failed\n");
	printf("test 3 on player 2 after initialize game is run for number of coppers\n");
				int coppertotal = fullDeckCount(1, copper, &G);
				if(coppertotal == 7)
					printf("passed, there are 7 coppers total\n");
				else
					printf("failed, there aren't 7 coppers total\n");
	printf("test 4 on player 1 after initialize game is run for number of estates\n");
				int estatetotal = fullDeckCount(0, estate, &G);
				if(estatetotal == 3)
					printf("passed, there are 3 estates total\n");
				else
					printf("failed, there aren't 3 estates total\n");			
	

				
/*
#if (NOISY_TEST == 1)
                printf("G.coins = %d, expected = %d\n", G.coins, handCount * 1 + bonus);
#endif
                assert(G.coins == handCount * 1 + bonus); // check if the number of coins is correct

                memcpy(G.hand[p], silvers, sizeof(int) * handCount); // set all the cards to silver
                updateCoins(p, &G, bonus);
#if (NOISY_TEST == 1)
                printf("G.coins = %d, expected = %d\n", G.coins, handCount * 2 + bonus);
#endif
                assert(G.coins == handCount * 2 + bonus); // check if the number of coins is correct

                memcpy(G.hand[p], golds, sizeof(int) * handCount); // set all the cards to gold
                updateCoins(p, &G, bonus);
#if (NOISY_TEST == 1)
                printf("G.coins = %d, expected = %d\n", G.coins, handCount * 3 + bonus);
#endif
                assert(G.coins == handCount * 3 + bonus); // check if the number of coins is correct*/
            //}
        //}
    //}

    printf("All tests taken!\n");

    return 0;
}
