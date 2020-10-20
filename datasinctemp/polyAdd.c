#include <stdio.h>
#include <stdlib.h>

#define MAX_TERMS 100
#define COMPARE(x, y) ((x) < (y) ? -1 : ((x) > (y) ? 1 : 0))

typedef struct
{
	int coeff;
	int exp;
} term;

int avail = 0;
term poly[MAX_TERMS];

void attach(int coeff, int exp)
{
	if (avail >= MAX_TERMS)
	{
		fprintf(stderr, "Number of terms exceeded\n");
		exit(0);
	}
	poly[avail].coeff = coeff;
	poly[avail].exp = exp;
	avail++;
}

void padd(int sa, int fa, int sb, int fb, int *sd, int *fd)
{
	*sd = avail;
	while ((sa <= fa) && (sb <= fb))
	{
		switch (COMPARE(poly[sa].exp, poly[sb].exp))
		{
		case -1:
			attach(poly[sb].coeff, poly[sb].exp);
			sb++;
			break;
		case 1:
			attach(poly[sa].coeff, poly[sa].exp);
			sa++;
			break;
		case 0:
			attach(poly[sa].coeff + poly[sb].coeff, poly[sa].exp);
			sa++;
			sb++;
			break;
		}
	}
	for (int i = sa; i <= fa; i++)
	{
		attach(poly[i].coeff, poly[i].exp);
	}
	for (int i = sb; i <= fb; i++)
	{
		attach(poly[i].coeff, poly[i].exp);
	}
	*fd = avail - 1;
}

int main()
{

	int n1, n2, i;
	int sd = 0, fd = 0;

	printf("Enter the number of terms for first polynomial:");
	scanf("%d", &n1);
	for (i = 0; i < n1; i++)
	{
		printf("Enter Coefficient and Exponent: ");
		scanf("%d %d", &poly[i].coeff, &poly[i].exp);
	}

	printf("Enter the number of terms for second polynomial:");
	scanf("%d", &n2);
	for (i = n1; i < n2 + n1; i++)
	{
		printf("Enter Coefficient and Exponent: ");
		scanf("%d %d", &poly[i].coeff, &poly[i].exp);
	}

	printf("Polynomial 1 is: \n");
	for (i = 0; i < n1 - 1; i++)
	{
		printf("%dX^%d +", poly[i].coeff, poly[i].exp);
	}
	printf("%dX^%d ", poly[n1 - 1].coeff, poly[n1 - 1].exp);

	printf("\nPolynomial 2 is: \n");
	for (i = n1; i < n2 + n1 - 1; i++)
	{
		printf("%dX^%d +", poly[i].coeff, poly[i].exp);
	}
	printf("%dX^%d ", poly[n2 + n1 - 1].coeff, poly[n2 + n1 - 1].exp);

	avail = n1 + n2;
	padd(0, n1 - 1, n1, n1 + n2 - 1, &sd, &fd);

	printf("\nPolynomial is: \n");
	for (i = sd; i < fd; i++)
	{
		printf("%dX^%d +", poly[i].coeff, poly[i].exp);
	}
	printf("%dX^%d ", poly[fd].coeff, poly[fd].exp);

	return 0;
}