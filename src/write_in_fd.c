/*
** write_in_fd.c for write_in_fd in /home/roux_l/rendu/fridge/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 24 21:09:12 2016 Guillaume Roux
** Last update  Tue May 24 21:09:12 2016 Guillaume Roux
*/

#include "../include/my.h"

void  write_file(int fd, char c)
{
  write (fd, &c, 1);
}

void  write_in_fd(int fd, char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    write_file(fd, str[i]);
    i++;
  }
}