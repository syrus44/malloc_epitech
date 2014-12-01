/*
** merge_prev_current.c for merge_prev_current in /home/bettin_j//Documents/Projets/Malloc
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Tue Jan 31 18:04:03 2012 jordan bettin
** Last update Fri Feb  3 15:28:28 2012 maxime jouannin
*/

#include "../include/malloc.h"

t_block		*merge_prev_current(t_block *prev, t_block *current)
{
  if (prev == current || prev == NULL)
    gl_malloc.b_ptr = current->next;
  else
    prev->next = current->next;
  return (current);
}
