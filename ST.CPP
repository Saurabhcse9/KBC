#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<process.h>
#include<stdio.h>
#include<fstream.h>
#include<string.h>
#define VIDEO 0x10
int main()
{ clrscr();
int x=DETECT,y,i,j,k,l,m;  int g();  int hex(); int mid();  int movetoxy(int z, int u);
char ch,ch1[50],ch2[50]; int str();  int n();
initgraph(&x,&y,"C:\\turboc3\\bgi");
do
{
cout << "This is a quiz contest." << endl;
cout << "Scoring will also be handled by the computer." << endl;
cout << "There will be two participants." << endl;
cout << "For yes and no commands, press 'y' and 'n' respectively." << endl;
cout << "Press ENTER after each command." << endl;
cout << "So, let's enjoy your quiz contest!" << endl << endl << endl;
cout << "__________>>>>>>>>>>>>> TO START, PRESS 1";
cin>>i;
if(i==1)
{ setbkcolor(WHITE);
setcolor(4);
settextstyle(10,0,9);
outtextxy(100,100,"k.b.c.");
setfillstyle(1,4);
floodfill(40,40,4);
floodfill(250,250,4);
setcolor(7);
settextstyle(8,0,2);

outtextxy(100,360,"loading............");
for(i=100; i<=400; ++i)
{ getpixel(i,350);
putpixel(i,350,WHITE);
getpixel(i,355);
putpixel(i,355,WHITE);
}
for(i=350; i<=355; ++i)
{ getpixel(100,i);
putpixel(100,i,WHITE);
getpixel(400,i);
putpixel(400,i,WHITE);

   }
for(i=100; i<=400; ++i)
{
  for(j=350; j<=355; ++j)
  {  getpixel(i,j);
  putpixel(i,j,BLUE);}

  delay(10);
}
cleardevice();
setbkcolor(0);
setcolor(RED);
for(i=200; i<=400; ++i)
{getpixel(i,100);
putpixel(i,100,3);
getpixel(i,105);
putpixel(i,105,3);
getpixel(i,400);
putpixel(i,400,3);
getpixel(i,405);
putpixel(i,405,3);
}
for(i=100; i<=405; ++i)
{getpixel(200,i);
putpixel(200,i,3);
getpixel(400,i);
putpixel(400,i,3);
}
setfillstyle(1,5);
floodfill(250,250,CYAN);
setfillstyle(1,4);
floodfill(201,101,CYAN);
floodfill(201,401,3);
setcolor(4);
settextstyle(7,0,3);
outtextxy(205,110,"Dedicated to:-");
delay(4000);
settextstyle(8,0,9);
outtextxy(205,120,"M");
g();

nosound();
settextstyle(8,0,2);
outtextxy(270,199,"y");
g();
outtextxy(275,199," f");
g();
outtextxy(292,199,"a");
g();
outtextxy(300,199,"t");
g();
outtextxy(308,199,"h");
g();
outtextxy(320,199,"e");
g();
outtextxy(330,199,"r.");
g();
outtextxy(345,199,"m");
g();
outtextxy(365,199,"y");
g();
outtextxy(205,220,"m");
g();
outtextxy(225,220,"o");
g();
outtextxy(235,220,"t");
g();
outtextxy(245,220,"h");
g();
outtextxy(257,220,"e");
g();
outtextxy(267,220,"r");
g();
outtextxy(270,220,"  &");
g();
outtextxy(320,220,"m");
g();
outtextxy(340,220,"y");
g();
outtextxy(250,240,"C");
g();
outtextxy(263,240,"o");
g();
outtextxy(275,240,"m");
g();
outtextxy(292,240,"p");
g();
outtextxy(303,240,"u");
g();
outtextxy(316,240,"t");
g();
outtextxy(325,240,"e");
g();
outtextxy(337,240,"r");
g();
outtextxy(348,240," s");
g();
outtextxy(360,240," i");
g();
outtextxy(380,240,"r");
g();
outtextxy(205,260," &");
g();
outtextxy(245,260,"Users");
for(i=205; i<=210; ++i)
{getpixel(i,310);
putpixel(i,310,GREEN);
getpixel(i,315);
putpixel(i,315,GREEN);
}
for(i=310; i>=305; --i)
{ getpixel(210,i);
putpixel(210,i,GREEN);
}
for(i=315; i<=320; ++i)
{ getpixel(210,i);
putpixel(210,i,GREEN);
}
for(i=310; i<=315; ++i)
{getpixel(205,i);
putpixel(205,i,GREEN);
}
setcolor(GREEN);
line(210,305,220,312);
line(210,320,220,312);
setfillstyle(1,GREEN);
floodfill(206,311,GREEN);
setcolor(4);
settextstyle(8,0,2);
outtextxy(230,312,"Special thanks ");
outtextxy(230,325,"to:-");
delay(1000);
settextstyle(7,0,4);
outtextxy(260,360,"C++");
for(i=390; i<=395; ++i)
{getpixel(360,i);
putpixel(360,i,10);
getpixel(365,i);
putpixel(365,i,10);
getpixel(310,i);
putpixel(370,i,10);
getpixel(375,i);
putpixel(375,i,10);
getpixel(380,i);
putpixel(380,i,10);
getpixel(385,i);
putpixel(385,i,10);
getpixel(390,i);
putpixel(390,i,10);
getpixel(395,i);
putpixel(395,i,10);
}for(i=360; i<=365; ++i)
 {getpixel(i,390);
putpixel(i,390,10);
getpixel(i,395);
putpixel(i,395,10);
}
for(i=370; i<=375; ++i)
{ getpixel(i,390);
  putpixel(i,390,10);
  getpixel(i,395);
  putpixel(i,395,10);
  }
  for(i=380; i<=385; ++i)
  { getpixel(i,390);
  putpixel(i,390,10);
  getpixel(i,395);
  putpixel(i,395,10);
  }
  for(i=390; i<=395; ++i)
  { getpixel(i,390);
  putpixel(i,390,10);
  getpixel(i,395);
  putpixel(i,395,10);
  }
  for(i=360; i<=365; i++)
  {for(j=390; j<=395; ++j)
     { getpixel(i,j);
     putpixel(i,j,10);
     delay(50);
     }
   }
   for(i=370; i<=375; ++i)
   { for(j=390; j<=395; ++j)
     { getpixel(i,j);
     putpixel(i,j,10);
     delay(50);
     }
     }
     for(i=380; i<=385; ++i)
     { for(j=390; j<=395; ++j)
     {getpixel(i,j);
     putpixel(i,j,10);
     delay(50);
     }
     }
     for(i=390; i<=395; ++i)
     { for(j=390; j<395; ++j)
     { getpixel(i,j);
     putpixel(i,j,10);
     }
     }
     cleardevice();        hex();
   setcolor(1);
   settextstyle(7,0,4);
   outtextxy(270,60,"*Welcome*");
   mid();
   movetoxy(128,108);
   settextstyle(7,0,2);
   setcolor(1);
   outtextxy(128,108,"Enter your name:-");
   outtextxy(128,208,"Enter your name:-");
   outtextxy(128,308,"This is a two player GAME");
   cin>>ch1;
   outtextxy(350,108,ch1);
   cin>>ch2;
   outtextxy(350,208,ch2);
   delay(1000);
   cleardevice();
    hex();
    settextstyle(7,0,2);
    setcolor(1);
    outtextxy(128,60,ch1);
    outtextxy(300,60,"Vs");
    outtextxy(350,60,ch2);
    settextstyle(8,0,2);
    outtextxy(100,100,"first question is for...");
    outtextxy(400,100,ch1);
    str();
    setcolor(1);
    settextstyle(8,0,1);
    outtextxy(140,160,"WORLD HAI?");
    outtextxy(115,295,"(a) GOL");
    outtextxy(340,295,"(b) CHAUKOR");
    outtextxy(115,345,"(c) PATA NAHI");
    outtextxy(345,345,"(d) FLAT");
    cin>>ch;
    if(ch=='d')
    { sound(500);
    delay(100);
    nosound();
    cleardevice();
    cout<<"EKDUM SAHI JAWAB";
    delay(100);
    }
    else
    { sound(200);
    delay(100);
    nosound();
    }
    cleardevice();
    hex();
    settextstyle(7,0,2);
    setcolor(1);
    outtextxy(128,60,ch1);
    outtextxy(300,60,"Vs");
    outtextxy(350,60,ch2);
    settextstyle(8,0,2);
    outtextxy(100,100,"second question is for...");
    outtextxy(400,100,ch2);
    str();
    setcolor(1);
    settextstyle(8,0,1);
    outtextxy(140,160,"HAMARE RASTRAPATI KA NAAM HAI ?");
    outtextxy(115,295,"(a) PRATIBHA PATIL");
    outtextxy(340,295,"(b) AISHWARYA RAI");
    outtextxy(115,345,"(c) LATA");
    outtextxy(345,345,"(d) PRABHA");
    cin>>ch;
    if(ch=='d')
    { sound(500);
    delay(100);
    nosound();
    cleardevice();
    cout<<"EKDUM SAHI JAWAB";
    delay(100);
    }
    else
    { sound(200);
    delay(100);
    nosound();
    }
    cleardevice();
    setcolor(1);
    settextstyle(8,0,1);
    outtextxy(1,1,"thanks a lot for using this program ");
    outtextxy(1,20," my self saurabh raj  constructor of this program");
    outtextxy(1,40,"I was a student of j.n.v(JAWAHAR NAVODYA VIDYALYA)");
    outtextxy(1,60,"I  have the PCM with computerr scciene and english");
    outtextxy(1,80,"my school is in meerut at sardhna (UP-INDIA)");
    outtextxy(1,200,"************THANK YUO VERY MUCH!**********************************");
    outtextxy(200,400,"Email-ID:-saurabh.ashogapur@gmail.com");
    outtextxy(200,420,"Mobile no.:-");
    sleep(10);
    exit(0);


}
else
cout<<"if you want to play then press 1 else any";
cin>>i;
}
while(i==1);
getch();
closegraph();
restorecrtmode();
return 0;
}


int g()
{
sound(1300);
delay(20);
nosound();
delay(55);

return 0;
}
int hex()
{
int i;
for(i=117; i<=517; ++i)
{ getpixel(i,50);
putpixel(i,50,3);
getpixel(i,55);
putpixel(i,55,3);
getpixel(i,445);
putpixel(i,445,3);
getpixel(i,450);
putpixel(i,450,3);
}
setcolor(3);
setlinestyle(0,3,1);
line(117,50,1,200);
line(117,55,5,200);
line(1,200,117,450);
line(5,200,117,445);
line(517,50,634,200);
line(517,55,629,200);
line(634,200,517,450);
line(629,200,517,445);
setfillstyle(1,1);
floodfill(118,51,3);
setfillstyle(1,8);
floodfill(250,250,3);

return 0;
}
int mid()
{ int i;
 for(i=127; i<=507; ++i)
  { getpixel(i,100);
  putpixel(i,100,3);
  getpixel(i,105);
  putpixel(i,105,3);
  getpixel(i,145);
  putpixel(i,145,3);
  getpixel(i,150);
  putpixel(i,150,3);
  getpixel(i,200);
  putpixel(i,200,3);
  getpixel(i,205);
  putpixel(i,205,3);
  getpixel(i,245);
  putpixel(i,245,3);
  getpixel(i,250);
  putpixel(i,250,3);
  getpixel(i,300);
  putpixel(i,300,3);
  getpixel(i,305);
  putpixel(i,305,3);
  getpixel(i,345);
  putpixel(i,345,3);
  getpixel(i,350);
  putpixel(i,350,3);
  }
  setcolor(3);
  line(127,100,110,125);
  line(127,105,115,125);
  line(507,100,525,125);
  line(507,105,520,125);
  line(110,125,127,150);
  line(115,125,127,145);
  line(525,125,507,150);
  line(520,125,507,145);
  line(127,200,110,225);
  line(127,205,115,225);
  line(507,200,525,225);
  line(507,205,520,225);
  line(110,225,127,250);
  line(115,225,127,245);
  line(525,225,507,250);
  line(520,225,507,245);
  line(127,300,110,325);
  line(127,305,115,325);
  line(507,300,525,325);
  line(507,305,520,325);
  line(110,325,127,350);
  line(115,325,127,345);
  line(525,325,507,350);
  line(520,325,507,345);
  setfillstyle(1,1);
  floodfill(128,102,3);
  floodfill(128,202,3);
  floodfill(128,302,3);
  return 0;
}
movetoxy(int z,int u)
{ union REGS r;
r.h.ah=2;
r.h.dh=z;
r.h.dl=u;
r.h.bh=0;
int86(VIDEO,&r,&r);
return  0;
}
int str()
{ int i;
 for(i=140; i<=500; ++i)
  { setcolor(3);
   getpixel(i,150);
   putpixel(i,150,3);
   getpixel(i,157);
   putpixel(i,157,3);
   getpixel(i,250);
   putpixel(i,250,3);
   getpixel(i,257);
   putpixel(i,257,3);
   }
   line(140,150,110,202);
   line(140,157,117,202);
   line(500,150,530,202);
   line(500,157,523,202);
   line(110,202,140,257);
   line(117,202,140,250);
   line(530,202,500,257);
   line(523,202,500,250);
   setfillstyle(1,BLUE);
   floodfill(141,152,3);
  for(i=110; i<=300; ++i)
  { getpixel(i,290);
  putpixel(i,290,3);
  getpixel(i,295);
  putpixel(i,295,3);
  getpixel(i,320);
  putpixel(i,320,3);
  getpixel(i,325);
  putpixel(i,325,3);
  getpixel(i,340);
  putpixel(i,340,3);
  getpixel(i,345);
  putpixel(i,345,3);
  getpixel(i,370);
  putpixel(i,370,3);
  getpixel(i,375);
  putpixel(i,375,3);
  }
    for(i=340; i<=530; ++i)
    { getpixel(i,290);
    putpixel(i,290,3);
    getpixel(i,295);
    putpixel(i,295,3);
    getpixel(i,320);
    putpixel(i,320,3);
    getpixel(i,325);
    putpixel(i,325,3);
    getpixel(i,340);
    putpixel(i,340,3);
    getpixel(i,345);
    putpixel(i,345,3);
    getpixel(i,370);
    putpixel(i,370,3);
    getpixel(i,375);
    putpixel(i,375,3);
    } setcolor(3);
    line(110,290,90,305);
    line(110,295,95,305);
    line(90,305,110,325);
    line(95,305,110,320);
    line(300,290,320,305);
    line(300,295,315,305);
    line(320,305,300,325);
    line(315,305,300,320);
    line(110,340,90,355);
    line(110,345,95,355);
    line(90,355,110,375);
    line(95,355,110,370);
    line(300,340,320,355);
    line(300,345,315,355);
    line(320,355,300,375);
    line(315,355,300,370);
    line(340,290,320,305);
    line(340,295,325,305);
    line(320,305,340,325);
    line(325,305,340,320);
    line(530,290,550,305);
    line(530,295,545,305);
    line(550,305,530,325);
    line(545,305,530,320);
    line(340,340,320,355);
    line(340,345,325,355);
    line(320,355,340,375);
    line(325,355,340,370);
    line(530,340,550,355);
    line(530,345,545,355);
    line(550,355,530,375);
    line(545,355,530,370);
    setfillstyle(1,1);
    floodfill(111,292,3);
    floodfill(290,372,3);
    floodfill(341,342,3);
    floodfill(341,292,3);
		      return 0;

  }



