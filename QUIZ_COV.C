#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct play
 {
	    char name[20];
	    int score;
	    int rate;       //star ratings
 }p;

void high_score();
void start();
void help();

void main()
{
	int chc;
	chc=0;

    printf("Enter \n\t 1 to start the game\n\t 2 to see high scores \n\t 3 to see game help\n\t 0 to exit :  \n ");
    scanf("%d",&chc);

    switch(chc)
    {
	case 1:
	start();
	break;

	case 2:
	high_score();
	break;

	case 3:
	help();
	break;

	  default:
	  exit(1);
    }

  getch();
}

void help()
{
     int ch;

     printf("\n\n ************************* HELP *************************");
     printf("\n -------------------------------------------------------------------------");
     printf("\n .................... C program COVID-19 Quiz...........\n");
     printf("\n >> There will be a total of 10 questions");
     printf("\n >> You will be given 4 options and you have to select 1, 2 ,3 or 4 option\n");
     printf("\n >> Each question will carry 5 points");
     printf("\n >> There is no negative marking for wrong answer");

    printf("\n\n ************************* ALL THE BEST!!!!*************************\n\n");


    printf("\nContinue playing ? (1/0) :  ");
    scanf("%d",&ch);

    if(ch==1)
    {
	start();
    }
    else
    {
	exit(1);
    }

}

void start()
{
	  char ans;
	  int count=0;
	  char rating[20];

	  FILE *fp;

	  if((fp=fopen("\\tmp\play2.txt","a"))==NULL)
	     {
		 printf("error opening file\n");
	     }


	printf("\nPlease enter your name: ");
	scanf("%s",p.name);




	printf("******************* Welcome \" %s \"  to COVID-19 QUIZ *************************** \n\n", p.name);


	printf("Q(1)\n Which organ in the body does this coronavirus primarily attack?");
	printf("\n\nA.Lungs\t\tB.Liver\n\nC.Heart\t\tD.Kidney\n");
	printf("Your answer: ");
	scanf("%c",&ans);

	if(ans=='A' || ans=='a')
	{
	    printf("Correct! +5 points\n\n");
	    ++count;
	    getch();

	}
	else
	{
	    printf("\n\nWrong!!! The correct answer is A. Lungs\nThe infection comes in via the airways and spreads to the lungs.\nThe more dangerous symptoms are caused when dead cells and antibodies flood the lungs with fluid and debris while trying to fight off the virus.");
	    printf("\n");
	    getch();
	}

	printf("Q(2)\nHow long can the virus survive on plastic and stainless steel surfaces,according to studies?");
	printf("\n\nA.72 hours or more\t\tB.24 to 60 hours\n\nC.4 to 12 hours\t\t\tD.2 to 3 hours\n");
	printf("Your answer: ");
	scanf("%c",&ans);

	if(ans=='A' || ans=='a')
	{
	    printf("Correct! +5 points\n\n");
	    getch();

		++count;

	}
	else
	{
	    printf("\n\nWrong!!! The correct answer is A. 72 hours or more\nYes, it has been detected on a surface up to three days after initial contamination according to one study and as long as seven days according to another.\nThat's why it is important to keep washing your hands and to avoid touching your face as much as possible.");
	    printf("\n");
	    getch();
	}

	printf("Q(3) \nWhich of these is NOT listed by the WHO as a symptom of coronavirus?");
	printf("\n\nA.Fever\t\t\t\tB.Dry cough\n\nC.Blurred vision\t\tD.Nasal congestion\n");

	printf("Your answer: ");
	scanf("%c",&ans);

	if(ans=='C' || ans=='c')
	{
	    printf("Correct! +5 points\n\n");
	    getch();

		++count;
	}
	else
	{
	   printf("\n\nWrong!!! The correct answer is C.Blurred vision\nBlurred vision is not listed by the WHO as a symptom.\nHowever,it does appear that the coronavirus can affect the human senses-many people who had illness have reported losing their sense or taste and/or smell.");
	   printf("\n");
	   getch();
	}


	printf("Q(4) \nDoes the UK's National Health Service say you can use ibuprofen as a treatment of the symptoms of COVID-19?");
	printf("\n\nA.Yes\t\tB.No");
	printf("Your answer: ");
	scanf("%c",&ans);
	if(ans=='A' || ans=='a')
	{
	    printf("Correct! +5 points\n\n");
	    getch();

		++count;
	}
	else
	{
	    printf("n\nWrong!!! The correct answer is A.Yes\nYes.It does now.The advice has changed.In the UK,the NHS said that The Commission on Human Medicines has now confirmed there is no clear evidence that using ibuprofen to treat symptoms such as a high temperature makes coronavirus worse.\nYou can take paracetamol or ibuprofen to treat symptoms of coronavirus.");
	    printf("\n");
	    getch();
	}

	printf("Q(5) \nWhat is coronavirus?");
	printf("\n\nA.It is a large family of viruses\t\tB.It belongs to the family of Nidovirus\n\nC.Both A and B are correct\t\t\tD.Only A is correct");
	printf("Your answer: ");
	scanf("%c",&ans);
	if(ans=='C' || ans=='c')
	{
	    printf("Correct! +5 points\n\n");
	    getch();

		++count;
	}
	else
	{
	    printf("\n\nWrong!!! The correct answer is C.\nCoronaviruses are a large family of viruses and belong to the Nidovirus family or Nidovirales order,which includes Coronaviridae,Arterividae, and Roniviridae families.");
	    printf("\n");
	    getch();
	}

	printf("Q(6) \nHow many countries,areas or territories are suffering from novel coronavirus outbreak in the World?");
	printf("\n\nA.More than 50\t\tB.More than 100\n\nC.More than 150\t\tD.More than 200");
	printf("Your answer: ");
	scanf("%c",&ans);
	if(ans=='D' || ans=='d')
	{
	    printf("Correct! +5 points\n\n");
	    getch();

		++count;
	}
	else
	{
	    printf("\n\nWrong!!! The correct answer is D.\nAccording to WHO,around 216 countries,areas or territories are suffering from novel coronavirus or COVID-19 outbreak in the world till 11 June,2020.");
	    printf("\n");
	    getch();
	}

	printf("Q(7) \nThailand announced that it has proceeded to test its novel coronavirus vaccine on which animal/bird?");
	printf("\n\nA.Monkeys\t\tB.Lizards\n\nC.Hens\t\t\tD.Kites");
	printf("Your answer: ");
	scanf("%c",&ans);
	if(ans=='A' || ans=='a')
	{
	    printf("Correct! +5 points\n\n");
	    getch();

		++count;
	}
	else
	{
	    printf("\n\nWrong!!! The correct answer is A.Monkeys\nAfter seeing positive results on mice now Thailand announced that it has proceeded to test its novel coronavirus vaccine on monkeys.\nThe vaccine uses messenger RNA(mRNA) technology to weaken the strain of the virus and produce antigens to fight with the virus from the root");
	    printf("\n");
	    getch();
	}

	printf("Q(8) \nIn the study,which cells are found in COVID-19 patients 'bode well'for long term immunity?");
	printf("\n\nA.P-cell\t\tB.D-cell\n\nC.T-cell\t\tD.Endothelial Cells");
	printf("Your answer: ");
	scanf("%c",&ans);
	if(ans=='C' || ans=='c')
	{
	    printf("Correct! +5 points\n\n");
	    getch();

		++count;
	}
	else
	{
	    printf("\n\nWrong!!! The correct answer is C.T-cell\nT-cells are known as immune warriors help us fight some viruses,but their importance for batting SARS-CoV-2,the virus that causes COVID-19,has been unclear.\nResearch is going on and maybe it can be fruitful.");
	    printf("\n");
	}

	printf("Q(9) \nName a clinical trial in which blood is transfused from recovered COVID-19 patients to a coronavirus patient who is in critical condition?");
	printf("\n\nA.Plasma Therapy\t\tB.Solidarity\n\nC.Remdesivir\t\t\tD.Hydroxychloroquine");
	printf("Your answer: ");
	scanf("%c",&ans);
	if(ans=='A' || ans=='a')
	{
	    printf("Correct! +5 points\n\n");

		++count;
	}
	else
	{
	    printf("\n\nWrong!!! The correct answer is A.Plasma Therapy\nPlasma Therapy is a clinical trial in which blood is transfused from recovered COVID-19 patients to a coronavirus patient who is in critical condition.");
	    printf("\n");
	    getch();
	}

	printf("Q(10) \nWhat are the precautions that need to be taken to protect from the coronavirus?");
	printf("\n\nA.Add more garlic into your diet\t\t\t\tB.Cover your nose and mouth when sneezing\n\nC.Visit your doctor for antibiotics treatment\t\t\tD.Wash your hands after every hour");
	printf("Your answer: ");
	scanf("%c",&ans);
	if(ans=='B' || ans=='b')
	{
	    printf("Correct! +5 points\n\n");
	    getch();

		++count;
	}
	else
	{
	    printf("\n\nWrong!!! The correct answer is B.Cover your nose and mouth when sneezing\nAccording to WHO,a person can take precautions by covering the nose and mouth while sneezing via tissue or an elbow.\nThen,immediately throw the tissue into a closed dustbin");
	    printf("\n");
	    getch();
	}

	


	//counting the correct answers and ratings
	if(count > 0)
	{
		printf("Thanks for playing, Your scored: %d points \t\n", count*5);

		p.score=count*5;

		if(p.score >= 80)
		{
		    printf("CONGRATULATIONS! Rating: * * * * *\n");
		    p.rate=5;
		}
		else if(p.score >= 60 && p.score < 80)
		{
		    printf("GOOD! Rating: * * * *\n");
		    p.rate=4;
		}
		else if(p.score >= 40 && p.score < 60)
		{
		    printf("Rating: * * *\n");
		  p.rate=3;
		}
		else if(p.score >= 20 && p.score < 40)
		{
		    printf(" Rating: * *\n");
		    p.rate=2;
		}
		else if(p.score < 20)
		{
		    printf("BETTER LUCK NEXT TIME! Rating: *\n");
		     p.rate=1;
		}

	    //writing to file

		    fprintf(fp,"%s %d %d", p.name,p.score,p.rate);
		    fclose(fp);
	}
	else
	{
	    printf("Try again!");
	}
}

void high_score()
{

    int ch;

    FILE *fp;
    if((fp=fopen("\\tmp\play2.txt", "r"))==NULL)
	  {
		//printf("error opening file\n");
		printf("\nNo games played yet!\n");
	    }
	    else
	    {

    printf("\n******************************* HIGH SCORES *******************************\n\n");
    printf("NAME     POINTS     RATING\n");
    while(fscanf(fp,"%s %d %d",p.name,&p.score, &p.rate) !=EOF)
    {
	printf("____________________________\n");
	printf("%s     %d     %d star(s)\n\n",p.name,p.score,p.rate);
    }

    fclose(fp);

    }
    printf("\nContinue playing ? (1 - Yes and 0 - No) :  ");
    scanf("%d",&ch);

    if(ch==1)
    {
	start();
    }
    else
    {
	exit(1);
    }

}



