/*
** lklLen.c for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Mon Apr  3 18:47:19 2017 Fantin Bibas
** Last update Tue Apr  4 15:17:13 2017 Fantin Bibas
*/

#include <stdlib.h>
#include "liblkl.h"


int		lklLenLkl(t_lklelem *elem)
{
  int		i;

  i = 0;
  while (elem != NULL)
    {
      elem = elem->next;
      i++;
    }
  return (i);
}

int		lklLen(t_lklist *list)
{
  t_lklelem	*elem;
  int		i;

  if (list == NULL)
    return (0);
  i = 0;
  elem = list->list;
  while (elem != NULL)
    {
      elem = elem->next;
      i++;
    }
  return (i);
}
