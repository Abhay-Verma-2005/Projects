//						 		 			NAME- ABHAY VERMA
//	 										SECTION -AU-1
//	 										BTECH CS23 
#include<stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	int ch,c,v,age,p1=0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0,p8=0;
	char name[100];
	char gender;
	printf("****************WELCOME IN VOTING ONLINE SYSTEM BY ABHAY VERMA****************\n\n");
	
	while (1)
	{
		start:
		printf("1->Give Your Vote. \n2->Check Winner Party. \n3-> Exit.\n\n");
		printf("Enter Your Choice: ");
		scanf("%d",&ch);
		if (ch==1)
		{ 
			printf("\n-------------------------------------------------------------------------------\n");
			printf("************Voter Personal Details************\n");
			printf("-------------------------------------------------------------------------------\n");
			printf("Enter Your gender (M/F) : ");
			scanf(" %c",&gender);
			printf("Enter your name: ");
    		scanf("%s", name);
			printf("Enter Your Age: ");
			scanf("%d",&age);
			if (age>=18)
			{
				if(gender=='M' || gender=='m')
				{
				printf("\n-------------------------------------------------------------------------------\n");	
				printf("Your Details are filled successfully....\n");
				printf("-------------------------------------------------------------------------------\n");
				printf("Your Name : Mr. %s\n",name);
				printf("Your age : %d\n",age);			
				printf("You are eligible to vote...");
				}
				else if(gender=='F' || gender=='f')
				{
				printf("\n-------------------------------------------------------------------------------\n");	
				printf("Your Details are filled successfully....\n");
				printf("-------------------------------------------------------------------------------\n");
				printf("Your Name : Ms. %s\n",name);
				printf("Your age : %d\n",age);
				printf("You are eligible to vote...");
				}
				else
				{
				printf("\n-------------------------------------------------------------------------------\n");	
				printf("INVALID CHOICE ,You choice wrong...\n");
				printf("-------------------------------------------------------------------------------\n");
				goto start;	
				}
			}
			else
			{
				printf("\n-------------------------------------------------------------------------------\n");
				printf("Sorry! %s, you are not eligible to vote.\n\n",name);
				printf("-------------------------------------------------------------------------------\n");
				goto start;
			}
			printf("\n\n\n-------------------------------------------------------------------------------\n");
			printf("There are 6 political parties given below vote any one\n");
			printf(" 1-> BHARATIYA JANATA PARTY (B.J.P) \n 2-> ALL INDIA TRINAMOOL CONGRESS (A.I.T.C) \n 3-> INDIAN NATIONAL CONGRESS (I.N.C) \n");
			printf(" 4-> AAM AADMI PARTY (A.A.P) \n 5-> BAHUJAN SAMAJ PARTY (B.S.P) \n 6-> SAMAJWADI PARTY (S.P) \n");
			printf("-------------------------------------------------------------------------------\n");
			printf("ENTER YOUR VOTE: ");
			scanf("%d",&v);
			printf("\n-------------------------------------------------------------------------------\n");
			if (v==1)
			{
				p1++;
			}
			else if (v==2)
			{
				p2++;
			}
			else if (v==3)
			{
				p3++;
			}
			else if (v==4)
			{
				p4++;
			}
			else if (v==5)
			{
				p5++;
			}
			else if (v==6)
			{
				p6++;
			}
			else
			{	
			printf("INVALID CHOICE ,You choice wrong...\n-------------------------------------------------------------------------------\n");
			goto start;	
			}
			printf("You vote sucessfully...\n");
			printf("-------------------------------------------------------------------------------\n");
		}
		else if(ch==2)
		{
			printf("-------------------------------------------------------------------------------\n");
			printf("The WINNER PARTY: ");
			if (p1>p2 && p1>p3 && p1>p4 && p1>p5 && p1>p6)
				{
        		printf(" BHARATIYA JANATA PARTY (B.J.P)");
    			}
    		else if (p2>p1 && p2>p3 && p2>p4 && p2>p5 && p2>p6)
				{
        			printf(" ALL INDIA TRINAMOOL CONGRESS (A.I.T.C)");
    			}
    		else if (p3>p1 && p3>p2 && p3>p4 && p3>p5 && p3>p6)
				{
        			printf("T INDIAN NATIONAL CONGRESS (I.N.C)");
    			}
    		else if (p4>p1 && p4>p2 && p4>p3 && p4>p5 && p4>p6)
				{
        			printf(" AAM AADMI PARTY (A.A.P)");
    			}
    		else if (p5>p1 && p5>p2 && p5>p3 && p5>p4 && p6>p6)
				{
        			printf(" BAHUJAN SAMAJ PARTY (B.S.P)");
    			}
    		else if (p6>p1 && p6>p2 && p6>p3 && p6>p4 && p6>p5)
				{
        			printf(" SAMAJWADI PARTY (S.P)");
    			}
    		else
    			{
    				printf("OOPS! THERE ARE TWO OR MORE POLITICAL PARTIES HAVING EQUAL VOTE !!!");			
				}
			printf("\n-------------------------------------------------------------------------------\n");
    		printf("\n");
		}
		else if (ch==3)
		{	printf("\n-------------------------------------------------------------------------------------\n");
			printf("	****************THANK YOU FOR USING THIS VOTING SYSTEM****************\n");
			printf("-----------------------------------BY ABHAY VERMA------------------------------------\n");
			break ;
		}
		else
			{
			printf("\n-------------------------------------------------------------------------------\n");	
			printf("INVALID CHOICE ,You choice Wrong...\n");
			printf("-------------------------------------------------------------------------------\n");
			goto start;	
			}
	}
	return 0;
} 

