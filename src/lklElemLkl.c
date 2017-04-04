/*
** lklElemLkl.c for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Tue Apr  4 13:58:32 2017 Fantin Bibas
** Last update Tue Apr  4 14:00:31 2017 Fantin Bibas
*/

#include <stdlib.h>
#include "liblkl.h"

lklElem		*lklNegElemLkl(int idx, t_lklist *list)
{
  int		i;
  t_lklelem	*elem;

  if (idx >= 0)
    return (lklElem(idx, list));
  i = 0;
  if (list == NULL)
    return (NULL);
  elem = lklLast(list);
  while (--i > idx && elem != NULL && elem->prev != NULL)
    elem = elem->prev;
  if (i != idx)
    return (NULL);
  return (elem);
}

lklElem		*lklElemLkl(int idx, t_lklist *list)
{
  int		i;
  t_lklelem	*elem;

  if (idx < 0)
    return (lklNegElem(idx, list));
  i = -1;
  if (list == NULL)
    return (NULL);
  elem = list->list;
  while (++i < idx && elem != NULL && elem->next != NULL)
    elem = elem->next;
  if (i != idx)
    return (NULL);
  return (elem);
}
