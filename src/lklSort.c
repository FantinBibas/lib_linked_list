/*
** lklSort.c for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Tue Apr  4 13:37:04 2017 Fantin Bibas
** Last update Tue Apr  4 15:29:16 2017 Fantin Bibas
*/

#include <stdlib.h>
#include "liblkl.h"

t_lklelem	*lklSortedMerge(t_lklelem *a, t_lklelem *b, t_lklFuncCmp cmp)
{
  if (a == NULL)
    return (b);
  if (b == NULL)
    return (a);
  if (cmp(a->elem, b->elem) <= 0)
    {
      a->next = lklSortedMerge(a->next, b, cmp);
      a->next->prev = a;
      return (a);
    }
  b->next = lklSortedMerge(a, b->next, cmp);
  b->next->prev = b;
  return (b);
}

void		lklSplit(t_lklelem *list, t_lklelem **front, t_lklelem **back)
{
  int		i;
  int		j;

  *back = NULL;
  *front = list;
  if (list == NULL || list->next == NULL)
    return ;
  j = lklLenLkl(list);
  i = -1;
  *back = list;
  while (++i < j && *back != NULL && (*back)->next != NULL)
    *back = (*back)->next;
  if ((*back)->prev != NULL)
    (*back)->prev->next = NULL;
  (*back)->prev = NULL;
}

void		lklSortLkl(t_lklelem **elem, t_lklFuncCmp cmp)
{
  t_lklelem	*head;
  t_lklelem	*half;

  if (elem == NULL || *elem == NULL || (*elem)->next == NULL)
    return ;
  lklSplit(*elem, &head, &half);
  lklSortLkl(&head, cmp);
  lklSortLkl(&half, cmp);
  *elem = lklSortedMerge(head, half, cmp);
}

t_lklist	*lklSort(t_lklist *list, t_lklFuncCmp cmp)
{
  if (list == NULL || cmp == NULL || list->list == NULL ||
      list->list->next == NULL)
    return (list);
  lklSortLkl(&(list->list), cmp);
  return (list);
}
