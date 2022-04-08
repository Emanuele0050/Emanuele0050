/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

main()
{
	int n, i, k, p;
	
	do {
		printf("inserisci il valore di n: ");
		scanf("%d", &n);
	}while (n<=0);
	
	do {
		printf("inserisci il valore di n: ");
		scanf("%d", &k);
	}while (k<=0);
	
	for(i=1;i<=n;i++){
		p=k*i;
		printf("%d multiplo: %d\n", i, p);
	}

	system("PAUSE");
}
