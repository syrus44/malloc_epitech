/*
** add_block.c for add_block in /home/bettin_j//Documents/Malloc/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Thu Jan 31 19:31:16 2013 jordan bettin
** Last update Fri Feb  8 09:54:54 2013 mael charles
*/

#include "../include/malloc.h"

t_block		*add_block(t_block *current, size_t size)
{
  t_block	*tmp;

  tmp = xsbrk(sizeof(t_block) + size);
  if (current != NULL)
    {
      tmp->ptr = current->ptr;
      tmp->size_block = current->size_block;
      tmp->used = 1;
      tmp->next = NULL;
      tmp->prev = tmp;
    }
  return tmp;
}
