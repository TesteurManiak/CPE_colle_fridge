/*
** my_strcmp.c for my_strcmp in /home/roux_l/rendu/fridge/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 24 20:00:12 2016 Guillaume Roux
** Last update  Tue May 24 20:00:12 2016 Guillaume Roux
*/

#include "../include/my.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	j;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    i++;
  j = s1[i] - s2[i];
  return (j);
}
