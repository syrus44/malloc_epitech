/*
** merge_free_memory.c for malloc in /home/jouann_m//Proj/malloc/plop/malloc-2015-2014s-bettin_j/src
** 
** Made by maxime jouannin
** Login   <jouann_m@epitech.net>
** 
** Started on  Fri Feb  3 19:02:22 2012 maxime jouannin
** Last update Fri Feb  3 19:04:17 2012 maxime jouannin
*/

#include "../include/malloc.h"

t_block		*merge_free_memory(t_block *block)
{
  size_t	tmp;
  if (block->next != NULL)
    {
      tmp = block->next->size;
      remove_block_space(block->next);
      block->size = block->size + tmp;
    }
  return (block);
}
