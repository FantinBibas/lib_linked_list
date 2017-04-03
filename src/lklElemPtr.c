/*
** lklElemPtr.c for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Mon Apr  3 19:18:51 2017 Fantin Bibas
** Last update Mon Apr  3 19:19:42 2017 Fantin Bibas
*/

#include <stdlib.h>
#include "liblkl.h"

void		**lklElemPtr(int idx, t_lklist *list)
{
  int		i;
  t_lklelem	*elem;

  i = -1;
  if (list == NULL)
    return (NULL);
  elem = list->list;
  while (++i < idx && elem != NULL && elem->next != NULL)
    elem = elem->next;
  if (i != idx)
    return (NULL);
  return (&(elem->elem));
}
