#include <stdio.h>
#include <stdlib.h>

/**
 * struct listp_s - singly linked list
 * @p: pointers of nodes
 * @next: points to the next node
 *
 * Description: singly linked list of pointers
 *
 *
 * (c) Cypherson
 */


typedef struct listp_s
{
	void *p;
	struct listp_s *next;
} listp_t;
