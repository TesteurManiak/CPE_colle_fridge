/*
** add_value.c for add_value in /home/roux_l/GitHub/CPE_colle_fridge/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Wed May 25 16:21:56 2016 Guillaume Roux
** Last update  Wed May 25 16:21:56 2016 Guillaume Roux
*/

#include "../include/my.h"

void  add_value(char *text, int digit)
{
  my_strcat(text, int_to_str(digit));
  my_strcat(text, "\n");
}