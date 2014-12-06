#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{

char itemA[20];
char itemB[20];
float itemAPrice;
float itemBPrice;
char name[20];
char date[20];
char add[20];
char billNo[10];
clrscr();
//highvideo();
for(int i=15;i<65;i++)
{
 textcolor(i);
 gotoxy(i,3);
 cprintf("%c",220);
}
for(i=4;i<6;i++)
{
 textcolor(i);
 gotoxy(15,i);
 cprintf("%c",220);
 gotoxy(63,i);
 cprintf("%c",220);
}
gotoxy(29,4);
textcolor(CYAN + BLINK);
cprintf("ABC-XYZ General Store");
for(i=15;i<65;i++)
{
 textcolor(i);
 gotoxy(i,5);
 cprintf("%c",220);
}
textbackground(CYAN);
for(i=6;i<8;i++)
{
gotoxy(15,i);
cprintf("                                                 ");
}
//Code for name
textcolor(BLACK);
gotoxy(17,6);
cprintf("Name:");
cin>>name;
gotoxy(50,6);
cprintf("BillNo:");
cin>>billNo;
gotoxy(17,7);
cprintf("Address:");
cin>>add;
gotoxy(50,7);
cprintf("Date:");
cin>>date;
//code for the items
//textcolor(GRAY);
textbackground(WHITE);
for(i=8;i<15;i++)
{
gotoxy(15,i);
cprintf("                                                 ");
}

gotoxy(15,8);
textcolor(RED);
cprintf("ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ");
gotoxy(16,9);
textcolor(BLUE);
cprintf("Sr.No");
gotoxy(24,9);
cprintf("ItemName");
gotoxy(34,9);
cprintf("Quantity");
gotoxy(45,9);
cprintf("UnitPrice");
gotoxy(59,9);
cprintf("Total");
gotoxy(15,10);
textcolor(RED);
cprintf("ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ");
textcolor(BLACK);
gotoxy(18,11);
cprintf("1");
gotoxy(24,11);
cin>>itemA;
int itemQA;
gotoxy(37,11);
cin>>itemQA;
gotoxy(47,11);
cin>>itemAPrice;
gotoxy(59,11);
cout<<itemQA*itemAPrice;
gotoxy(18,12);
cprintf("2");
gotoxy(24,12);
cin>>itemB;
gotoxy(37,12);
int itemQB;
cin>>itemQB;
gotoxy(47,12);
cin>>itemBPrice;
gotoxy(59,12);
cout<<itemQB*itemBPrice;
//getch();
gotoxy(15,13);
textcolor(YELLOW);
cprintf("ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ");
gotoxy(45,14);
textcolor(BLUE);
cprintf("Total:");
textcolor(RED);
gotoxy(56,14);
cprintf("%.02f",(itemQB*itemBPrice)+(itemQA*itemAPrice));
textbackground(BLACK);
textcolor(RED + BLINK);

gotoxy(35,16);
cprintf("Thank-You");
getch();
}