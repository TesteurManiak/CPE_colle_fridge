/*
** my_strcat.c for my_strcat in /home/roux_l/rendu/fridge/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 24 21:03:18 2016 Guillaume Roux
** Last update  Tue May 24 21:03:18 2016 Guillaume Roux
*/

#include "../include/my.h"

char	*my_strcat(char *dest, char *src)
{
  char	*str;
  int	k;
  int	i;
  int	j;

  i = 0;
  j = 0;
  k = 0;
  str = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src)));
  while (src[j] != '\0')
    {
      while (dest[k] != '\0')
	{
	  str[i] = dest[k];
	  i++;
	  k++;
	}
      str[i] = src[j];
      i++;
      j++;
    }
  str[i] = '\0';
  return (str);
}
