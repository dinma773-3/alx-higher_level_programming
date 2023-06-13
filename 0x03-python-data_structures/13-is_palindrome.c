#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list
 * is a palindrome
 * @head: pointer to head of list
 *
 * Return: 0 if it is not a palindrome,
 *        1 if it is a palndrome
 */
int is_palindrome(listint_t **head)
{
listint_t *slow, *fast, *prev_slow;
listint_t *scn_half, *middle;
int isp;

slow = fast = prev_slow = *head;
middle = NULL;
isp = 1;

if (*head != NULL && (*head)->next != NULL)
{
while (fast != NULL && fast->next != NULL)
{
fast = fast->next->next;
prev_slow = slow;
slow = slow->next;
}
if (fast != NULL)
{
middle = slow;
slow = slow->next;
}
scn_half = slow;
prev_slow->next = NULL;
reverse(&scn_half);
isp = compare(*head, scn_half);

if (middle != NULL)
{
prev_slow->next = middle;
middle->next = scn_half;
}
else
{
prev_slow->next = scn_half;
}
}
return (isp);
}
