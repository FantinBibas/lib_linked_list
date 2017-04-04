/*
** liblkl.h for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Mon Apr  3 13:30:17 2017 Fantin Bibas
** Last update Tue Apr  4 17:39:49 2017 Fantin Bibas
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
typedef t_lklist	*(*t_lklFuncExt)(t_lklist *, t_lklist *);
typedef void		*(*t_lklFuncMapProt)(void *, int);
typedef int		(*t_lklFuncCmp)(void *, void *);
typedef void		(*t_lklFuncDest)(t_lklist *);
typedef t_lklist	*(*t_lklFuncSort)(t_lklist *, t_lklFuncCmp);
typedef t_lklist	*(*t_lklFuncMap)(t_lklist *, t_lklFuncMapProt, int);

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
  t_lklFuncElem		delete;
  t_lklFuncExt		extend;
  t_lklFuncDest		destroy;
  t_lklFuncSort		sort;
  t_lklFuncMap		map;
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
|* Get an element in the list. If the index is negative it
|* return the element at position listLen - index.
|*
|* idx		The index of the element to get
|* list		The t_tklist
|*
|* Return NULL in case of problem, the element otherwise.
\************************/

void		*lklElemLkl(int idx, t_lklist *list);
/************************\
|* Get an element in the list as a t_lklelem. If the index
|* is negative it return the element at position listLen - index.
|*
|* idx		The index of the element to get
|* list		The t_tklist
|*
|* Return NULL in case of problem, the element otherwise.
\************************/

void		**lklElemPtr(int idx, t_lklist *list);
/************************\
|* Get apointer to an element in the list. If the index is
|* negative it return the element at position listLen - index.
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

int		lklLenLkl(t_lklelem *elem);
/************************\
|* Get the size of a list given a start element.
|*
|* elem		The first element
|*
|* Return the size of the list or 0 if elem is NULL.
\************************/

t_lklist	*lklReverse(t_lklist *list);
/************************\
|* Reverse the t_lklist.
|*
|* list		The t_tklist
|*
|* Return NULL in case of error, the t_lklist otherwise.
\************************/

void		*lklDelete(int idx, t_lklist *list);
/************************\
|* Delete an element in the list and return it. If the index
|* is negative it delete and return the element at position
|* listLen - index.
|*
|* idx		The index of the element to delete
|* list		The t_tklist
|*
|* Return NULL in case of problem, the element otherwise.
\************************/

t_lklist	*lklExtend(t_lklist *listA, t_lklist *listB);
/************************\
|* Merge two list together and destroy the second one.
|*
|* listA	The first t_lklist "object"
|* listB	The second t_lklist "object"
|*
|* Return NULL if both of the lists are NULL, the merged list
|* otherwise.
\************************/

void		lklDestroy(t_lklist *list);
/************************\
|* Destroy a list.
|*
|* list		The t_lklist "object" to be destroyed
|*
|* Returns nothing
\************************/

t_lklist	*lklSort(t_lklist *list, t_lklFuncCmp cmp);
/************************\
|* Sort a list given a comparison function (the function must
|* be prototyped like "int cmp(void *, void *)".
|*
|* list		The t_lklist "object" to be destroyed
|* cmp		The comparison function
|*
|* Returns the list
\************************/

t_lklist	*lklMap(t_lklist *list, t_lklFuncMapProt fnc, int do_free);
/************************\
|* Apply the function fnc to the entire list. The function is
|* prototyped like "void *fnc(void *)".
|*
|* list		The t_lklist "object" to be destroyed
|* fnc		The function to apply
|* do_free	Set it different to 0 to free the mapped element
|*
|* Returns the list
\************************/


/********************************\
 **Builtin comparison functions**
\********************************/

int		lklStrCmp(void *a, void *b);
/************************\
|* Compare two string given as void *
|*
|* a		The first char *
|* b		The second char *
|*
|* Returns the strcmp between the two strings
\************************/

int		lklIntCmp(void *a, void *b);
/************************\
|* Compare two integers given as void *
|*
|* a		The pointer to the first integer
|* b		The pointer to the second integer
|*
|* Returns the difference between the two integers
\************************/

int		lklFloatCmp(void *a, void *b);
/************************\
|* Compare two floats given as void *
|*
|* a		The pointer to the first float
|* b		The pointer to the second float
|*
|* Returns the difference between the two floats rounded
\************************/


/*****************************\
 **Builtin mapping functions**
\*****************************/

void		*lklUpper(void *str, int do_free);
/************************\
|* Transform all lower case characters of the given string (as
|* void *) in upper case characters.
|*
|* str		The string to convert
|* do_free	Set it different to 0 to free the given string
|*
|* Returns a dup of the string uppercased
\************************/

void		*lklLower(void *str, int do_free);
/************************\
|* Transform all upper case characters of the given string (as
|* void *) in lower case characters.
|*
|* str		The string to convert
|* do_free	Set it different to 0 to free the given string
|*
|* Returns a dup of the string lowercased
\************************/

#endif /* !LIBLKL_H_ */
