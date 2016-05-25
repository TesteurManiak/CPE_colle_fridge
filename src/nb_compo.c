/*
** nb_compo.c for nb_compo in /home/roux_l/rendu/fridge/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 24 20:15:23 2016 Guillaume Roux
** Last update  Tue May 24 20:15:23 2016 Guillaume Roux
*/

#include "../include/my.h"

int  nb_compo_pizza(t_fridge *prog)
{
  if (prog->tomato < 5 || prog->dough < 1 || prog->ognons < 3 ||
      prog->olive < 8 || prog->pepper < 8 || prog->ham < 4 ||
      prog->cheese < 3)
  {
    my_puterr("Error : not enough components\n");
    return (-1);
  }
  else
  {
    prog->tomato = prog->tomato - 5;
    prog->dough = prog->dough - 1;
    prog->ognons = prog->ognons - 3;
    prog->olive = prog->olive - 8;
    prog->pepper = prog->pepper - 8;
    prog->ham = prog->ham - 4;
    prog->cheese = prog->cheese - 3;
  }
  return (0);
}

int  nb_compo_pasta(t_fridge *prog)
{
  if (prog->tomato < 5 || prog->pasta < 2 || prog->olive < 6 ||
      prog->ham < 4 || prog->cheese < 3)
  {
    my_puterr("Error : not enough components\n");
    return (-1);
  }
  else
  {
    prog->tomato = prog->tomato - 5;
    prog->pasta = prog->pasta - 2;
    prog->olive = prog->olive - 6;
    prog->ham = prog->ham - 4;
    prog->cheese = prog->cheese - 3;
  }
  return (0);
}