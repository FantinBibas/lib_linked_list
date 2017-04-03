/*
** lklDelete.c for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Mon Apr  3 21:14:43 2017 Fantin Bibas
** Last update Mon Apr  3 21:34:27 2017 Fantin Bibas
*/

#include <stdlib.h>
#include "liblkl.h"

void		*lklDeleteElem(t_lklelem *elem, t_lklist *list)
{
  void		*data;

  if (elem == NULL || list == NULL)
    return (NULL);
  if (list->list == elem)
    list->list = list->list->next;
  if (elem->next != NULL)
    elem->next->prev = elem->prev;
  if (elem->prev != NULL)
    elem->prev->next = elem->next;
  data = elem->elem;
  free(elem);
  return (data);
}

void       	*lklNegDelete(int idx, t_lklist *list)
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
  return (lklDeleteElem(elem, list));
}

void       	*lklDelete(int idx, t_lklist *list)
{
  int		i;
  t_lklelem	*elem;

  if (idx < 0)
    return (lklNegDelete(idx, list));
  i = -1;
  if (list == NULL)
    return (NULL);
  elem = list->list;
  while (++i < idx && elem != NULL && elem->next != NULL)
    elem = elem->next;
  if (i != idx)
    return (NULL);
  return (lklDeleteElem(elem, list));
}
