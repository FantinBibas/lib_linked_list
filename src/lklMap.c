/*
** lklMap.c for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Tue Apr  4 16:47:27 2017 Fantin Bibas
** Last update Tue Apr  4 17:48:39 2017 Fantin Bibas
*/

#include <stdlib.h>
#include "liblkl.h"

t_lklist	*lklMap(t_lklist *list, t_lklFuncMapProt fnc, int fr)
{
  t_lklelem	*elem;

  if (list == NULL)
    return (list);
  elem = list->list;
  while (elem != NULL)
    {
      elem->elem = fnc(elem->elem, fr);
      elem = elem->next;
    }
  return (list);
}
