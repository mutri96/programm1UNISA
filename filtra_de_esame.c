#include <stdio.h>

int getsomma(int i; int a[])

int filtra_da_esame(int a[], int n)
	{
	 int resocon;
	 int long = n;
	 	
	 	for (int i = 0; i < n; i++)
	 	{
	 	 resocon = getsomma(i, a[]);
	 	 	
	 	 	if (resocon == 0)
	 		{
	 		 long--;
	 		} 
	 	 
	 	}
	 
	 return long;
	 }	
