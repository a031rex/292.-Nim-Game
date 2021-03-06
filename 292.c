#include "stdio.h"
#include "stdlib.h"

typedef unsigned int bool;
#define TRUE 1
#define FALSE 0


/*
You are playing the following Nim Game with your friend: There is a heap of stones on the table, 
each time one of you take turns to remove 1 to 3 stones. The one who removes the last stone will 
be the winner. You will take the first turn to remove the stones.

Both of you are very clever and have optimal strategies for the game. Write a function to determine 
whether you can win the game given the number of stones in the heap.

For example, if there are 4 stones in the heap, then you will never win the game: no matter 1, 2, or 3 
stones you remove, the last stone will always be removed by your friend.

HINT:
If there are 5 stones in the heap, could you figure out a way to remove the stones such that you will always be the winner?

*/

/*
例如input =5 , 我們先拿, 拿到最後1個的贏, 能不能贏�((1次拿1~3個)
分析:
每次1~3個
因此"後"攻的人只要想辦法 拿完 使石頭數量mod 4=0 (ex 4, 8, 12)即保證獲勝
以上可以歸納出-->拿完是mod 4=0 必勝

所以對先攻者而言, 要想辦法讓後攻者不能拿完是mod 4=0
只有一種可能, 那就是自己拿完是mod 4 (廢話)

演算法: 
(n-1)%4 =0
(n-2)%4 =0
(n-3)%4 =0
*/

bool canWinNim(int n) {
	if((((n-1) % 4)== 0) || (((n-2) % 4)== 0) || (((n-3) % 4)== 0))
		return 1;
    else
    	return 0;
}

void main()
{
	int i =0;
	for(i=0;i<10;i++)
		printf("i = %d, %d \n",i,canWinNim(i));	
}

