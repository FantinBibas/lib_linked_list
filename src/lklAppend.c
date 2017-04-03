/*
** lklAppend.c for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Mon Apr  3 17:48:49 2017 Fantin Bibas
** Last update Mon Apr  3 18:07:38 2017 Fantin Bibas
*/

#include <stdlib.h>
#include "liblkl.h"

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
