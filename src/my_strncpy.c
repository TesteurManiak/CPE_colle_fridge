/*
** my_strcpy.c for my_strncpy in /home/roux_l/rendu/fridge/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 24 19:19:25 2016 Guillaume Roux
** Last update  Tue May 24 19:19:25 2016 Guillaume Roux
*/

#include "../include/my.h"

char      *my_strncpy(char *dest, char *src, int n)
{
  int i;

  i = 0;
  while (n > 0 && *(src + i))
    {
      *(dest + i) = *(src + i);
      ++i;
      --n;
    }
  if (n > 0)
    *(dest + i) = '\0';
  return (dest);
}