/*
** remove_block_space.c for remove_block_space in /home/bettin_j//Documents/Projets/Malloc
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Tue Jan 31 17:13:55 2012 jordan bettin
** Last update Fri Feb  3 15:28:54 2012 maxime jouannin
*/

#include "../include/malloc.h"

t_block		*remove_block_space(t_block *ret)
{
  t_block	*prev;

  prev = find_prev(ret);
  ret = merge_prev_current(prev, ret);
  return (ret);
}
