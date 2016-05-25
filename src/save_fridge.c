/*
** save_fridge.c for save_fridge in /home/roux_l/rendu/fridge/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 24 20:31:43 2016 Guillaume Roux
** Last update  Tue May 24 20:31:43 2016 Guillaume Roux
*/

#include <stdio.h>
#include "../include/my.h"

void  write_in(int fd, char **tab)
{
  int i;
  char  *buffer;

  i = 1;
  buffer = my_strcat("", tab[0]);
  while (i < 8)
  {
    buffer = my_strcat(buffer, tab[i]);
    i++;
  }
  write_in_fd(fd, buffer);
}

void  fill_tab(char **tab, t_fridge *prog)
{
  tab[0] = "tomato = \n";
  //add_value(tab[0], prog->tomato);
  tab[1] = "dough = \n";
  //add_value(tab[1], prog->dough);
  tab[2] = "ognons = \n";
  tab[3] = "pasta = \n";
  tab[4] = "olive = \n";
  tab[5] = "pepper = \n";
  tab[6] = "ham = \n";
  tab[7] = "cheese = \n";
}

char  **make_tab()
{
  int   i;
  char  **tab;

  i = 0;
  tab = malloc(sizeof(char *) * 8);
  while (i < 8)
  {
    tab[i] = malloc(sizeof(char) * 10000);
    i++;
  }
  return (tab);
}

void  save_fridge(t_fridge *prog)
{
  int fd;
  char  **tab;

  fd = open(".save", O_CREAT | O_WRONLY, 0644);
  if (fd == -1)
  {
    my_puterr("Error : can't open\n");
    return ;
  }
  tab = make_tab();
  fill_tab(tab, prog);
  write_in(fd, tab);
  close(fd);
}