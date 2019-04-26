#include <stdio.h>
#include "deck.h"

deck::deck(){
	int i;
	for (i=16 ;i<56; i++){
		d[i]=0;
	}
	// soldiers
	for (i=8 ;i<16; i++){
		d[i]=1;
	}
	for (i=48 ;i<56; i++){
		d[i]=-1;
	}
	// Ladya
	d[0]=4; d[7]=4; d[56]=-4; d[63]=-4;
	// Knight
	d[1]=2; d[6]=2; d[62]=-2; d[57]=-2;
	// Oficer
	d[2]=3; d[5]=3; d[58]=-3;  d[61]=-3;
	// King
	d[3]=6; d[59]=-6;
	// Ferz
	d[4]=5; d[60]=-5;
	}
void deck::PrintDeck(){
	
	int i;
	int k = 0;
	for(i=56; i > -1 ; i++){
		
		if(d[i] >= 0){
			printf(" %d", d[i]);
			k++;		
			//printf("%d",k);
		}		
		else{
			printf("%d", d[i]);
			k++;
			//printf("%d",k);		
		}
		if(k==8){
			printf("\n");
			i=i-16;
			k=0;
		}
	}
}
int deck::getFigure(int line, int col){

	int i;
	i = col - 1 + (line - 1) * 8;
	return d[i];
}