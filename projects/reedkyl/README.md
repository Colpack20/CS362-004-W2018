Compile unittests with makefile:<br/><br/>
These tests all follow this template with testUpdateCoins replaced with each function's corresponding name. <br/><br/>
testUpdateCoins: testUpdateCoins.c dominion.o rngs.o<br/>
      gcc -o testUpdateCoins -g  testUpdateCoins.c dominion.o rngs.o $(CFLAGS)<br/><br/>
In order the unit tests are: getCost(), isGameOver(), fullDeckCount(), and supplyCount() <br/>
In order the card tests are: smithy, adventurer, village, and council room<br/><br/>

Compile all: <br/>
make unittestresults.out<br/>

Run all:<br/>
./unittestresults.out<br/>

