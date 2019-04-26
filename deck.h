#ifndef DECK_H
#define DECK_H

class deck{
	public:
		/*vars*/
		int *d = new int[64];
		/*funcs*/
		deck();
		void PrintDeck();
		int getFigure (int line, int col);
		
		
		
};
#endif
