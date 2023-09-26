#include "deck.h"

/**
 * sort_deck - Sort a deck of cards from ace to king and
 *             from spades to diamonds.
 * @deck: Pointer to the head of a deck_node_t doubly-linked list.
 */
void sort_deck(deck_node_t **deck)
{
	if (deck == NULL || *deck == NULL || (*deck)->next == NULL)
	{
		return;
	}

	insertion_deck_kind(deck);
	insertion_deck_value(deck);
}

/**
 * _strcmp - Compares two strings.
 * @string1: First string to be compared.
 * @string2: Second string to be compared.
 * Return: Positive byte difference if string1 > string2
 *         0 if string1 == string2
 *         Negative byte difference if string1 < string2
 */
int _strcmp(const char *string1, const char *string2)
{
	while (*string1 && *string2 && *string1 == *string2)
	{
		string1++;
		string2++;
	}

	if (*string1 != *string2)
	{
		return (*string1 - *string2);
	}

	return (0);
}

/**
 * get_value - Get numerical value of a card.
 * @card: Pointer to a deck_node_t card.
 * Return: Numerical value of the card.
 */
char get_value(deck_node_t *card)
{
	if (_strcmp(card->card->value, "Ace") == 0)
		return (0);
	if (_strcmp(card->card->value, "1") == 0)
		return (1);
	if (_strcmp(card->card->value, "2") == 0)
		return (2);
	if (_strcmp(card->card->value, "3") == 0)
		return (3);
	if (_strcmp(card->card->value, "4") == 0)
		return (4);
	if (_strcmp(card->card->value, "5") == 0)
		return (5);
	if (_strcmp(card->card->value, "6") == 0)
		return (6);
	if (_strcmp(card->card->value, "7") == 0)
		return (7);
	if (_strcmp(card->card->value, "8") == 0)
		return (8);
	if (_strcmp(card->card->value, "9") == 0)
		return (9);
	if (_strcmp(card->card->value, "10") == 0)
		return (10);
	if (_strcmp(card->card->value, "Jack") == 0)
		return (11);
	if (_strcmp(card->card->value, "Queen") == 0)
		return (12);

	return (13);
}

/**
 * insertion_deck_kind - Sort a deck of cards from spades to diamonds.
 * @deck: Pointer to head of a deck_node_t doubly-linked list.
 */
void insertion_deck_kind(deck_node_t **deck)
{
	deck_node_t *iteration, *insert, *temp;

	for (iteration = (*deck)->next; iteration != NULL; iteration = temp)
	{
		temp = iteration->next;
		insert = iteration->prev;
		while (insert != NULL && insert->card->kind > iteration->card->kind)
		{
			insert->next = iteration->next;
			if (iteration->next != NULL)
			{
				iteration->next->prev = insert;
			}
			iteration->prev = insert->prev;
			iteration->next = insert;
			if (insert->prev != NULL)
			{
				insert->prev->next = iteration;
			}
			else
			{
				*deck = iteration;
			}
			insert->prev = iteration;
			insert = iteration->prev;
		}
	}
}

/**
 * insertion_deck_value - Sort deck of cards sorted from
 *                             spades to diamonds from ace to king.
 * @deck: Pointer to the head of a deck_node_t doubly-linked list.
 */
void insertion_deck_value(deck_node_t **deck)
{
	deck_node_t *iteration, *insert, *temp;

	for (iteration = (*deck)->next; iteration != NULL; iteration = temp)
	{
		temp = iteration->next;
		insert = iteration->prev;
		while (insert != NULL &&
		       insert->card->kind == iteration->card->kind &&
		       get_value(insert) > get_value(iteration))
		{
			insert->next = iteration->next;
			if (iteration->next != NULL)
			{
				iteration->next->prev = insert;
			}
			iteration->prev = insert->prev;
			iteration->next = insert;
			if (insert->prev != NULL)
			{
				insert->prev->next = iteration;
			}
			else
			{
				*deck = iteration;
			}
			insert->prev = iteration;
			insert = iteration->prev;
		}
	}
}
