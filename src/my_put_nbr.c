/*
** my_put_nbr.c for my_put_nbr in /home/roux_l/rendu/fridge/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 24 19:07:00 2016 Guillaume Roux
** Last update  Tue May 24 19:07:00 2016 Guillaume Roux
*/

#include "../include/my.h"

void  my_put_nbr(int nb)
{
  if (nb <= 9)
    my_putchar(nb + 48);
  else
  {
    my_put_nbr(nb / 10);
    my_put_nbr(nb % 10);
  }
}