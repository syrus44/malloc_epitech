/*
** copy_block.c for copy_block in /home/charle_b//Desktop/System_unix/malloc/Malloc
** 
** Made by mael charles
** Login   <charle_b@epitech.net>
** 
** Started on  Wed Feb  6 14:39:32 2013 mael charles
** Last update Fri Feb  8 17:11:03 2013 jordan bettin
*/

#include "../include/malloc.h"

t_block	*copy_block(t_block *dest, t_block *src)
{
  if (src != NULL)
    {
      dest->ptr = src->ptr;
      dest->size_block = src->size_block;
      dest->used = src->used;
      dest->next = src->next;
    }
  return (dest);
}
