#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int A1[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int A2[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int y,b=0,c=1803,m,i,j,k,d;
void print_month(int m,int y);
void month_name(int a);
void print_year(int y);

int main()
{


    printf("*******Calender Menu********\nChoose Option 1-3\n1.Find the day\n2.Find the month calendar\n3.Find the year calendar\n");
    int o;
    scanf("%d",&o);
    if(o==1)
    {
        printf("Enter dd/mm/yy format\n");
    scanf("%d%d%d",&d,&m,&y);
    for(b=0;c<y;c++)
    {
        if(c%4==0&&c%100!=0||c%400==0)
        {
            b=b+366;
        }
        else
        {
            b=b+365;
        }
    }
    if(y%4==0&&y%100!=0||y%400==0)
    {
        for(i=0;i+1<m;i++)
        {
            b=b+A1[i];
        }
    }
    else
    {
        for(i=0;i+1<m;i++)
        {
            b=b+A2[i];
        }
    }
    b=b+d-1;
    system("cls");
    if(b%7==0)
        printf("Its Saturday");
    else if(b%7==1)
        printf("ITS Sunday");
    else if(b%7==2)
        printf("ITS Monday");
    else if(b%7==3)
        printf("ITS Tuesday");
    else if(b%7==4)
        printf("ITS Wednesday");
    else if(b%7==5)
        printf("ITS Thursday");
    else if(b%7==6)
        printf("ITS Friday");
    }
    else if(o==2)
    {
       printf("Enter Your Desired Month and year\n");
       scanf("%d%d",&m,&y);
       system("cls");
       printf("                  Year- %d\n",y);
       print_month(m,y);
    }
    else if(o==3)
    {
        printf("Enter any year to see the calender\n");
        scanf("%d",&y);
        system("cls");
        print_year(y);


    }
    else
        printf("INVALID OPTION\n");


        getch();
        return 0;

}





void print_month(int m,int y)
{
    for(b=0,c=1803;c<y;c++)
    {
        if(c%4==0&&c%100!=0||c%400==0)
        {
            b=b+366;
        }
        else
        {
            b=b+365;
        }
    }
    if(y%4==0&&y%100!=0||y%400==0)
    {
        for(i=0;i+1<m;i++)
        {
            b=b+A1[i];
        }
    }
    else
    {
        for(i=0;i+1<m;i++)
        {
            b=b+A2[i];
        }
    }
    if(y%4==0&&y%100!=0||y%400==0)
    {

    month_name(i);
    printf("SAT    SUN    MON    TUE    WED    THU    FRI\n");
    for(j=b%7;j>0;j--)
        printf("       ");
    for(j=1;j<=7-b%7;j++)
    {
        printf("  %d    ",j);
    }
    printf("\n");
    for(k=1;j<=A1[i];j++,k++)
    {
        if(j<10)
       {


        printf("  %d    ",j);
        if(k%7==0)
            printf("\n");
       }
       else
       {
           printf(" %d    ",j);
        if(k%7==0)
            printf("\n");
       }
    }
    }

    else

   {
    month_name(i);
    printf("SAT    SUN    MON    TUE    WED    THU    FRI\n");
    for(j=b%7;j>0;j--)
        printf("       ");
    for(j=1;j<=7-b%7;j++)
    {
        printf("  %d    ",j);
    }
    printf("\n");
    for(k=1;j<=A2[i];j++,k++)
    {
        if(j<10)
       {
        printf("  %d    ",j);
        if(k%7==0)
            printf("\n");
       }
       else
       {
           printf(" %d    ",j);
        if(k%7==0)
            printf("\n");
       }
    }
    }
    printf("\n\n");

}

void month_name(int a)
{
     if(a==0)
        printf("                   January\n\n");
     if(a==1)
        printf("                   February\n\n");
     if(a==2)
        printf("                   March\n\n");
     if(a==3)
        printf("                   April\n\n");
     if(a==4)
        printf("                   May\n\n");
     if(a==5)
        printf("                   June\n\n");
     if(a==6)
        printf("                   July\n\n");
     if(a==7)
        printf("                   August\n\n");
     if(a==8)
        printf("                   September\n\n");
     if(a==9)
        printf("                   October\n\n");
     if(a==10)
        printf("                   November\n\n");
     if(a==11)
        printf("                   December\n\n");

}

void print_year(int y)
{
    printf("                  YEAR- %d\n\n",y);
    for(i=0;i<12;i++)
    {
        int m=i+1;
        print_month(m,y);
    }
}

