Compile unittests with makefile:<br/><br/>
These tests all follow this template with testUpdateCoins replaced with each function's corresponding name. <br/><br/>
testUpdateCoins: testUpdateCoins.c dominion.o rngs.o<br/>
      gcc -o testUpdateCoins -g  testUpdateCoins.c dominion.o rngs.o $(CFLAGS)<br/><br/>
These test the functions that their titles describe: getCost(), supplyCount(), fullDeckCount(), and isGameOver()<br/><br/>

Compile:<br/>
make getcost<br/>
make supplycount<br/>
make fulldeck<br/>
make isgameover<br/>

Run:<br/>
./getcost <br/>
./supplycount<br/>
./fulldeck<br/>
./isgameover<br/>

