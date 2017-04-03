/*
** lklLen.c for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Mon Apr  3 18:47:19 2017 Fantin Bibas
** Last update Mon Apr  3 18:57:16 2017 Fantin Bibas
*/

#include <stdlib.h>
#include "liblkl.h"

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
