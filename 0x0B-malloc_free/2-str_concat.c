#include <stdio.h>
#include <stdlib.h>

/**
 * str_conat - concatenates string
 * @s1: first string
 * @s2: second string
 * Return: char*
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len = 0;
	char *ptr;

	if (s1 == NULL)
	{
	  s1 = "";
	}
	if (s2 == NULL)
	{
	  s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
	  len++;
	}
	
	for (i = 0; s2[i]; i++)
	{
	  len++;
	}
	
	ptr = malloc((len + 1) * sizeof(char));
	
	if (ptr == NULL)
	{
	  return (NULL);
	}
	
	else
	{
	  for (i = 0; s1[i]; i++)
	  {
	    ptr[i] = s1[i];
	  }
	  
	  for (j = 0; s2[j]; j++, i++)
	  {
	    ptr[i] = s2[j];
	  }
	  
	  ptr[len] = '\0';
	  return (ptr);
	}
}
