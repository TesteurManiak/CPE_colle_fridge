/*
** char_to_int.c for char_to_int in /run/media/roux_l/DFFA-55B4
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Wed May 25 17:14:23 2016 Guillaume Roux
** Last update  Wed May 25 17:14:23 2016 Guillaume Roux
*/

#include "../include/my.h"

int             my_intlen(int nb)
{
  int           i;

  i = 0;
  while (nb > 0)
    {
      nb = nb / 10;
      i++;
    }
  return (i);
}

char            *int_to_str(int x)
{
  char          *str;
  int           u;
  int           i;

  i = my_intlen(x);
  u = x;
  str = malloc(sizeof(char) * i);
  str[i - 1] = '\0';
  while (i != 0)
    {
      if (u < 10)
        {
          str[i - 1] = u + 48;
          i--;
        }
      else
        {
          str[i - 1] = u % 10 + 48;
          i--;
        }
      u = u / 10;
    }
  return (str);
}
