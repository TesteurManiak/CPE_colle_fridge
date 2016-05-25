/*
** free.c for free in /home/roux_l/rendu/fridge/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 24 20:52:10 2016 Guillaume Roux
** Last update  Tue May 24 20:52:10 2016 Guillaume Roux
*/

#include "../include/my.h"

void  free_tab(char **tab)
{
  int i;

  i = 0;
  while (tab[i] != '\0')
  {
    free(tab[i]);
    i++;
  }
  free(tab);
}