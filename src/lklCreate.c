/*
** lklCreate.c for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Mon Apr  3 17:46:33 2017 Fantin Bibas
** Last update Tue Apr  4 15:12:25 2017 Fantin Bibas
*/

#include <stdlib.h>
#include "liblkl.h"

t_lklist	*lklCreate()
{
  t_lklist	*list;

  if ((list = malloc(sizeof(t_lklist))) == NULL)
    return (NULL);
  list->append = lklAppend;
  list->get = lklElem;
  list->getPtr = lklElemPtr;
  list->len = lklLen;
  list->reverse = lklReverse;
  list->delete = lklDelete;
  list->extend = lklExtend;
  list->destroy = lklDestroy;
  list->sort = lklSort;
  list->list = NULL;
  return (list);
}
