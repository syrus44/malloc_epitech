/*
** find_prev.c for find_prev in /home/bettin_j//Documents/Projets/Malloc
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Tue Jan 31 18:08:46 2012 jordan bettin
** Last update Sat Feb  4 01:04:17 2012 maxime jouannin
*/

#include "../include/malloc.h"

t_block		*find_prev(t_block *prev)
{
  t_block	*tmp;

  tmp = gl_malloc.b_ptr;
  if (tmp == NULL || tmp > prev)
    return (NULL);
  while (tmp->next != NULL && tmp->next <= prev)
    tmp = tmp->next;
  return (tmp);
}
