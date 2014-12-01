/*
** add_space.c for add_space in /home/bettin_j//Documents/Projets/Malloc
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Thu Feb  2 14:29:32 2012 jordan bettin
** Last update Fri Feb  3 15:29:16 2012 maxime jouannin
*/

#include "../include/malloc.h"

t_block		*add_space(t_block *prev, t_block *free)
{
  if (prev == NULL)
    {
      free->next = gl_malloc.b_ptr;
      gl_malloc.b_ptr = free;
      return (free);
    }
  else
    {
      free->next = prev->next;
      prev->next = free;
      return (prev);
    }
}
