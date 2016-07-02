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
¨Ò¦pinput =5 , §Ú­Ì¥ý®³, ®³¨ì³Ì«á1­ÓªºÄ¹, ¯à¤£¯àÄ¹å((1¦¸®³1~3­Ó)
¤ÀªR:
¨C¦¸1~3­Ó
¦]¦¹"«á"§ðªº¤H¥u­n·Q¿ìªk ®³§¹ ¨Ï¥ÛÀY¼Æ¶qmod 4=0 (ex 4, 8, 12)§Y«OÃÒÀò³Ó
¥H¤W¥i¥HÂk¯Ç¥X-->®³§¹¬Omod 4=0 ¥²³Ó

©Ò¥H¹ï¥ý§ðªÌ¦Ó¨¥, ­n·Q¿ìªkÅý«á§ðªÌ¤£¯à®³§¹¬Omod 4=0
¥u¦³¤@ºØ¥i¯à, ¨º´N¬O¦Û¤v®³§¹¬Omod 4 (¼o¸Ü)

ºtºâªk: 
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

