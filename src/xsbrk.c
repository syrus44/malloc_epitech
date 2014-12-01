/*
** xsbrk.c for xsbrk in /home/bettin_j//Documents/Malloc
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Thu Jan 31 13:46:07 2013 jordan bettin
** Last update Fri Feb  1 12:14:17 2013 jordan bettin
*/

#include "../include/malloc.h"

void	*xsbrk(intptr_t inc)
{
  void	*j;

  if ((((intptr_t)(j = sbrk(inc)))) == -1)
    {
      errno = ENOMEM;
      perror("Not enough space\n");
      return ((void *) -1);
    }
  return ((void *)j);
}
