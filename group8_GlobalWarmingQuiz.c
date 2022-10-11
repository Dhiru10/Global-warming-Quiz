#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
struct play {
char name[20];
int score;
char gender[10];
int re;

};
struct play p[100];
int ne;
void remark(){
printf ("your remarks are :\n");
printf ("\nyour score is %d \n",p[ne].score);
if (p[ne].score==5)
{
printf("Excellent \n");
}
else if (p[ne].score==4)
{
printf("Very good \n");
}
else
{
printf("Time to brush up on your knowledge of global warming.Refer the following websities for more knowledge on golbal warming.\n1.Intergovernmental Panel on Climate Change\n2.The UN Environment Programme\n3.Resources for the Future\n4.Center for Climate and Energy Solutions\n5.US Global Change Research Program.\n");
}
//files
   FILE *fpw;
   fpw = fopen("student details","w");
   if(fpw == NULL)
   {
      printf("Error");   
      exit(1);             
   }for(int i=0;i<=ne;i++)
   { fwrite(&p[i],sizeof(struct play),ne,fpw);}
   if(fwrite != 0) 
        printf("contents to file written successfully !\n");
    else 
        printf("error writing file !\n");
   fclose(fpw);
}
void retest(){
int score=0;
int answer;

printf("RETEST 1.THIS IS A GENERAL QUIZ BASED ON GLOBAL WARMING AND ITS FACTS.WE ARE HERE IMPROVE PEOPLES KNOWLEDGE ON GLOBAL WARMING\n");

p[ne].score=0;do{
printf("Q1.Which of the following gas does not contribute to the global warming?:\n");
printf("1. Methane \n2. Carbon dioxide \n3. Sulphur \n4. Acetylene \n ");
scanf ("%d", &answer); }while(answer!=1&&answer!=2&&answer!=3&&answer!=4);
if(answer==4)
{
printf("That’s Correct!\n");
p[ne].score=p[ne].score+1;
}
else
{
printf("Wrong Answer\n");
}do{
printf("Q2.Energy sources that do not increase carbon emissions include:\n");
printf("1.solar cells\n2.wind mills \n3.nuclear power plants\n4.All of the above \n");
scanf ("%d", &answer); }while(answer!=1&&answer!=2&&answer!=3&&answer!=4);
if(answer==3)
{
printf("That’s Correct!\n");
p[ne].score=p[ne].score+1;
}
else
{
printf("Wrong Answer\n");
}do{
printf("Q3.How does climate change (global warming) affect human health?\n");
printf(" 1. By increasing illnesses such as heat stress , cardiovascular disease and kidney disease \n 2. By increasing respiratory illnesses such as asthma and allergies \n 3. By increasing insect borne infections such as dengue fever\n 4All of the above\n");
scanf ("%d", &answer); }while(answer!=1&&answer!=2&&answer!=3&&answer!=4);
if(answer==4)
{
printf("That’s Correct!");
p[ne].score=p[ne].score+1;
}
else
{
printf("Wrong Answer\n");
}do{
printf("Q4. Which of the following do you think has the least impact of climate change in forests?\n");
printf(" 1. Change in quality and quantity of wood supply \n 2. Loss of biodiversity\n 3 Loss of forest based employment\n 4. Altered forest productivity\n");
scanf ("%d", &answer); }while(answer!=1&&answer!=2&&answer!=3&&answer!=4);
if(answer==3)
{
printf("That’s Correct!\n");
p[ne].score=p[ne].score+1;
}
else
{
printf("Wrong Answer\n");
}do{
printf("Q5. ………………………………is the artificial modification of Earth’s climate systems through two primary ideologies, Solar Radiation Management (SRM) and Carbon Dioxide Removal (CDR)\n");
printf(" 1. Change in quality and quantity of wood supply \n 2.Geo engineering\n 3 Synchronization\n 4. Mitigation\n");
scanf ("%d", &answer); }while(answer!=1&&answer!=2&&answer!=3&&answer!=4);
if(answer==3)
{
printf("That’s Correct!\n");
p[ne].score=p[ne].score+1;
}
else
{
printf("Wrong Answer\n");
}
printf("re-test 1 completed. thank you. \n");
remark();
}
void retest2(){
int score=0;
int answer;

printf("RETEST 2.THIS IS A GENERAL QUIZ BASED ON GLOBAL WARMING AND ITS FACTS.WE ARE HERE IMPROVE PEOPLES KNOWLEDGE ON GLOBAL WARMING\n");

p[ne].score=0;do{
printf("Q1:Energy sources that do not include co2 emissions are:\n");
printf(" 1. Solar cells \n 2. Wind mills \n 3. Nuclear poer plants \n 4. All of the above \n ");
scanf ("%d", &answer); }while(answer!=1&&answer!=2&&answer!=3&&answer!=4);
if(answer==3)
{
printf("That’s Correct!\n");
p[ne].score=p[ne].score+1;
}
else
{
printf("Wrong Answer\n");
}do{
printf("Q2.Loss of sea ice by melting in Arctic ocean ...:\n");
printf(" 1.Will result in sea-level rise\n 2.May result in positive feedback that minimises global warming\n 3.Will result in cooler temperature in the Arctic\n 4. None of the above\n");
scanf ("%d", &answer); }while(answer!=1&&answer!=2&&answer!=3&&answer!=4);
if(answer==2)
{
printf("That’s Correct!\n");
p[ne].score=p[ne].score+1;
}
else
{
printf("Wrong Answer\n");
}do{
printf("Q3.How does climate change (global warming) affect human health?\n");
printf("1.By increasing illnesses such as heat stress , cardiovascular disease and kidney disease \n2. By increasing respiratory illnesses such as asthma and allergies \n3. By increasing insect borne infections such as dengue fever\n4. All of the above\n");
scanf ("%d", &answer); }while(answer!=1&&answer!=2&&answer!=3&&answer!=4);
if(answer==4)
{
printf("That’s Correct!\n");
p[ne].score=p[ne].score+1;
}
else
{
printf("Wrong Answer\n");
}
do{
printf("Q4. Which of the following do you think has the least impact of climate change in forests?\n");
printf(" 1. Change in quality and quantity of wood supply \n 2. Loss of biodiversity\n 3 Loss of forest based employment\n 4. Altered forest productivity\n");
scanf ("%d", &answer); }while(answer!=1&&answer!=2&&answer!=3&&answer!=4);
if(answer==3)
{
printf("That’s Correct!\n");
p[ne].score=p[ne].score+1;
}
else
{
printf("Wrong Answer\n");
}
do{
printf("Q5.……………………………… is the artificial modification of Earth’s climate systems through two primary ideologies, Solar Radiation Management (SRM) and Carbon Dioxide Removal (CDR)\n");
printf("1. Change in quality and quantity of wood supply \n2.Geo engineering\n3 Synchronization\n4. Mitigation\n");
scanf ("%d", &answer); }while(answer!=1&&answer!=2&&answer!=3&&answer!=4);
if(answer==3)
{
printf("That’s Correct!\n");
p[ne].score=p[ne].score+1;
}
else
{
printf("Wrong Answer\n");
}
printf("re-test 2 completed. thank you. \n");
remark();
}

void start()
{
int answer;
 int temp=0;
do{
           int k=0;
           temp=0;
           printf ("\nEnter your name : ");
    	    scanf(" %[^\n]",p[ne].name);
            while(p[ne].name[k]!='\0')
            {
                if(isalpha(p[ne].name[k])==0 && p[ne].name[k]!=32)
                {
                	printf("PLEASE GIVE A VALID INPUT\nONLY CHARACTERS ARE ALLOWED\n");
                	temp=1;
                	break;
                    
                    
                }
                k++;
            }
          }while(temp==1);
          
printf ("\nEnter your Gender(m/f) : ");
scanf ("%s",p[ne].gender);


printf
("THIS IS A GENERAL QUIZ BASED ON GLOBAL WARMING AND ITS FACTS.WE ARE HERE IMPROVE PEOPLES KNOWLEDGE ON GLOBAL WARMING\n");
do{
printf ("1. Reducing the amount of future climate change is called:\n");
printf
("1. Mitigation \n2. Geo- engineering \n3. Adaptation \n4. None of these \n ");
scanf ("%d", &answer); 
}while(answer!=1&&answer!=2&&answer!=3&&answer!=4);
if (answer == 1)
{
printf ("Thats Correct!\n");
p[ne].score = p[ne].score + 1;
}
else 
{
printf ("Wrong Answer\n");
}
do{
printf ("2. The most visually striking evidence of global warming is:\n");
printf
("1.The increased precipitation along the Gulf coast states\n2.Rapid melting of glacial ice on nearly every continent \n3.Highly varying temperature fluctuations felt during the winter months\n4.All of the above \n");
scanf ("%d", &answer); 
}while(answer!=1&&answer!=2&&answer!=3&&answer!=4);
if (answer == 2)
{
printf ("Thats Correct!\n");
p[ne].score = p[ne].score + 1;
}
else
{
printf ("Wrong Answer\n");
}
do{
printf ("3.Climate represents\n");
printf
(" 1.The long-term average weather and its statistical variation for a given region \n 2.Weather averaged over a year \n 3.It is a measure of variations in the amount of precipitation\n 4.None of the above\n");
scanf ("%d", &answer); 
    
}while(answer!=1&&answer!=2&&answer!=3&&answer!=4);
if (answer == 1)
{
printf ("Thats Correct!\n");
p[ne].score =p[ne].score + 1;
}
else
{
printf ("Wrong Answer\n");
}
do{
printf ("4.Greenhouse effect refers to:\n");
printf
("1.Ability of atmosphere to retain water vapor \n2.Ability of certain atmospheric gases to trap heat and keep the planet relatively warm \n3. Ability of cloud to scatter electromagnetic radiation\n4. None of the above\n");
scanf ("%d", &answer); 
    
}while(answer!=1&&answer!=2&&answer!=3&&answer!=4);
if (answer == 1)
{
printf ("Thats Correct!\n");
p[ne].score =p[ne].score + 1;
}
else
{
printf ("Wrong Answer\n");
}
do{
printf ("5.Loss of sea ice by melting in the Arctic Ocean\n");
printf
("1.Will result in sea-level rise \n2.May result in positive feedback that amplifies global warming \n3.Will result in cooler temperature in the Arctic\n4.None of the above\n");
scanf ("%d", &answer);
}while(answer!=1&&answer!=2&&answer!=3&&answer!=4);
if (answer == 2)
{
printf ("Thats Correct!\n");
p[ne].score = p[ne].score + 1;
}
else
{
printf ("Wrong Answer\n");
}
printf
("\nThank You for taking the Quiz.\n");
remark();

}
void ex(){
int i;
int count=0;
for(i=0;i<ne;i++){
if(p[i].score==5){
count++;
printf("%s -excellent with 5 marks",p[i].name);
}else if(p[i].score==4){
printf("%s -v.good with 4 marks",p[i].name);
}else if(p[i].score<=3){
printf("%s -good with 3 marks",p[i].name);
}
printf("\n");
}
printf("%d students got excellent score\n",count);
}
void sort(){
int i,j;
for(i=0;i<ne;i++){
for(j=i+1;j<ne;j++){
if(p[i].score<p[j].score){
struct play r;
r=p[i];
p[i]=p[j];
p[j]=r;
}
}
}
for(i=0;i<ne;i++){
printf("%s has got %d rank with %d score",p[i].name,i+1,p[i].score);
printf("\n");
}
}
void st(){
    


p[ne].re=0;
int a=0;
do{
if(p[ne].re==0){
start();
p[ne].re++;}
else if(p[ne].re==1){
retest();
p[ne].re++;
}else if(p[ne].re==2){
retest2();
p[ne].re++;
}
if(p[ne].re<3){
printf("If you want to take retest, press 0 or else press 1.\n");
scanf("%d",&a);
}
else{
a=1;}

}while(p[ne].re<=3&&a==0);
ne++;
}
void ratio()
    {
        int j;
        char m,f;
        for(j=0;j<ne;j++)
        {
            if(p[j].gender[0]=='m')
     
        {
            m++;
        }
        else
            f++;
        }
        printf("\nFemale:Male=%d:%d",f,m);
    }

int main()
{
ne=0;
int option=0;
printf("\t \t ====================================================\n");
printf("\t \t \t \tGlobal Warming Quiz \n");
printf("\t \t ====================================================\n");

do
{
printf("Choose your Option:\n1.Attempt Test\n2.Number of people who scored excellent\n3.Rank \n4.Gender ratio \n5.Exit\n");
printf("Your option:");
scanf( "%d",&option);
switch(option)
{
case 1:
{
st();
break;
}
case 2:
{
ex();
break;
}
case 3:
{
sort();
break;
}
case 4:
{
ratio();
break;
}
case 5:
break;
}}
while(option!=5);
}