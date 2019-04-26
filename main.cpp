#include <stdio.h>
#include "deck.h"

int main(){
	deck a;
	a.PrintDeck();
	printf("%d", a.getFigure(1,4));
}