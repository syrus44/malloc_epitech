/*
** xsysconf.c for xsysconf in /home/bettin_j//Documents/Malloc
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Thu Jan 31 13:48:23 2013 jordan bettin
** Last update Thu Jan 31 17:38:23 2013 jordan bettin
*/

#include "../include/malloc.h"

long	xsysconf(int name)
{
  long	a;

  a = sysconf(name);
  if (a == -1)
    {
      errno = EINVAL;
      perror("Invalid argument\n");
      return -1;
    }
  return a;
}
