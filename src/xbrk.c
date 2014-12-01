/*
** xbrk.c for xbrk in /home/bettin_j//Documents/Malloc
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Mon Feb  4 15:17:56 2013 jordan bettin
** Last update Tue Feb  5 16:31:47 2013 jordan bettin
*/

#include "../include/malloc.h"

int	xbrk(void *addr)
{
  int	res;

  if ((res = brk(addr)) == -1)
    {
      errno = ENOMEM;
      perror("Not enough space\n");
      return (-1);
    }
  return (0);
}
