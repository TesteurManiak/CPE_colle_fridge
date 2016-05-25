/*
** load_fridge.c for load_fridge in /home/roux_l/GitHub/CPE_colle_fridge/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Wed May 25 12:06:29 2016 Guillaume Roux
** Last update  Wed May 25 12:06:29 2016 Guillaume Roux
*/

#include <stdio.h>
#include "../include/my.h"

void  load_fridge(t_fridge *prog, int fd)
{
  int   i;
  char  *line;

  i = 0;
  while (i < 8)
  {
    line = get_next_line(fd);
    if (line == NULL)
      return ;
    if (i == 0)
      prog->tomato = my_getnbr(line);
    else if (i == 1)
      prog->dough = my_getnbr(line);
    else if (i == 2)
      prog->ognons = my_getnbr(line);
    else if (i == 3)
      prog->pasta = my_getnbr(line);
    else if (i == 4)
      prog->olive = my_getnbr(line);
    else if (i == 5)
      prog->pepper = my_getnbr(line);
    else if (i == 6)
      prog->ham = my_getnbr(line);
    else
      prog->cheese = my_getnbr(line);
    i++;
  }
}