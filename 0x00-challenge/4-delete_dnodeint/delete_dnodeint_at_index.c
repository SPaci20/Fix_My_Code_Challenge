/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (unsigned int i = 0; current && i < index; i++)
	{
		if (!current->next)
			return (-1);
		current = current->next;
	}

	if (!current)
		return (-1);

	current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);

	return (1);
}