//						 		 			NAME- ABHAY VERMA
//	 										SECTION -AU-1
//	 										BTECH CS23 
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
int ch()
{
	int choice;
	printf("CHOICE ANY ONE :");
		scanf(" %d",&choice);
		return choice;
}
int main()
{

printf("-------------------------------------------------\n           WELCOME IN ONLINE QUIZ PORTAL       \n-------------------------------------------------\n");
start:
char a;
int marks=0,p1=0,p2=0,p3=0,p4=0,p5=0;
char name[10], branch[10], roll[10];
printf("ENTER YOUR NAME:\t");
scanf("%s", name);
printf("ENTER YOUR ROLL No.:\t");
scanf("%s", roll);
printf("ENTER YOUR BRANCH:\t");
scanf("%s", branch);
while(1){
printf("\nDO YOU WANT TO START THE QUIZ (Y/N) : ");
scanf(" %c",&a);	
	if (a=='Y' || a=='y')
	{
		printf("\n-------------------------------------------------\nNOTE: PER QUESTION 10 SECONDS\nCORRECT ANSWER = 1 MARKS \nWRONG ANSWER = 0 MARKS\nNOTE: ALL QUESTIONS ARE MENDATORY\n-------------------------------------------------\n\n");		
//Q1
		printf("Q1.Which of the following is not a valid data type in C?\n1) FLOAT\n2) INT\n3) DOUBLE\n4) TRIPLE\n\n");
		int differ;
    	int s, e;
    	s = time('\0');
		port1:
		int q1=ch();
		if (q1==4)
		{
			p1++;
		}
		if(q1>4 || q1==0 )
		{
			printf("WRONG OPTION CHOICE !!\n");
			goto port1;
		}
		e = time('\0');
    	differ = e-s;
    	if(differ<=10)
		{
			printf("Time taken : %d seconds\n\n", differ);
		}
		else
		{
		printf("YOU TAKE OVER TIME!!!\n\n");	
		p1=0;
		}
//Q2
		printf("Q2.Which Keyword is used to exit a loop prematurely?\n1) Break \n2) Exit \n3) Stop\n4) Last\n\n");
		differ;
    	s, e;
    	s = time('\0');
		port2:
		int q2=ch();
		if (q2==1)
		{
			p2++;
		}
		if(q2>4 || q2==0)
		{
			printf("WRONG OPTION CHOICE !!\n");
			goto port2;
		}
		e = time('\0');
    	differ = e-s;
    	if(differ<=10)
		{
			printf("Time taken : %d seconds\n\n", differ);
		}
		else
		{
		printf("YOU TAKE OVER TIME!!!\n\n");	
		p2=0;
		}
//Q3
		printf("Q3.Which of the following is a valid way to comment out a single line in C?\n1) //\n2) /* */\n3) --\n4) # \n\n");
		differ;
    	s, e;
    	s = time('\0');
		port3:
		int q3=ch();
		if (q3==1)
		{
			p3++;
			
		}
		if(q3>4 || q3==0)
		{
			printf("WRONG OPTION CHOICE !!\n");
			goto port3;
		}
		e = time('\0');
    	differ = e-s;
    	if(differ<=10)
		{
			printf("Time taken : %d seconds\n\n", differ);
		}
		else
		{
		printf("YOU TAKE OVER TIME!!!\n\n");	
		p3=0;
		}
//Q4
		printf("Q4.Which library should be included for handling strings in C?\n1) math.h\n2) string.h\n3) stdio.h\n4) stdlib.h\n\n");
		differ;
    	s, e;
    	s = time('\0');
		port4:
		int q4=ch();
		if (q4==2 )
		{
			p4++;
		}
		if(q4>4 || q4==0)
		{
			printf("WRONG OPTION CHOICE !!\n");
			goto port4;
		}
		e = time('\0');
    	differ = e-s;
    	if(differ<=10)
		{
			printf("Time taken : %d seconds\n\n", differ);
		}
		else
		{
		printf("YOU TAKE OVER TIME!!!\n\n");	
		p4=0;
		}
//Q5
		printf("Q5.Which of the Loop that executes at least once?\n1) While\n2) For\n3) Do-while\n4) Switch\n\n");
		differ;
    	s, e;
    	s = time('\0');
		port5:
		int q5=ch();
		if (q5==3)
		{
			p5++;
		}
		else if(q5>4 || q5==0)
		{
			printf("WRONG OPTION CHOICE !!\n");
			goto port5;
		}
		e = time('\0');
    	differ = e-s;
    	if(differ<=10)
		{
			printf("Time taken : %d seconds\n\n", differ);
		}
		else
		{
		printf("YOU TAKE OVER TIME!!!\n\n");	
		p5=0;
		}
//RESULT
		marks=p1+p2+p3+p4+p5;
		char g;
		if (marks==5)
		{
			g='A';
		}
		else if (marks==4)
		{
			g='B';
		}
		else if (marks==3)
		{
			g='C';
		}
		else if (marks==2)
		{
			g='D';
		}
		else if (marks==1)
		{
			g='E';
		}
		else
		{
			g='F';
		}
		printf("\n-------------------------------------------------\n YOUR RESULT : %s\n-------------------------------------------------\n",name);
		printf("MARKS OBTAIN:  %d \nMARKS TOTAL :  5\n",marks);
		printf("YOUR GRADES :  %c\n",g);
		step:
		char k;
		printf("\nDO YOU WANT FOR ANOTHER RESPONSE (Y/N) : ");
		scanf(" %c",&k);
		if (k=='Y' || k=='y')
		{
			goto start;
		}
		else if(k=='N' || k=='n')
		{
		break;
		}
		else
		{
		printf("\nINVALID CHOICE! YOU CHOICE WRONG\n");
		goto step;
		}

	}
	else if(a=='N' || a=='n')
	{
		break;
	}
	else
	{
		printf("\nINVALID CHOICE! YOU CHOICE WRONG\n");
		goto start;
	}

}
printf("\n**************THANKS FOR VISIT IN ONLINE QUIZ PORTAL**************\n          ----------------BY ABHAY VERMA----------------\n\n");
return 0;
}
