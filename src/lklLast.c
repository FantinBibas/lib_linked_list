/*
** lklLast.c for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Mon Apr  3 17:47:42 2017 Fantin Bibas
** Last update Mon Apr  3 18:01:17 2017 Fantin Bibas
*/

#include <stdlib.h>
#include "liblkl.h"

t_lklelem	*lklLast(t_lklist *list)
{
  t_lklelem	*elem;

  if (list == NULL)
    return (NULL);
  elem = list->list;
  while (elem != NULL && elem->next != NULL)
    elem = elem->next;
  return (elem);
}
