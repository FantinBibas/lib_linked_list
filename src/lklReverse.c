/*
** lklReverse.c for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Mon Apr  3 19:22:39 2017 Fantin Bibas
** Last update Mon Apr  3 19:42:53 2017 Fantin Bibas
*/

#include <stdlib.h>
#include "liblkl.h"

t_lklist	*lklReverse(t_lklist *list)
{
  t_lklelem	*tmp;
  t_lklelem	*last;

  if (list == NULL)
    return (NULL);
  last = list->list;
  while (last != NULL)
    {
      tmp = last->next;
      last->next = last->prev;
      last->prev = tmp;
      last = tmp;
      if (last != NULL)
	list->list = last;
    }
  return (list);
}
