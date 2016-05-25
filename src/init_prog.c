/*
** init_prog.c for init_prog in /home/roux_l/rendu/fridge/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 24 18:55:31 2016 Guillaume Roux
** Last update  Tue May 24 18:55:31 2016 Guillaume Roux
*/

#include "../include/my.h"

void  init_prog(t_fridge **prog)
{
  *prog = malloc(sizeof(**prog));
  (*prog)->kill = 0;
  (*prog)->tomato = D_QTE;
  (*prog)->dough = D_QTE;
  (*prog)->ognons = D_QTE;
  (*prog)->pasta = D_QTE;
  (*prog)->olive = D_QTE;
  (*prog)->pepper = D_QTE;
  (*prog)->ham = D_QTE;
  (*prog)->cheese = D_QTE;
}