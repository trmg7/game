#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{char ch=' ';
 int n,r=0,w=0;
 char s1[]=" ",s2[]=" ",s3[]=" ",s4[]=" ",s5[]=" ",s6[]=" ",s7[]=" ",s8[]=" ",s9[]=" ",s10[]=" ";
 char x1[]="employee",x2[]="arrogant",x3[]="respect",x4[]="worth",x5[]="distance",x6[]="infromation",x7[]="humble",x8[]="understanding",x9[]="programmer",x10[]="hacker";
 clrscr();
 gotoxy(31,2);
 x:
 printf("MEMORY GAMES(WORDS)\n");
 printf("1.PLAY GAME\n");
 printf("2.ABOUT GAME\n");
 printf("3.INSTRUCTION\n");
 printf("4.EXIT\n");
 scanf("%d",&n);
 clrscr();
 switch(n)
 { case1:
   {  gotoxy(26,3);
      printf("welcome to memory game(words)\n\n");
      printf("***remember all the words in 30 seconds***\n");
      printf("1.employee\n");
      printf("2.arrogant\n");
      printf("3.respect\n");
      printf("4.worth\n");
      printf("5.distance\n");
      printf("6.information\n");
      printf("7.humble\n");
      printf("8.understanding\n");
      printf("9.programmer\n");
      printf("10.hacker\n");

    clrscr();
    gotoxy(26,3);
      printf("enter all remember words\n");
      fflush(stdin);
      printf("\n1.");
      gets(s1);

      if(strcmp(s1,x1)==0)
      {
       r=r+1;
       }
     else
     {
      w=w+1;
      }
     printf("\n2.");
     gets(s2);

     if(strcmp(s2,x2)==0)
     {
      r=r+1;
      }
    else
    {
     w=w+1;
     }
     printf("\n3.");
     gets(s3);

     if(strcmp(s3,x3)==0)
     {
      r=r+1;
      }
     else
     {
     w=w+1;
     }
     printf("\n4.");
     gets(s4);

     if(strcmp(s4,x4)==0)
     {
      r=r+1;
      }
     else
     {
      w=w+1;
      }
     printf("\n5.");
     gets(s5);

     if(strcmp(s5,x5)==0)
     {
      r=r+1;
      }
     else
     {
      w=w+1;
      }
    printf("\n6.");
    gets(s6);

    if(strcmp(s6,x6)==0)
    {
     r=r+1;
     }
    else
    {
     w=w+1;
    }
    printf("\n7.");
    gets(s7);

    if(strcmp(s7,x7)==0)
    {
     r=r+1;
     }
    else
    {
     w=w+1;
     }
    printf("\n8.");
    gets(s8);

    if(strcmp(s8,x8)==0)
    {
      r=r+1;
      }
    else
    {
     w=w+1;
     }
    printf("\n9.");
    gets(s9);

    if(strcmp(s9,x9)==0)
    {
     r=r+1;
     }
    else
    { w=w+1;
    }
    printf("\n10.");
    gets(s10);

    if(strcmp(s10,x10)==0)
    {
     r=r+1;
     }
    else
    {
     w=w+1;
     }
     clrscr();
      printf("right=%d\n",r);
      printf("wrong=%d\n",w);
      printf("\n---------------------------------------------");
      printf("\n\n****if you want to go back  enter y****\n\n");
      fflush(stdin);
      scanf("%c",&ch);
      clrscr();
      if(ch=='y'||ch=='Y')
      { goto x;
      }
      }
      break;
      case2:
       printf("******************ABOUT GAME***********************/n/n");
       printf(" The mini project help players to improve their capacity to problen related to\t words\n\n");
       printf("The mini project has some list of words you have to learn all in a particular\t give time and after then you have to put all words and you can increase your\t brain to play this game");
       printf("\n-------------------------------------------------");
       printf("\n\n****if you want to go back enter y****\n\n");
       fflush(stdin);
       scanf("%c",&ch);
       clrscr();
       if((ch=='y')||
       (ch='Y'))
       {
	goto x;
	}
	 break;
	 case3:
	printf("*****************INSTRUCTION***********************\n");
	printf("1.read all options carefully\n");
	printf("2.select any option carefully\n");
	printf("3.you can check only one option\n");
	printf("4.remember all words in given time\n");
	printf("5.enter all remember words in sequence\n");
	printf("6.you get points according to correct answer\n");
	printf("\n----------------------------------------------------");
	printf("\n\n****if you want to go back enter y****\n\n");
	fflush(stdin);
	scanf("%c",&ch);
	clrscr();
	if(ch=='y'||ch=='Y')
	{ goto x;
	}
   break;
	case4:

	}
	getch();
	}