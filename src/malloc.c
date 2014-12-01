/*
** malloc.c for malloc in /home/bettin_j//Documents/Malloc/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Thu Jan 31 13:56:53 2013 jordan bettin
** Last update Sat Feb  9 17:49:44 2013 jordan bettin
*/

#include "../include/malloc.h"

void	*malloc(size_t taille)
{
  t_block	*cur;
  int		ok;

  ok = 0;
  cur = NULL;
  if (!cur)
    cur = init();
  if (cur->size_block == 0 || taille >= pow(2, 31) || cur == NULL)
    return (NULL);
  if (ok == 0)
    {
      cur->size_block = taille + sizeof(t_block);
      cur = add_block(cur, taille);
      cur->used = 1;
    }
  cur->next = NULL;
  return ((void *)(cur) + sizeof(t_block));
}
