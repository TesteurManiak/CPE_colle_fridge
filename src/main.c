/*
** main.c for main in /home/roux_l/rendu/fridge/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 24 18:20:17 2016 Guillaume Roux
** Last update  Tue May 24 18:20:17 2016 Guillaume Roux
*/

#include "../include/my.h"

int  fridge()
{
  int   fd;
  char  *command;
  t_fridge  *prog;

  fd = open(".save", O_RDONLY);
  if (fd == -1)
    init_prog(&prog);
  else
  {
    init_prog(&prog);
    load_fridge(prog, fd);
  }
  close (fd);
  while (prog->kill == 0)
  {
    command = get_next_line(0);
    if (command == NULL)
      return (-1);
    check_cmd(command, prog);
  }
}

int main()
{
  fridge();
  return (0);
}