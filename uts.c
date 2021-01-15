#include <stdio.h>
int prima (int bil)
{
	int i, c = 0;
	i = 1;
	while (i <= bil)
	{
		if (bil % i == 0)
		{
			c++;
		}
		if (c>2)
		{
			return 0;
			break;
		}
		i++;
	}
	if (c == 2)
	{
		return 1;
	}
	else return 0;
}

int even(int bil) 
{
    if(bil%2==0) {
        return 1;
    }else {
        return 0;
    }
}

int main ()
{
	int p, S=12;
	printf ("Masukkan p: \n");
	scanf ("%d", &p);
	if(even(p)== 1)
	while (p%2==0)
	{
	/*	if (p%2==0)
		{
		*/	p = p + 1;
        	
		
		}
        if (prima(p)==1)
		{
			if (p < S)
			{
				S = S - p;
			}
			else 
			{
				S = S - 1;
				if (S==0)
				{
					printf ("output %d", p);
					//break;
				}
			}
		p = p + 2;
	}
	return 0;
}