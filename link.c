#include<stdio.h>
#include "link.h"

int GetElem(LinkList head, int n, Node *val)
{
    Node *tmp;
    int i = 0;

    tmp = head->Next;
    while(tmp)
    {
        i++;
        if (i == n)
            break;
        tmp = tmp->Next;
    }

    if (tmp == Null)
    {
        printf("linklist have no the n elem\n");
        return -1;
    }

   *val = tmp; 
   return 0;
}

int InsertElem(LinkList head, int n, Node *val)
{
    int i = 1;
    Node *tmp;

    tmp = head;
    while(tmp && i < n)
    {
        i++;
        tmp = tmp->Next;
    }

    if (tmp == NULL || i > n)
    {
        printf("error\n");
        return -1;
    }

    val->Next = tmp->Next;
    tmp->Next = val;

    return 0;
}

int DleteElem(LinkList head, int n, Node *val)
{
    int i = 1;
    Node *tmp;

    tmp = head;

    while (tmp && i < n)
    {
        tmp = tmp->Next;
        i++;
    }

    if (tmp == NULL || i > n)
    {
        return -1;
    }

    val = tmp->Next;
    tmp->Next = tmp->Next->Next;

    return 0;

}

