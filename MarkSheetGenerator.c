#include <stdio.h>
#include <conio.h>
#include <string.h>
void input();
int calculations();
void show(); // global declaration of functions
void result();
void remark();
float per,cgpa;
int m, m1, c, c1, p, p1, p2, l2,ll,ll1, f, f1, f2, e, r, total, t1, t2, t3, t4, t5, t6; // global declaration of variables and arrays
char ch[20], res[5], rem[16];
char s[] = "Pass";
char s1[] = "Fail"; // global initialisation of some arrays
char s3[] = "Congratulations";
char s4[] = "     ";

int main()
{
	input();
	calculations();
	result();
	remark();
	show();
	
	getch();
	return 0;
}
void input()
{
	printf("Enter your name : ");
	gets(ch);
	printf("Enter Roll No : "); // taking input from user with input function
	scanf("%d", &r);
	fflush(stdin);
vis:
	printf("\nEnter the marks of Digital Marketing:");
	scanf("%d", &m);
	if (m > 70)
	{
		printf("\nPlease enter valid marks ");
		goto vis;
	}
vish:
	printf("\nEnter the marks of Digital Marketing Internals: ");
	scanf("%d", &m1);
	if (m1 > 30)
	{
		printf("\nPlease enter valid marks ");
		goto vish;
	}
vis1:
	printf("\nEnter the marks of  Software Engineering:");
	scanf("%d", &c);
	if (c > 70)
	{
		printf("\nPlease enter valid marks ");
		goto vis1;
	}
vish1:
	printf("\nEnter the marks of Software Engineering Internals: ");
	scanf("%d", &c1);
	if (c1 > 30)
	{
		printf("\nPlease enter valid marks ");
		goto vish1;
	}
vis2:
	printf("\nEnter the marks of Data Strcuture Theory:");
	scanf("%d", &p);
	if (p > 70)
	{
		printf("\nPlease enter valid marks ");
		goto vis2;
	}
vish2:
	printf("\nEnter the marks of Data Strcuture Practicals:");
	scanf("%d", &p1);
	if (p1 > 20)
	{
		printf("\nPlease enter valid marks ");
		goto vish2;
	}
vishw2:
	printf("\nEnter the marks of Data Strcuture Internals:");
	scanf("%d", &p2);
	if (p2 > 10)
	{
		printf("\nPlease enter valid marks ");
		goto vishw2;
	}
vishwq2:
	printf("\nEnter the marks of Big Data Theory:");
	scanf("%d", &l2);
	if (l2 > 70)
	{
		printf("\nPlease enter valid marks ");
		goto vishwq2;
	}
vis3:
	printf("\nEnter the marks of Big Data Practicals:");
	scanf("%d", &ll);
	if (ll > 20)
	{
		printf("\nPlease enter valid marks ");
		goto vis3;
	}
vish3:
	printf("\nEnter the marks of Big Data Internals:");
	scanf("%d", &ll1);
	if (ll1 > 10)
	{
		printf("\nPlease enter valid marks ");
		goto vish3;
	}
vis4:
	printf("\nEnter the marks of Angular JS Theory:");
	scanf("%d", &f);
	if (f > 70)
	{
		printf("\nPlease enter valid marks ");
		goto vis4;
	}
vish4:
	printf("\nEnter the marks of Angular JS Practicals:");
	scanf("%d", &f1);
	if (f1 > 20)
	{
		printf("\nPlease enter valid marks ");
		goto vish4;
	}
vishw4:
	printf("\nEnter the marks of Angular JS Internals:");
	scanf("%d", &f2);
	if (f2 > 10)
	{
		printf("\nPlease enter valid marks ");
		goto vishw4;
	}
vis5:
	printf("\nEnter the marks of Environmental Education Internals:");
	scanf("%d", &e);
	if (e > 100)
	{
		printf("\nPlease enter valid marks ");
		goto vis5;
	}
}
void show()
{
	int i = 0, i1 = 0, j = 0, j1 = 0, k = 0, k1 = 0, l = 0, l1 = 0, z = 0;
	printf("\n\n\n");
	while (i1 < 113)
	{
		printf("*");
		i1++;
	}
	printf("\n|");
	printf("\n| \t\t\t THIRD SEMESTER OF Bachelor of Business Administration (Computer Application)");
	printf("\n|\n");
	while (i < 113)
	{
		printf("-");
		i++;
	}
	printf("\n| NAME : %s \t \t", ch);
	printf("\n| PLACE : Deccan,Pune");
	printf("\n| COLLAGE NAME : MMCC,Pune");
	printf("\n| MEDIUM : ENGLISH \t \t \t \t \t\t  Roll NO. : %d \n", r);
	while (j < 113)
	{
		printf("-");
		j++;
	}
	printf("\n| SUBJECTS \t\t\t| Theory\t| Practical\t| Internals\t| Total \t| Total Obtained|\n");
	while (k < 113)
	{
		printf("-");
		k++; //Big Data
	}
	printf("\n| Digital Marketing          \t| %d\t\t| --\t\t| %d\t\t|\t100 \t|\t%d \t|", m, m1, m + m1);
	printf("\n| Software Engineering       \t| %d\t\t| --\t\t| %d\t\t|\t100 \t|\t%d \t|", c, c1, c + c1);
	printf("\n| Data Structure             \t| %d\t\t| %d\t\t| %d\t\t|\t100 \t|\t%d \t|", p, p1, p2, p + p1 + p2);
	printf("\n| Big Data                   \t| %d\t\t| %d\t\t| %d\t\t|\t100 \t|\t%d \t|", l2,ll, ll1,l2+ll + ll1);
	printf("\n| Angular - JS               \t| %d\t\t| %d\t\t| %d\t\t|\t100 \t|\t%d \t|", f, f1, f2, f + f1 + f1);
	printf("\n| Environmental Education    \t| --\t\t| --\t\t| %d\t\t|\t100 \t|\t%d \t|\n", e, e);
	while (l < 113)
	{
		printf("-");
		l++;
	}
	printf("\n|Total Marks Obtained\t\t|\t Out of Marks\t|     PERCENTAGE\t|  \t Result    |   SGPA\n");
	while (l1 < 113)
	{
		printf("-");
		l1++;
	}
	printf("\n|\t\t%d \t\t|\t   500  \t|     %f   \t|   \t %s      |   %f\n", total, per, res,cgpa);
	while (k1 < 113)
	{
		printf("*");
		k1++;
	}
	printf("\n|");
	printf("\n|\t\t\t\t%s  You are %sed !", rem, res);
	printf("\n| \n");
	while (j1 < 113)
	{
		printf("*");
		j1++;
	}
	printf("\n\n\n");
	while (z < 113)
	{
		printf("*");
		z++;
	}
}
int calculations()
{

	char res[5];
	t1 = m + m1;
	t2 = c + c1;
	t3 = p + p1 + p2;
	t4 = l2+ ll + ll1;            // calculating total and percentage
	t5 = f + f1 + f2;
	t6 = e;
	total = t1 + t2 + t3 + t4 + t5;
	per = total * 100 / 500;
	cgpa = per/9.5;

}
void result()
{
	if (per > 35)
	{
		strcpy(res, s);
	}
	else
		strcpy(res, s1);
}
void remark()
{
	if (per > 35)
	{
		strcpy(rem, s3);
	}
	else
		strcpy(rem, s4);
}