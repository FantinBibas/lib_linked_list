/*
** lklExtend.c for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Mon Apr  3 21:37:04 2017 Fantin Bibas
** Last update Mon Apr  3 21:40:11 2017 Fantin Bibas
*/

#include <stdlib.h>
#include "liblkl.h"

t_lklist	*lklExtend(t_lklist *a, t_lklist *b)
{
  t_lklelem	*join;

  if (a == NULL || a->list == NULL)
    return (b);
  if (b == NULL || b->list == NULL)
    return (a);
  join = lklLast(a);
  join->next = b->list;
  b->list->prev = join;
  free(b);
  return (a);
}
