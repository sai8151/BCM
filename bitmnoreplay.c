#include<termios.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct SHEET_CSV{
char tim[10],gmail[40],usn[30],sem[10],name[30],phone[14];
char weasyprint[30],HTML[1000],mpack[30];
FILE *html;
char cache[12];
}struc_t;
int i=0,h=0;
struc_t s[100];
int main (){
char CACHE[10000],MAIL[60],temp,SUBJECT[40],BODY[100];
char msg[1000],USN[13];
int k=0,j=0,n,x,y,z,SUBJECT_BIT,BODY_BIT;
printf("Enter number of students (includeing 0th coloumn)");
scanf("%d",&n);
//SUBJECT_BIT,BODY_BIT
lable:
printf("Do you have Subject to send in mail(Y/N):");
scanf(" %c",&temp);
if(temp=='Y'){
SUBJECT_BIT=1;
}
else if(temp=='N'){
SUBJECT_BIT=0;
}
else
{
printf("\nEntered invalid choice\n");
goto lable;
}

lable1:
printf("Do you have Body to send in mail(Y/N):");
scanf(" %c",&temp);
if(temp=='Y'){
BODY_BIT=1;
}
else if(temp=='N'){
BODY_BIT=0;
}
else
{
printf("\nEntered invalid choice\n");
goto lable1;
}


//SUBJECT[40],BODY[100]
if(SUBJECT_BIT==1){
printf("Enter subject:");
scanf(" %[^\n]s",SUBJECT);

}

if(BODY_BIT==1){
printf("Enter Body:");
scanf(" %[^\n]s",BODY);
}

/*
printf("Enter message what has to send to all students in the sheet [MAX 1000 characters] :");
scanf(" %[^\n]s",msg);/*
*/
FILE *html=fopen("bitm.html","w+");
FILE *sheet=fopen("sheet.csv","r");


for(z=0;z!=1000;z++){
system("clear");
printf("\nDATA LOADING PLEASE WAIT.....--");
printf("\b\b");
printf("\nDATA LOADING PLEASE WAIT...../");

//system("sleep 1");
//system("clear");
//printf("\nDATA LOADING PLEASE WAIT...../");
//system("sleep 1");

}
z=0;

printf("gmail\t\t\t\tusn\t\t\tsem\t\t\tname\t\t\tphone\n");
    for(;k<n;k++)
    {

        fgets(CACHE,1000,sheet);

        i=0;j=0;
            while(CACHE[i]!=44)
            {
                if(CACHE[i]==44||CACHE[i]==34)
                {
                    i++;
                }
                else
                {
                    s[k].tim[j]=CACHE[i];j++;i++;
                }
            }i++;j=0;   


            while(CACHE[i]!=44)
            {
                if(CACHE[i]==44||CACHE[i]==34)
                {
                    i++;
                }
                else
                {
                    s[k].gmail[j]=CACHE[i];j++;i++;
                }
            }i++;j=0;

 
            while(CACHE[i]!=44)
            {
                if(CACHE[i]==44||CACHE[i]==34)
                {
                    i++;
                }
                else
                {
                    s[k].usn[j]=CACHE[i];j++;i++;
                }
            }i++;j=0;

 
            while(CACHE[i]!=44)
            {
                if(CACHE[i]==44||CACHE[i]==34)
                {
                    i++;
                }
                else
                {
                    s[k].sem[j]=CACHE[i];j++;i++;
                }
             }i++;j=0;


            while(CACHE[i]!=44)
            {
                if(CACHE[i]==44||CACHE[i]==34)
                {
                    i++;
                }
                else
                {
                    s[k].name[j]=CACHE[i];j++;i++;
                }
            }i++;j=0;
    

            while(CACHE[i]!=44)
            {
                if(CACHE[i]==44||CACHE[i]==34)
                {
                    i++;
                }
                else
                {
                    s[k].phone[j]=CACHE[i];j++;i++;
                }
            }
//usn_set();
h=0;
        while(s[k].usn[h]!='\0')
        {
            if(s[k].usn[h]==32)
                {
                    s[k].usn[h]=s[k].usn[h+1];
                }
        h++;
        }

    h=0;
strcpy(USN,s[k].usn);
strcat(USN,".html");
s[k].html=fopen(USN,"w+");
//x   y   z
//        printf("sending mail please wait !!!\n");
        MAIL[0]='e';
        MAIL[1]='c';
        MAIL[2]='h';
        MAIL[3]='o';
        MAIL[4]=' ';    
        MAIL[5]=34;
        y=6;
        for(x=0;msg[x]!='\0';x++)
        {
            MAIL[y++]=msg[x];
        }
        MAIL[y++]=34;
        MAIL[y++]=' ';
        MAIL[y++]='|';
        MAIL[y++]=' ';  
        MAIL[y++]='s';
        MAIL[y++]='u';
        MAIL[y++]='d';
        MAIL[y++]='o';
        MAIL[y++]=' ';
        MAIL[y++]='s';
        MAIL[y++]='s';
        MAIL[y++]='m';
        MAIL[y++]='t';
        MAIL[y++]='p';
        MAIL[y++]=' ';
        MAIL[y++]='-';
        MAIL[y++]='v';
        MAIL[y++]='v';
        MAIL[y++]='v';
        MAIL[y++]=' ';


        for(x=0;s[k].gmail[x]!='\0';x++)
        {
            MAIL[y++]=s[k].gmail[x];
        }
        MAIL[y]='\0';
//system(MAIL);
//        printf("\n\n\t\t%s\t\t\n\n",MAIL);
        


        strcpy(s[k].HTML,"<!DOCTYPE html>");
        strcat(s[k].HTML,"\n <head>\n <title>student n</title>");        
        strcat(s[k].HTML,"<link href=\"bitmnoreplay.css\" rel=\"stylesheet\" />\n</head><body>");
        strcat(s[k].HTML,"\n<h4>\n<br><br><br>\n<br><br><br>\n<br><br><br>\n<br><br><br>\n<br><br><br><br><br><br>");
        strcat(s[k].HTML,"\n&nbsp;&nbsp;\n<br>&nbsp;&nbsp;&nbsp;&nbsp;<br><br><br><br><br>\n<br>");
        for(z=0;z<10;z++){
            strcat(s[k].HTML,"&nbsp");
        }
        strcat(s[k].HTML,"\n");
        for(z=0;z<15;z++){
             strcat(s[k].HTML,"&nbsp");
        }
        strcat(s[k].HTML,"\n");
        for(z=0;z<15;z++){
             strcat(s[k].HTML,"&nbsp");
        }
        strcat(s[k].HTML,"\n");
        strcat(s[k].HTML,"MR./MS. ");
        strcat(s[k].HTML,(s[k].name));
        strcat(s[k].HTML," IS PARTICIPATED IN EXPLORICA");              
        strcat(s[k].HTML,"2022<br>\n<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<br>&nbsp;");
        strcat(s[k].HTML,"&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;");
        strcat(s[k].HTML,"&nbsp;\n&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;");
        strcat(s[k].HTML,"&nbsp;\n&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\n");
        strcat(s[k].HTML,"BELLARI INSTITUTE OF TECH AND MANAGEMENT.\n </body>\n</html>");



//echo "text msg 1" | sudo ssmtp -vvv 979error@gmail.com
//mpack -s “Subject_heading”  /path/to/file 979error@gmail.com
// mpack -s "Subject_heading" -d BODY  /path/to/file 979error@gmail.com
fputs(s[k].HTML,s[k].html);
//system("sleep 1");
strcpy(s[k].weasyprint,"weasyprint ");
strcat((s[k].weasyprint),(s[k].usn));
strcat((s[k].weasyprint),".html ./");
strcat((s[k].weasyprint),(s[k].usn));
strcat(s[k].weasyprint,".pdf\n\n");
//system(s[k].weasyprint);
//system("sleep 3");

printf("\n%sExecuted\n",s[k].weasyprint);
printf("%s\t\t%s\t\t%s\t\t%s\t\t%s\t\n",s[k].gmail,s[k].usn,s[k].sem,s[k].name,s[k].phone);
fclose(s[k].html);

system(s[k].weasyprint);

// mpack -s "Subject_heading" -d BODY  /path/to/file 979error@gmail.com

strcpy(s[k].mpack,"mpack -s -d ");
if(SUBJECT_BIT==1)
{
strcat(s[k].mpack,SUBJECT);
strcat(s[k].mpack,SUBJECT);
}

if(BODY_BIT==1)
{
strcat(s[k].mpack,BODY);
strcat(s[k].mpack,BODY);
}

strcat(s[k].mpack," ");

strcat(s[k].mpack,s[k].usn);

strcat(s[k].mpack,".pdf");

strcat(s[k].mpack," ");

strcat(s[k].mpack,s[k].gmail);
system(s[k].mpack);
printf("\n%s\n",s[k].mpack);
}
fclose(sheet);
//printf("Enter your choice :");


return 0;
}







