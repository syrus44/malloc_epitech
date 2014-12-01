/*
** get_size_pages.c for get_size_pages in /home/bettin_j//Documents/Projets/Malloc
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Tue Jan 31 18:22:06 2012 jordan bettin
** Last update Fri Feb  3 15:28:14 2012 maxime jouannin
*/

#include "../include/malloc.h"

intptr_t	get_size_pages(size_t taille)
{
  intptr_t	pages_n;
  intptr_t	brk_s;

  pages_n = (((sizeof(t_block) * 2) + taille) / gl_malloc.pagesize) + 1;
  brk_s = pages_n * gl_malloc.pagesize;
  return (brk_s);
}
