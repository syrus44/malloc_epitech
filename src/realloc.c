/*
** realloc.c for realloc in /home/bettin_j//Documents/Malloc/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Thu Jan 31 13:57:24 2013 jordan bettin
** Last update Thu Feb  7 15:13:13 2013 mael charles
*/

#include "../include/malloc.h"

size_t	get_size(void *ptr)
{
  if (!ptr)
    return 0;
  return ((((t_block *)ptr - 1)->size_block - 1) * sizeof(t_block));

}

void	*realloc(void *ptr, size_t taille)
{
  t_block	*p;
  void		*new;
  size_t	sz;

  if (taille == 0)
    {
      free(ptr);
      return (NULL);
    }
  if (ptr == NULL)
    {
      new = malloc(taille);
      return (new);
    }
  p = get_block(ptr);
  p->used = 1;
  sz = get_size(ptr);
  new = malloc(taille);
  new = memcpy(new, ptr, MIN(sz, taille));
  free(ptr);
  return (new);
}
