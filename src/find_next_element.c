/*
** find_next_element.c for find_next_element in /home/charle_b//Desktop/System_unix/malloc/Malloc
** 
** Made by mael charles
** Login   <charle_b@epitech.net>
** 
** Started on  Tue Feb  5 09:43:37 2013 mael charles
** Last update Fri Feb  8 17:10:56 2013 jordan bettin
*/

#include "../include/malloc.h"

t_block		*find_next_element(t_block *ptr)
{
  ptr->size_block += sizeof(t_block) + ptr->next->size_block;
  ptr->next = ptr->next->next;
  if (ptr->next != NULL)
    ptr->next = ptr;
  return (ptr);
}
