/*
** find_free_space.c for find_free_space in /home/bettin_j//Documents/Projets/Malloc
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Tue Jan 31 15:57:06 2012 jordan bettin
** Last update Fri Feb  3 15:27:37 2012 maxime jouannin
*/

#include "../include/malloc.h"

t_block		*find_free_space(size_t taille)
{
  t_block	*free_space;
  t_block	*element;

  free_space = NULL;
  element = gl_malloc.b_ptr;
  while (element != NULL)
    {
      if (element->size >= (taille + sizeof(t_block)))
	{
	  free_space = element;
	  break;
	}
      element = element->next;
    }
  return (free_space);
}
