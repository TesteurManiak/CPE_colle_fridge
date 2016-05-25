/*
** my_strncmp.c for my_strncmp in /home/roux_l/rendu/fridge/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 24 18:24:55 2016 Guillaume Roux
** Last update  Tue May 24 18:24:55 2016 Guillaume Roux
*/

#include "../include/my.h"

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  int	j;

  i = 0;
  if (s1 == NULL || s2 == NULL)
    return (1);
  while (s1[i] == s2[i] && s1[i] && s2[i])
    i++;
  if (n - 1 >= i)
    j = s1[i] - s2[i];
  else
    return (0);
  return (j);
}
