/*
** add_block_space.c for add_block_space in /home/bettin_j//Documents/Projets/Malloc
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Thu Feb  2 14:17:15 2012 jordan bettin
** Last update Fri Feb  3 15:13:46 2012 maxime jouannin
*/

#include "../include/malloc.h"

t_block		*add_block_space(t_block *free)
{
  t_block	*prev;

  prev = find_prev(free);
  prev = add_space(prev, free);
  return (prev);
}
