/*
** main.c for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Mon Apr  3 13:28:26 2017 Fantin Bibas
** Last update Mon Apr  3 14:55:57 2017 Fantin Bibas
*/

#include <stdlib.h>
#include "liblkl.h"

t_lklist	*lklAppend(void *elem, t_lklist *list);

void		*lklElem(int idx, t_lklist *list)
{
  int		i;
  t_lklelem	*elem;

  i = -1;
  while (elem != NULL && elem->next != NULL && ++i < idx)
    elem = elem->next;
  if (i != idx)
    return (NULL);
  return (elem->elem);
}

t_lklist	*lklCreate()
{
  t_lklist	*list;

  if ((list = malloc(sizeof(t_lklist))) == NULL)
    return (NULL);
  list->append = lklAppend;
  list->elem = lklElem;
  list->list = NULL;
  return (list);
}

t_lklelem	*lklLast(t_lklist *list)
{
  t_lklelem	*elem;

  while (elem != NULL && elem->next != NULL)
    elem = elem->next;
  return (elem);
}

t_lklist	*lklAppend(void *elem, t_lklist *list)
{
  t_lklelem	*new;
  t_lklelem	*last;

  if (list == NULL)
    if ((list = lklCreate()) == NULL)
      return (NULL);
  if ((new = malloc(sizeof(t_lklelem))) == NULL)
    return (NULL);
  new->elem = elem;
  last = lklLast(list);
  new->prev = last;
  new->next = NULL;
  if (last != NULL)
    last->next = new;
  else
    list->list = new;
  return (list);
}
