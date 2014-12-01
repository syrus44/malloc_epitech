/*
** get_block.c for get_block in /home/charle_b//Desktop/System_unix/malloc/Malloc/src
** 
** Made by mael charles
** Login   <charle_b@epitech.net>
** 
** Started on  Mon Feb  4 14:46:54 2013 mael charles
** Last update Wed Feb  6 10:43:32 2013 mael charles
*/

#include "../include/malloc.h"

t_block		*get_block(void *ptr)
{
  char	*tmp;

  tmp = ptr;
  return (ptr = tmp -= sizeof(t_block));
}
