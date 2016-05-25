/*
** my_getnbr.c for my_get_nbr in /home/roux_l/rendu/fridge/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 24 19:28:05 2016 Guillaume Roux
** Last update  Tue May 24 19:28:05 2016 Guillaume Roux
*/

#include "../include/my.h"

int     my_getnbr(char *str)
{
  int   i;
  int   j;
  int   nb;

  i = 0;
  j = 1;
  nb = 0;
  while ((str[i] >= 48) && (str[i] <= 57) && (str[i] != '\0'))
    {
      nb = nb * 10;
      nb = nb + (str[i] - 48);
      i++;
    }
  nb = nb * j;
  i = 0;
  while ((str[i] < '0' || str[i] > '9') && str[i] != '\0')
  {
    if (str[i] == '-')
      return (-nb);
    i++;
  }
  return (nb);
}
