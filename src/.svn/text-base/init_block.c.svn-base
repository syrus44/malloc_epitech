/*
** init_block.c for init_block in /home/bettin_j//Documents/Projets/Malloc
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Tue Jan 31 13:49:42 2012 jordan bettin
** Last update Fri Feb  3 15:42:05 2012 maxime jouannin
*/

#include "../include/malloc.h"

void	init_block(size_t *taille, t_block **ret, intptr_t *sbrk_size,
		   size_t *old_size)
{
  if ((*ret = find_free_space(*taille)) != NULL)
    *ret = remove_block_space(*ret);
  if (*ret == NULL)
    {
      *sbrk_size = get_size_pages(*taille);
      *ret = xsbrk(*sbrk_size);
      *old_size = *sbrk_size;
    }
  else
    *old_size = (*ret)->size;
}
