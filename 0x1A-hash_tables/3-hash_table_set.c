#include "hash_table.h"

/**
 * create_node - create a node
 * @key: const char - key
 * @value: const char - value
 *
 * Description: This function creates a node to
 * be added to the hash table
 * Return: A new node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	if (node->key == NULL)
		return (NULL);

	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		return (NULL);
	}
	node->next = NULL;

	return (node);
}

