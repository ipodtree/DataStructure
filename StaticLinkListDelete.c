Status ListDelete(StaticLinkList L, int i)
{
	int j,k;
	if(i<1||i>ListLength(L))
	{
		return ERROR;
	}

	k=MAX_SIZE-1;

	// find i-1 element
	for(j=1;j<=i-1;j++)
	{
		k=L[k].cur;
	}

	j = L[k].cur; // j equals to element i
	L[k].cur = L[j].cur; // let i-1 point to i+1
	Free_SLL(L, j);

	return OK;
}


void Free_SLL(StaticLinkList space, int k)
{
	space[k].cur=space[0].cur;
	space[0].cur=k;
}

