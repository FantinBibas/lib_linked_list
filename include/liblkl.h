/*
** liblkl.h for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Mon Apr  3 13:30:17 2017 Fantin Bibas
** Last update Mon Apr  3 19:41:37 2017 Fantin Bibas
*/

#ifndef	LIBLKL_H_
#  define LIBLKL_H_

typedef struct	s_lklist t_lklist;
typedef struct	s_lklelem t_lklelem;

typedef t_lklist	*(*t_lklFuncMod)(void *, t_lklist *);
typedef void		*(*t_lklFuncElem)(int, t_lklist *);
typedef void		**(*t_lklFuncElemPtr)(int, t_lklist *);
typedef t_lklist	*(*t_lklFuncList)(t_lklist *);
typedef int		(*t_lklFunc)(t_lklist *);

struct		s_lklelem
{
  void		*elem;
  t_lklelem	*next;
  t_lklelem	*prev;
};

struct			s_lklist
{
  t_lklelem		*list;
  t_lklFuncMod		append;
  t_lklFuncElem		get;
  t_lklFuncElemPtr     	getPtr;
  t_lklFuncList		reverse;
  t_lklFunc		len;
};

t_lklist	*lklAppend(void *elem, t_lklist *list);
/************************\
|* Append an element at the end of the list. If list is NULL, create it.
|*
|* elem		The element to append
|* list		The t_lklist "object" or NULL
|*
|* Return NULL in case of problem, the list otherwise.
\************************/

t_lklist	*lklCreate();
/************************\
|* Create a t_lklist "object".
|*
|* Return NULL in case of problem, the t_lklist otherwise.
\************************/

void		*lklElem(int idx, t_lklist *list);
/************************\
|* Get an element in the list.
|*
|* idx		The index of the element to get
|* list		The t_tklist
|*
|* Return NULL in case of problem, the element otherwise.
\************************/

void		**lklElemPtr(int idx, t_lklist *list);
/************************\
|* Get apointer to an element in the list.
|*
|* idx		The index of the element to get
|* list		The t_tklist
|*
|* Return NULL in case of problem, the element pointer otherwise.
\************************/

t_lklelem	*lklLast(t_lklist *list);
/************************\
|* Get the last t_lklelem in the list.
|*
|* list		The t_tklist
|*
|* Return NULL in case of problem, the t_lklelem otherwise.
\************************/

int		lklLen(t_lklist *list);
/************************\
|* Get the size of the t_lklist.
|*
|* list		The t_tklist
|*
|* Return the size of the t_lklist or 0 if t_lklist is NULL.
\************************/

t_lklist	*lklReverse(t_lklist *list);
/************************\
|* Reverse the t_lklist.
|*
|* list		The t_tklist
|*
|* Return NULL in case of error, the t_lklist otherwise.
\************************/

#endif /* !LIBLKL_H_ */
