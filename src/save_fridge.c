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
    buffer = my_strcat(buffer, "\n");
    buffer = my_strcat(buffer, tab[i]);
    i++;
  }
  printf("%s\n", buffer);
  write_in_fd(fd, buffer);
}

void  fill_tab(char **tab)
{
  tab[0] = "tomato = ";
  tab[1] = "dough = ";
  tab[2] = "ognons = ";
  tab[3] = "pasta = ";
  tab[4] = "olive = ";
  tab[5] = "pepper = ";
  tab[6] = "ham = ";
  tab[7] = "cheese = ";
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

  fd = open(".save", 'w', S_IRWXU);
  if (fd == -1)
  {
    my_puterr("Error : can't open\n");
    return ;
  }
  tab = make_tab();
  fill_tab(tab);
  write_in(fd, tab);
  close(fd);
}