int Malloc_SLL(StaticLinkList space)
{
	int i = space[0].cur; //find first spare element
	if(space[0].cur) //if exists
		space[0].cur= space[i].cur; //let first node point to second spare element
	return i;
}

// insert element before i element in staticLinkList
Status ListInsert (StaticLinkList L, int i, ElemType e)
{
	int j, k, l;
	k = MAX_SIZE-1;

	//simply check i validation
	if(i<1||i>ListLength(L)+1)
	{
		return ERROR;
	}

	//get a spare element
	j=Malloc_SLL(L);

	if(j)
	{
		L[j].data=e; // set data field first
		// iterate to find element before i, from head node(k=MAX_SIZE-1)
		for( l=1; l<=i-1 ; l++)
		{
			k = L(k).cur;
		}
		L[j].cur = L[k].cur; //let spare element point to i
		L[k].cur = j; //let i-1 element point to spare element

		return OK;
	}

	return ERROR;
}

