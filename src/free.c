/*
** free.c for free in /home/bettin_j//Documents/Malloc/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Thu Jan 31 13:57:46 2013 jordan bettin
** Last update Fri Feb  8 17:13:51 2013 jordan bettin
*/

#include "../include/malloc.h"

void	free(void *ptr)
{
  t_block	*cur;
  size_t	taille_block;

  if (ptr != NULL)
    {
      cur = get_block(ptr);
      if (cur->ptr == ptr)
	{
	  cur->ptr = NULL;
	  cur->size_block = 0;
	  cur->used = 1;
	  taille_block = 0;
	  add_block(cur->ptr, taille_block);
	}
      cur = cur->next;
    }
}
