#include <stdio.h>
#include <stdlib.h>

main()
{
	int p;
	
	int a,b,c,d;
	a=3;
	b=1;
	c=6;
	d=4;
	
	init (&p);
	
	push (&p, d);
	push (&p, c);
	push (&p, pop (&p) - pop(&p));
	push (&p, a);
	push (&p, b);
	push (&p, pop(&p) + pop(&p));
	push (&p, pop(&p) - pop(&p));
	
	printf("\n\nO resultado da conta => %d \n\n", pop(&p));
	system("pause");
}
