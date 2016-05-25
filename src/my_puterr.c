/*
** my_puterr.c for my_puterr in /home/roux_l/rendu/fridge
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 24 18:32:11 2016 Guillaume Roux
** Last update  Tue May 24 18:32:11 2016 Guillaume Roux
*/

#include "../include/my.h"

void  my_putchar(char c)
{
  write (1, &c, 1);
}

void  my_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    my_putchar(str[i]);
    i++;
  }
}

void  err(char c)
{
  write (2, &c, 1);
}

void  my_puterr(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    err(str[i]);
    i++;
  }
}