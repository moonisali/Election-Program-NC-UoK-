#include<conio.h>
#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
#include<cstring>
using namespace std;

struct check
{
	char ch[100];
	char d[6];
};

int main()
{
	int sl[100]={0};
	ofstream  bucky("tuna.txt");
	int count=1,k=1;
	 int adil=0,i=1,aqeel=0,j=1,faisal=0,roll,rollno[100];
	char var,key;
	check cok[100],du[100];
    char a,c,m;
    int q=0,w=1,g=0;
	char o,pass[6];

    const int MAX=5;
	char str[MAX];

	do
	{

	system("cls");

	printf("\n\t\a\t\t ############## ELECTIONS 2017 (CSE,NC-UNIVERSITY OF KASHMIR)  ############## \n\n \t\t ********  PLEASE FOLLOW THE INSTRUCTIONS ON THE SCREEN VERY VERY CAREFULLY  ********\n");

	bucky<<"\t\a\t\t\t##############   VOTE ANY OF THE CANDIDATE  VOTE YOUR CONSCIENCE  ###########\n\n";
	cout<<"\n\t\t \t\t These are the candidates in the fray: \n\t\t\t\t Aqeel punoo \xdd\xdd\xdd \t\t Faisal malik \x0f\x0f\x0f \t  Aadil mehraj \xB2\xB2\xB2"<<endl;

    bucky<<"Name"<<setw(12)<<"roll_number"<<setw(12)<<"vote_to\n";

	cout<<"\n\t\tEnter ur First Name (PRESS ENTER)\n\t\t";
	cin.get(str,'n');
	cout<<"\n\t\tEnter your Roll number (PRESS ENTER):\n\t\t";
	cin>>roll;

	  jack:	cout<<"\n\t\tEnter your unique 11 digit voter number \n\t\t";

		while(g<11)
		{
			o=getch();
			cout<<"#";
			pass[g]=o;
			g++;
		}

		cout<<"\n\t\tDo you want to show the password \n\t\t pres z\n\t\t";
	     m=getch();
		if(m=='z'||m=='Z')
		cout<<endl<<"\t\t"<<pass<<endl;

		strcpy(du[q].d,pass);
	    int flag=0;

        for(int r=0;r<q;r++)
       {
          if(!strcmp(du[q].d,cok[r].ch))
		  {
		     cout<<"\n\t\t sorry u have already voted \n";
		  	 flag=1;
		  	 break;
          }
	   }

        if(flag==0)
        {

	    	strcpy(cok[q].ch,pass);
		    	q++;
		        g=0;
		}

       	else
    	{
    			q++;
		        g=0;
		     goto jack;
	    }

    bucky<<str<<setw(12)<<roll;

	polo: cout<<"\n\t\tPress 'p' for aqeel \n\t\tPress 'm' for adil \n\t\tPress 'f' for faisal \n\t\t";

    char g1=1;
   //char var[10];
	char var;
	/*pass[i]=c;
	i++;  */
	while((c=getch()) &&(g1<2) && (c!= 'e'))

	{
		var=c;
		printf("#");
		i++;
		g1++;

	}

	    if(var == 'p' || var == 'P')
		{
			aqeel++;
			bucky<<setw(12)<<"Aqeel";
		}
		else
		{
			if(var == 'm' || var == 'M')
			{
				adil++;
				bucky<<setw(12)<<"Aadil";
			}
			else{

			if(var == 'f' || var == 'F')
			{

					faisal++;
				bucky<<setw(12)<<"Faisal";

			}

			else
			{
				cout<<"\n\n\t\t************ WARNING: PLEASE CHOOSE AN EXISTING OPTION AS DISPLAYED ON THE SCREEN ***********\t\t\n";
			goto polo;
		    }
	       }
		}

     	 system("cls");
	 	cout<<"\n\n\t\t\t\tThank you for your vote! Please give someone else room to vote now\a \a \x2a\x2a\x2a \n";
        cout<<"\n\n\n\n\n\t\t ############# SOFTWARE DEVELOPED BY SYED MUQEET AND MOONIS ALI #############";
		cout<<"\n\n\n\t\t ***INFORMATION ONLY FOR ELECTION OFFICIALS: If there are any more voters left, Press 'y' *** \n\t\t";

		cin>>key;

		 bucky<<"\n";
         count++;

	     getchar();
	     cout<<endl;
         q++;
         g1=1;
}while(key=='y'|| key=='Y');



	system("cls");
	cout<<"********WARNING: SCREEN!### THE NEXT SCREEN WILL DISPLAY THE RESULTS... ENTER ONLY IF YOU HAVE ACCESS!!*******\n";
	char e;
	cin>>e;

	cout<<"\n\n\a\t\t\t\tTotal number of votes  Choice A gets = "<<adil;
	cout<<"\a\n\t\t\t\tTotal number of votes  Choice B gets = "<<aqeel;
	cout<<"\a\n\t\t\t\tTotal number of votes  Choice C gets = "<<faisal;
	cout<<endl<<endl<<endl;


	bucky.close();

	return 0;
}
