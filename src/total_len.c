/*
** total_len.c for total_len in /home/roux_l/rendu/fridge/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 24 20:58:55 2016 Guillaume Roux
** Last update  Tue May 24 20:58:55 2016 Guillaume Roux
*/

int my_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

int total_len(char **tab)
{
  int len;
  int i;

  len = 0;
  i = 0;
  while (tab[i] != '\0')
  {
    len = len + my_strlen(tab[i]);
    i++;
  }
  return (len);
}