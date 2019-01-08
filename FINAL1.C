#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  FILE *fp1;
  char grade[10];
  int creditsum[10]={26,25,25,22,26,24,21,18};
  int s1[10]={3,3,4,2,2,1,4,4,3};
  int s2[10]={3,3,3,1,4,2,2,4,3};
  int s3[10]={3,3,3,3,3,2,2,2,4};
  int s4[10]={3,3,3,3,4,2,2,2};
  int s5[10]={3,3,3,3,4,4,2,2,2};
  int s6[10]={3,3,3,3,3,2,2,2};
  int s7[10]={3,3,3,3,2,2,2,3};
  int s8[10]={3,6,3,3,3};
  float GPA,sum1=0.0,sum2=0.0;
  int gp[10];
  int credit[10];
  char sem1[10][10]={"CY6151","GE6151","GE6152","GE6161","GE6162","GE6163","HS6151","MA6151","PH6151"};
  char sem2[10][10]={"CS6201","CS6202","CY6251","GE6262","HS6251","IT6211","IT6212","MA6251","PH6251"};
  char sem3[10][10]={"CS6301","CS6302","CS6303","CS6304","GE6351","IT6311","IT6312","IT6313","MA6351"};
  char sem4[10][10]={"CS6401","CS6402","CS6403","EC6504","MA6453","IT6411","IT6412","IT6413"};
  char sem5[10][10]={"CS6502","CS6551","EC6801","IT6501","IT6502","IT6503","IT6511","IT6512","IT6513"};
  char sem6[10][20]={"CS6601","IT6601","CS6659","CS6660","IT6602","IT6611","IT6612","GE6674","Elective-1"};
  char sem7[10][20]={"CS6701","CS6703","IT6701","IT6702","IT6711","IT6712","IT6713","Elective-2"};
  char sem8[10][20]={"IT6801","IT6811","Elective-3","Elective-4","Elective-5"};
  char subcode[10][10];
  int semno,semnum,n;
  char name[50];
  char roll[20],rollno[20];
  int i,c,a,j;
  int ch,d;
  int z,x;
  //clrscr();
  do
  {
    clrscr();
    printf("\t\t\t\tWELCOME \n\t\tINSTITUTE OF ROAD AND TRANSPORT TECHNOLOGY\n");
    printf("\t\tINFORMATION TECHNOLOGY DEPARTMENT\n");
    printf("\t\t\t*********************\n");
    printf("\t\t        SEMESTER MARK LIST DISPLAY\n");
    printf("\t\t\t*********************\n");
    fp1=fopen("grade1~1.txt","r");
    printf("enter the rollno:");
    scanf("%s",roll);
    d=strlen(roll);
    if(d!=7)
    {
      goto label2;
    }
    else
    {
      i=strcmpi("16imt56",roll);
      j=strcmpi("16imt01",roll);
      if((i>=0)&&(j<=0))
      {
	printf("enter the semester number:");
	scanf("%d",&n);
	if(n<=8)
	{
	  a=0;
	  while(!feof(fp1))
	  {
	    fscanf(fp1,"%s %s %c %c %c %c %c %c %c %c %c %d",rollno,name,&grade[0],&grade[1],&grade[2],&grade[3],&grade[4],&grade[5],&grade[6],&grade[7],&grade[8],&semno);
	    c=strcmpi(roll,rollno);
	    if(c==0)
	    {
	      if(semno==n)
	      {
	       break;
	      }
	      else
	      {
		a++;
	      }
	    }
	  }
	  switch(n)
	  {
	   case 1:for(i=0;i<9;i++)
		  {
		   strcpy(subcode[i],sem1[i]);
		   credit[i]=s1[i];
		   sum2=creditsum[n-1];
		   x=9;
		  }
		  break;
	   case 2:for(i=0;i<9;i++)
	       {
		  strcpy(subcode[i],sem2[i]);
		  credit[i]=s2[i];
		  sum2=creditsum[n-1];
		  x=9;
	       }
	       break;
	   case 3:for(i=0;i<9;i++)
	       {
		  strcpy(subcode[i],sem3[i]);
		  credit[i]=s3[i];
		  sum2=creditsum[n-1];
		  x=9;
	       }
	       break;
	   case 4:for(i=0;i<8;i++)
	       {
		  strcpy(subcode[i],sem4[i]);
		  credit[i]=s4[i];
		  sum2=creditsum[n-1];
		  x=8;
	       }
	       break;
	   case 5:for(i=0;i<9;i++)
		  {
		    strcpy(subcode[i],sem5[i]);
		    credit[i]=s5[i];
		    sum2=creditsum[n-1];
		    x=9;
		  }
	       break;
	   case 6:for(i=0;i<8;i++)
		  {
		    strcpy(subcode[i],sem6[i]);
		    credit[i]=s6[i];
		    sum2=creditsum[n-1];
		    x=8;
		  }
	       break;
	   case 7:for(i=0;i<8;i++)
		{
		  strcpy(subcode[i],sem7[i]);
		  credit[i]=s7[i];
		  sum2=creditsum[n-1];
		  x=8;
		}
		break;
	   case 8:for(i=0;i<5;i++)
	       {
		 strcpy(subcode[i],sem8[i]);
		 credit[i]=s8[i];
		 sum2=creditsum[n-1];
		 x=5;
	       }
	       break;
	}
	if(a>2)
	{
	  goto label;
	}
	else
	{
	 for(i=0;i<9;i++)
	 {
	   z=grade[i];
	   switch(z)
	   {
	     case 'S':gp[i]=10;
		      break;
	     case 'A':gp[i]=9;
		      break;
	     case 'B':gp[i]=8;
		      break;
	     case 'C':gp[i]=7;
		      break;
	     case 'D':gp[i]=6;
		      break;
	     case 'E':gp[i]=5;
		      break;
	     case 'U':gp[i]=0;
		      break;
	     default :gp[i]=0;
		      break;
	   }
	 }
	 sum1=0;
	 for(i=0;i<x;i++)
	 {
	   sum1=sum1+(credit[i]*gp[i]);
	 }
	 //printf("%f %f",sum1,sum2);
	 GPA=(sum1/sum2);
	 printf("NAME : %s\n",name);
	 printf("ROLL NO : %s\n",roll);
	 printf("SEMESTER NUMBER : %d\n",semno);
	 printf("------------------------------\n");
	 printf("|%s\t\t|\t	%c|\n",subcode[0],grade[0]);
	 printf("|%s\t\t|\t	%c|\n",subcode[1],grade[1]);
	 printf("|%s\t\t|\t	%c|\n",subcode[2],grade[2]);
	 printf("|%s\t\t|\t	%c|\n",subcode[3],grade[3]);
	 printf("|%s\t\t|\t	%c|\n",subcode[4],grade[4]);
	 printf("|%s\t\t|\t	%c|\n",subcode[5],grade[5]);
	 printf("|%s\t\t|\t	%c|\n",subcode[6],grade[6]);
	 printf("|%s\t\t|\t	%c|\n",subcode[7],grade[7]);
	 printf("|%s\t\t|\t	%c|\n",subcode[8],grade[8]);
	 printf("--------------------------------\n");
	 printf("GPA  :  %f",GPA);
	 printf("\t\tThank you\n");
       }
      }
      else
      {
	  label:printf("Invalid semno");
      }
    }
    else
    {
       label2:printf("Roll Number not available\n");
       printf("please enter a valid roll number next time");
    }
  }
  printf("\npress 1 to continue");
  printf("\npress any other number to leave");
  scanf("%d",&ch);
  }while(ch==1);
  fclose(fp1);
      //getch()
}