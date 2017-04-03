/*
** lklElem.c for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Mon Apr  3 17:47:09 2017 Fantin Bibas
** Last update Mon Apr  3 21:33:45 2017 Fantin Bibas
*/

#include <stdlib.h>
#include "liblkl.h"

void		*lklNegElem(int idx, t_lklist *list)
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
  if (elem != NULL)
    return (elem->elem);
  return (NULL);
}

void		*lklElem(int idx, t_lklist *list)
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
  if (elem != NULL)
    return (elem->elem);
  return (NULL);
}
