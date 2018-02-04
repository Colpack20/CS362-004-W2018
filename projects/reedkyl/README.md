Compile unittests with makefile:<br/><br/>
These tests all follow this template with testUpdateCoins replaced with each function's corresponding name. <br/><br/>
testUpdateCoins: testUpdateCoins.c dominion.o rngs.o<br/>
      gcc -o testUpdateCoins -g  testUpdateCoins.c dominion.o rngs.o $(CFLAGS)<br/><br/>
In order the unit tests are: getCost(), isGameOver(), fullDeckCount(), and supplyCount() <br/>
In order the card tests are: smithy, adventurer, village, and council room<br/><br/>

Compile:<br/>
make unittest1<br/>
make unittest2<br/>
make unittest3<br/>
make unittest4<br/>

make cardtest1<br/>
make cardtest2<br/>
make cardtest3<br/>
make cardtest4<br/>

Run:<br/>
./unittest1 <br/>
./unittest2<br/>
./unittest3<br/>
./unittest4<br/>

./cardtest1 <br/>
./cardtest2<br/>
./cardtest3<br/>
./cardtest4<br/>

Compile all: <br/>
make unittestresults.out<br/>

Run all:<br/>
./unittestresults.out<br/>

