/*
** fridge.c for fridge in /home/roux_l/rendu/fridge/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 24 18:44:23 2016 Guillaume Roux
** Last update  Tue May 24 18:44:23 2016 Guillaume Roux
*/

#include "../include/my.h"

void  addition(char *name, int nb, t_fridge *prog)
{
  if (my_strcmp(name, "tomato") == 0)
    prog->tomato = prog->tomato + nb;
  else if (my_strcmp(name, "dough") == 0)
    prog->dough = prog->dough + nb;
  else if (my_strcmp(name, "ognons") == 0)
    prog->ognons = prog->ognons + nb;
  else if (my_strcmp(name, "pasta") == 0)
    prog->pasta = prog->pasta + nb;
  else if (my_strcmp(name, "olive") == 0)
    prog->olive = prog->olive + nb;
  else if (my_strcmp(name, "pepper") == 0)
    prog->pepper = prog->pepper + nb;
  else if (my_strcmp(name, "ham") == 0)
    prog->ham = prog->ham + nb;
  else if (my_strcmp(name, "cheese") == 0)
    prog->cheese = prog->cheese + nb;

}

int  add_fridge(char *command, t_fridge *prog)
{
  char  **tab;

  tab = my_str_to_wordtab(command);
  if (tab[1] == NULL || tab[2] == NULL)
  {
    my_puterr("Error : you must use valid number\n");
    return (-1);
  }
  if (check_elem(tab[1]) == 0 || check_char(tab[2]) == 0)
  {
    if (my_getnbr(tab[2]) <= 0)
    {
      my_puterr("Error : you must use valid number\n");
      return (-1);
    }
    addition(tab[1], my_getnbr(tab[2]), prog);
  }
}

void  disp_fridge(t_fridge *prog)
{
  my_putstr("tomato = ");
  my_put_nbr(prog->tomato);
  my_putstr("\ndough = ");
  my_put_nbr(prog->dough);
  my_putstr("\nognons = ");
  my_put_nbr(prog->ognons);
  my_putstr("\npasta = ");
  my_put_nbr(prog->pasta);
  my_putstr("\nolive = ");
  my_put_nbr(prog->olive);
  my_putstr("\npepper = ");
  my_put_nbr(prog->pepper);
  my_putstr("\nham = ");
  my_put_nbr(prog->ham);
  my_putstr("\ncheese = ");
  my_put_nbr(prog->cheese);
  my_putchar('\n');
}