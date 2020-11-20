int getsomma(int i; int a[])
{
	float ci;
	int y;	
	int m = 0;
	int n = a[i];
 		
 		for (int j = 10; j < n; j * j) 
		{
		 y	=	(int)(n/j);
		 ci	=	y - (ci/j);
		 m	=	m+ci;	
 		}
 		
 	return m;	
}
