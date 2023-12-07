#include <stdio.h>

struct card
{
	char *face;
	char *suit;
};

int main()
{
	struct card aCard;
	struct card *aCardPtr;

	aCard.face = "Ace";
	aCard.suit = "Spades";

	aCardPtr = &aCard;

	printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit, aCardPtr->face, " of ", aCardPtr->suit, (*aCardPtr).face, " of ", (*aCardPtr).suit);
	
	return 0;
}