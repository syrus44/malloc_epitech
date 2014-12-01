/*
** show_alloc_mem.c for show_alloc_mem in /home/bettin_j//Documents/Malloc
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Thu Jan 31 16:42:46 2013 jordan bettin
** Last update Fri Feb  8 11:44:42 2013 mael charles
*/

#include "../include/malloc.h"

void	show_alloc_mem()
{
  t_block *ptr = xsbrk(0);

  printf("break : %p\n", ptr);
  while (ptr != NULL)
    {
      if (ptr->next == NULL)
	printf("%p - %p : %zu octets\n", ptr, xsbrk(0),
	       ptr->size_block);
      else
	printf("%p - %p : %zu octets\n", ptr, ptr->next,
	       ptr->size_block);
      ptr = ptr->next;
    }
}
