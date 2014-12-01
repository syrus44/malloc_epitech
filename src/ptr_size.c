/*
** ptr_size.c for malloc in /home/jouann_m//Proj/malloc/plop/malloc-2015-2014s-bettin_j/src
** 
** Made by maxime jouannin
** Login   <jouann_m@epitech.net>
** 
** Started on  Fri Feb  3 14:36:51 2012 maxime jouannin
** Last update Fri Feb  3 18:42:48 2012 maxime jouannin
*/

#include "../include/malloc.h"

size_t	ptr_size(void *ptr)
{
  if (!ptr)
    return (0);
  return ((((t_block *)ptr - 1)->size));
}
