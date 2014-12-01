/*
** malloc.h for malloc in /home/bettin_j//Documents/Malloc/include
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Thu Jan 31 12:03:02 2013 jordan bettin
** Last update Fri Feb  8 11:13:27 2013 mael charles
*/

#ifndef MALLOC_H
#define	MALLOC_H

/* DEFINES ET INCLUDES */

#include <math.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <errno.h>
#include <string.h>

#define	UNUSED	__attribute__((unused))
#define	MIN(a, b)	(a < b ? a : b)

/* TYPEDEFS, STRUCTS, ENUMS */

typedef struct	s_block
{
  void		*ptr;
  size_t	size_block;
  int		used;
  struct s_block *prev;
  struct s_block *next;
}		t_block;

/* FONCTIONS */

void		*xsbrk(intptr_t inc);
long		xsysconf(int name);
int		xbrk(void *addr);
void		*malloc(size_t taille);
void		free(void *ptr);
void		*realloc(void *ptr, size_t taille);
void		show_alloc_mem();
t_block		*init();
t_block		*add_block(t_block *current, size_t taille);
t_block		*get_block(void *ptr);
t_block		*find_next_element(t_block *ptr);
t_block		*copy_block(t_block *dest, t_block *src);
size_t		check_mini(size_t t1, size_t t2);

#endif
