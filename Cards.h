#pragma once

enum SUIT {
	CLUB,
	DIAMOND,
	HEART,
	SPADE,
	SUIT_CEILING
};

enum RANK {
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN,
	JACK,
	QUEEN,
	KING,
	ACE,
	RANK_CEILING
};

struct CARD {
	RANK rank;
	SUIT suit;
};

void swapCard(CARD &card1, CARD &card2);

void shuffleDeck(const std::array<CARD, 52> &cardArray);

void printCard(const CARD &card);

void printDeck(const std::array<CARD, 52> &cardArray);