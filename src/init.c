/*
** init.c for init in /home/bettin_j//Documents/Malloc
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Thu Jan 31 17:16:03 2013 jordan bettin
** Last update Fri Feb  8 11:14:19 2013 mael charles
*/

#include "../include/malloc.h"

t_block	*init()
{
  t_block *tmp;

  tmp = xsbrk(sizeof(t_block));
  if (tmp)
    {
      tmp->ptr = xsbrk(0);
      tmp->size_block = xsysconf(_SC_PAGESIZE);
      tmp->used = 0;
      tmp->next = NULL;
      tmp->prev = NULL;
    }
  return tmp;
}
