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
  int i;
  int nb;

  i = 0;
  nb = 0;
  while (str[i] > '9' || str[i] < '0')
    i++;
  while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
  {
    nb = nb * 10 + (str[i] - 48);
    i++;
  }
  return (nb);
}
