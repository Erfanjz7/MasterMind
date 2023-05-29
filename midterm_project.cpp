#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
using namespace std;
void mainmenu(void);//menu asli ra shamel mishavad
void newgamemenu(void);//menue newgame ra shmel mishavad
void singleplayer(void);//badane asli bazi tak nafare ra shamel mishavd
int playerguessprinter(int, int, int, int); // hads haii ke bazikon vared mikonad ra be sorate moratab shode namayesh midahad
void twoplayer(void);//badane asli do bazi nafare nafare ra shamel mishavd
void submenu(void);//badane submenu ra tashkil midahad
void guide(void);// badane tabe rahanmaye bazi ra shamel mishavad
const int rows=12,columns=4;//motheghyer haye sabet baraye  araraye i ke hads haye karbar ra shamel mishavad
int counter;// shomarande
int countercontinue;//shomarande dar tabe continue
int targetguess[4];//adadi ke computer toild karde ra shamel mishavad
int Table[rows] [columns];//araye i ke hads haye jarbar ra shamel mishavad
void table( int [] [columns]);//menu table ra shaml mihsvad
int scoressize=0;// tedade lvl hayi ke karbar bazi karde ra nehsan midahad
int scores[100]; // araye is shamel emtiaz karbar dar har marhale
void scoreboard(int [], int);//shamel menu scoreboard mibahsd
void exitchecker(int);//ghabl az khorooj, dorost boodan voroodi ra check mikonad
static int newgamemenunumber;//shomare i ke karbar dar menu newgame entekhab mikonad
void continuegame(int);// badane asli bazi ra vaghti ke karabar bazi ra nime tamam gozashte ast shamel mishavad va bazi ra az edame an donbal mikonad
void mainmenucont(void);//menuasli bazi hamrah ba gozineh continue game
static int  whenopencontmenu;// meghdari ke moshakash mikonad mwnu asli byada ba gozine continue game namyaeh dade shavad ya kheir
static int score=100; // meghdar pishfarz emtiaz
int main()
{
    mainmenu();
    getch();

}

void mainmenu(void)
{
    system("color 6");
    int menunumber;
    for(int line=0;line<22;++line)
   {
       cout << setw(40);
      if(line%4==0)
      {
      for(int b=1;b<42;++b)
        cout << "@";
      }

      else if((line-2)%4==0)
      {
          for(int b=1;b<41;++b)
          {
            if(b==1)
            cout << setw(40) << "@";


            else if(b==9&&line==2)
            {
                cout << "        1-New Game              @";
            }

            else if(b==9&&line==6)
            {
                cout << "          2-Table               @";
            }

            else if(b==9&&line==10)
            {
                cout << "       3-Score Board            @";
            }

            else if(b==9&&line==14)
            {
                cout << "          4-Guide               @";
            }

            else if(b==9&&line==18)
            {
                cout << "           5-Exit               @";
            }


            else
                cout << " ";
          }
      }
      else
        continue;

    cout << endl;

    }
    cout << endl << endl << setw(40) << "Choose one of the options yo continue" << endl;

   cin >> menunumber ;
   if(menunumber==1)
   {
       system("color 3");
       system("cls");
       newgamemenu();
   }

   else if(menunumber==2)
   {
       system("color 5");
       system("cls");
       table(Table);
   }

   else if(menunumber==3)
   {
       system("color 1");
       system("cls");
       scoreboard(scores, scoressize);
   }

   else if(menunumber==4)
   {
       system("color 7");
       system("cls");
       guide();
   }

   else if(menunumber==5)
   {
    exit(5);
   }

   else
   {
       system("cls");
       cout << "Please chhose the right number." << endl;
       mainmenu();
   }

}


void mainmenucont(void)
{
    system("color 6");
    int menunumber;
    for(int line=0;line<25;++line)
   {
       cout << setw(40);
      if(line%4==0)
      {
      for(int b=1;b<42;++b)
        cout << "@";
      }

      else if((line-2)%4==0)
      {
          for(int b=1;b<41;++b)
          {
            if(b==1)
            cout << setw(40) << "@";


            else if(b==9&&line==2)
            {
                cout << "       1-New Game               @";
            }

            else if(b==9&&line==6)
            {
                cout << "     2-Continue Game            @";
            }

            else if(b==9&&line==10)
            {
                cout << "         3-Table                @";
            }

            else if(b==9&&line==14)
            {
                cout << "      4-Score Board             @";
            }

            else if(b==9&&line==18)
            {
                cout << "         5-Guide                @";
            }

            else if(b==9&&line==22)
            {
                cout << "         6-Exit                 @";
            }

            else
                cout << " ";
          }
      }
      else
        continue;

    cout << endl;

    }
    cout << endl << endl << setw(40) << "Choose one of the options yo continue" << endl;

   cin >> menunumber ;
   if(menunumber==1)
   {
       system("color 3");
       system("cls");
       newgamemenu();
   }

   else if(menunumber==2)
   {
       system("cls");

       continuegame(newgamemenunumber);
   }

   else if(menunumber==3)
   {
       system("color 5");
       system("cls");
       table(Table);
   }

   else if(menunumber==4)
   {
       system("color 1");
       system("cls");
       scoreboard(scores, scoressize);
   }

   else if(menunumber==5)
   {
       system("color 7");
       system("cls");
       guide();
   }

   else if(menunumber==6)
   {
    exit(6);
   }

   else
   {
       system("cls");
       cout << "Please chhose the right number." << endl;
       mainmenucont();
   }
}


void newgamemenu(void)
{

    for(int i=0;i<13;i++)
    {
      cout << setw(40);
      if(i%4==0)
      {
      for(int b=1;b<42;++b)
        cout << "@";
      }

      else if((i-2)%4==0)
      {
          for(int b=1;b<41;++b)
          {
            if(b==1)
            cout << setw(40) << "@";


            else if(b==9&&i==2)
            {
                cout << "     1-Single Player            @";
            }

            else if(b==9&&i==6)
            {
                cout << "      2-Two Player              @";
            }

            else if(b==9&&i==10)
            {
                cout << "   3-Back to Main Menu          @";
            }

            else
                cout << " ";
          }
      }
      else
        continue;

   cout << endl;
    }

    cin >> newgamemenunumber;
    if(newgamemenunumber==1)
    {
        newgamemenunumber=1;
        system("color 4");
        system("cls");
        singleplayer();
    }

    else if(newgamemenunumber==2)
    {
        newgamemenunumber=2;
        system("color 8");
        system("cls");
        twoplayer();
    }

    else if(newgamemenunumber==3)
    {
        system("cls");
        mainmenu();
    }

    else
    {
        system("cls");
        cout << "Please chhose the right number." << endl;
        newgamemenu();
    }


}

void singleplayer(void)
{
    int bo=1;
    score=100;
    int vlaidrow[4];
    system("color 7");
          system("cls");
          int targetarray[4];
    srand(time(0));
    int numbers[6]={1, 2, 3, 4, 5, 6}, a,firstnum,secondnum,thirdnum,fourthnum,firstguess,secondguess,thirdguess,fourthguess;
    int chosennumbers[6];
    for(int x=6;x>0;x--)
    {
        a=rand()%x;
        chosennumbers[x]=numbers[a];
        while(a<x-1)
        {
            numbers[a]=numbers[a+1];
            a++;
        }
    }

    for(int x=1;x<5;x++)
    {
       if(x==1)
       {
           firstnum=chosennumbers[x];
           targetguess[0]=firstnum;
       }
       else if(x==2)
       {
           secondnum=chosennumbers[x];
           targetguess[1]=secondnum;
       }

       else if(x==3)
       {
           thirdnum=chosennumbers[x];
           targetguess[2]=thirdnum;
       }
       else if(x==4)
       {
           fourthnum=chosennumbers[x];
           targetguess[3]=fourthnum;
       }

    }
    cout << setw(45);
    for(int i=0;i<5;++i)
    {
        if(i==0)
        {
        for(int i=0;i<21;++i)
        {
           cout <<"x";
        }
        }
        else if(i==4)
        {
            cout <<setw(45);
         for(int i=0;i<21;++i)
        {
           cout <<"x";
        }
        }
        else if(i==2)
        {
          cout << setw(48);
          cout << "x   " << firstnum << " ~ " << secondnum << " ~ " << thirdnum << " ~ " << fourthnum << "   x";
        }
        else
        {
            cout << setw(45) << "x" << setw(20) << "x";
        }
        cout << endl;
    }
    cout << "Enter -1  to open submenu" << endl;
    cout << "plz enter ue guesses" << endl;
    for(counter=0;counter<12;counter++)
    {




          while(1)
          {
              cin >> firstguess;
              if(firstguess==1||firstguess==2||firstguess==3||firstguess==4||firstguess==5||firstguess==6)
              {
                  Table[counter] [0]=firstguess;
                break;
              }
              else if(firstguess==-1)
              {
                  system("cls");
                submenu();
              }

              cout << "plz enter num bet 1~6" << endl;

          }

             while(1)
             {
                 cin >> secondguess;
                  if((secondguess==1||secondguess==2||secondguess==3||secondguess==4||secondguess==5||secondguess==6)&&(firstguess!=secondguess))
                  {
                      Table[counter] [1]=secondguess;
                    break;
                  }
                  else if(secondguess==-1)
                  {
                      system("cls");
                submenu();

                  }
                  cout << "plz enter a number between 1~6 or Non-repetitive" << endl;
             }



           while(1)
             {
                 cin >> thirdguess;
                  if((thirdguess==1||thirdguess==2||thirdguess==3||thirdguess==4||thirdguess==5||thirdguess==6)&&(secondguess!=thirdguess)&&(firstguess!=thirdguess))
                  {
                      Table[counter] [2]=thirdguess;
                    break;
                  }
                  else if(thirdguess==-1)
                  {
                      system("cls");
                submenu();
                  }
                  cout << "plz enter a number between 1~6 or Non-repetitive" << endl;
             }




           while(1)
             {
                  cin >> fourthguess;
                  if((fourthguess==1||fourthguess==2||fourthguess==3||fourthguess==4||fourthguess==5||fourthguess==6)&&(thirdguess!=fourthguess)&&(firstguess!=fourthguess)&&(secondguess!=fourthguess))
                  {
                      Table[counter] [3]=fourthguess;
                      break;
                  }
                  else if(fourthguess==-1)
                  {
                      system("cls");
                submenu();
                  }
                  cout << "plz enter a number between 1~6 or Non-repetitive" << endl;
             }



          playerguessprinter(firstguess ,secondguess ,thirdguess ,fourthguess);
          cout <<setw(50);
          char guesses[4];
        int hadaf[4]={firstnum,secondnum,thirdnum,fourthnum};
        int hads[4]={firstguess,secondguess,thirdguess,fourthguess};
        char z;
        for(int i=0;i<4;i++)
        {
           for(int j=0;j<4;j++)
              {
                 if(hadaf[j]==hads[i])
                 {
                    z='T';
                    break;
                 }

                 else
                {
                   z='0';
                }
             }

          if(z=='T')
          {
             if(hadaf[i]==hads[i])
                z='T';

             else
                z='F';
          }

          else
            z='0';

          if(z=='F')
            score=--score;
            //scorecont=score;

          cout << "(" << z << ")   ";
          guesses[i]=z;
        }
        if(guesses[0]=='T'&&guesses[1]=='T'&&guesses[2]=='T'&&guesses[3]=='T')
        {
           cout << endl << "VICTORY!!" << endl;
           cout << "Your score is: " << score << endl;
           scores[scoressize]=score;
           system("pause");
           system("cls");
           score=100;
           scoressize=++scoressize;
           mainmenu();

           break;
        }

        else if(counter==11)
        {
            cout << endl << "GAME OVER!!" << endl;
            cout << "Your score is: 0" << endl;
            score=0;
            scores[scoressize]=score;
            system("pause");
            system("cls");
            score=100;
            scoressize=++scoressize;
            mainmenu();
        }

        else
        {
            continue;
        }

}
}


void twoplayer(void)
{
    score=100;
    int secondplayerfirstnum,secondplayersecondnum,secondplayerthirdnum,secondplayerfourthnum,firstguess,secondguess,thirdguess,fourthguess;
    cout << setw(40) << "Player2: Enter 4Numbers for player 1 to guss:";
       while(1)
          {
              cin >> secondplayerfirstnum;
              if(secondplayerfirstnum==1||secondplayerfirstnum==2||secondplayerfirstnum==3||secondplayerfirstnum==4||secondplayerfirstnum==5||secondplayerfirstnum==6)
              {
                break;
              }
              else if(secondplayerfirstnum==-1)
              {
                   system("cls");
              submenu();
              }

              cout << "plz enter num bet 1~6" << endl;

          }


             while(1)
             {
                 cin >> secondplayersecondnum;
                  if((secondplayersecondnum==1||secondplayersecondnum==2||secondplayersecondnum==3||secondplayersecondnum==4||secondplayersecondnum==5||secondplayersecondnum==6)&&(secondplayerfirstnum!=secondplayersecondnum))
                  {
                    break;
                  }
                  else if(secondplayersecondnum==-1)
                  {
                      system("cls");
              submenu();
                  }
                  cout << "plz enter a number between 1~6 or Non-repetitive" << endl;

             }



           while(1)
             {
                 cin >> secondplayerthirdnum;
                  if((secondplayerthirdnum==1||secondplayerthirdnum==2||secondplayerthirdnum==3||secondplayerthirdnum==4||secondplayerthirdnum==5||secondplayerthirdnum==6)&&(secondplayersecondnum!=secondplayerthirdnum)&&(secondplayerfirstnum!=secondplayerthirdnum))
                  {

                    break;
                  }
                  else if(secondplayerthirdnum==-1)
                  {
                      system("cls");
              submenu();
                  }
                  cout << "plz enter a number between 1~6 or Non-repetitive" << endl;
             }




           while(1)
             {
                  cin >> secondplayerfourthnum;
                  if((secondplayerfourthnum==1||secondplayerfourthnum==2||secondplayerfourthnum==3||secondplayerfourthnum==4||secondplayerfourthnum==5||secondplayerfourthnum==6)&&(secondplayerthirdnum!=secondplayerfourthnum)&&(secondplayerfirstnum!=secondplayerfourthnum)&&(secondplayersecondnum!=secondplayerfourthnum))
                  {

                      break;
                  }
                  else if(secondplayerfourthnum==-1)
                  {
                      system("cls");
              submenu();
                  }
                  cout << "plz enter a number between 1~6 or Non-repetitive" << endl;
             }

       targetguess[0]=secondplayerfirstnum;
       targetguess[1]=secondplayersecondnum;
       targetguess[2]=secondplayerthirdnum;
       targetguess[3]=secondplayerfourthnum;

       cout << endl << endl << endl;
       cout << setw(45);
    for(int i=0;i<5;++i)
    {
        if(i==0)
        {
        for(int i=0;i<21;++i)
        {
           cout <<"x";
        }
        }
        else if(i==4)
        {
            cout <<setw(45);
         for(int i=0;i<21;++i)
        {
           cout <<"x";
        }
        }
        else if(i==2)
        {
          cout << setw(48);
          cout << "x   " << secondplayerfirstnum << " ~ " <<secondplayersecondnum << " ~ " << secondplayerthirdnum << " ~ " << secondplayerfourthnum << "   x";
        }
        else
        {
            cout << setw(45) << "x" << setw(20) << "x";
        }
        cout << endl;
    }
    cout << "Enter -1 to open the submenu" << endl;
    cout << "plz enter ue guesses";
       for(counter=0;counter<12;counter++)
    {

          while(1)
          {
              cin >> firstguess;
              if(firstguess==1||firstguess==2||firstguess==3||firstguess==4||firstguess==5||firstguess==6)
              {
                  Table[counter] [0]=firstguess;
                break;
              }
              else if(firstguess==-1)
              {
                  system("cls");
              submenu();
              }

              cout << "plz enter num bet 1~6" << endl;

          }


             while(1)
             {
                 cin >> secondguess;
                  if((secondguess==1||secondguess==2||secondguess==3||secondguess==4||secondguess==5||secondguess==6)&&(firstguess!=secondguess))
                  {
                      Table[counter] [1]=secondguess;
                    break;
                  }
                  else if(secondguess==-1)
                  {
                      system("cls");
              submenu();

                  }
                  cout << "plz enter a number between 1~6 or Non-repetitive" << endl;

             }


           while(1)
             {
                 cin >> thirdguess;
                  if((thirdguess==1||thirdguess==2||thirdguess==3||thirdguess==4||thirdguess==5||thirdguess==6)&&(secondguess!=thirdguess))
                  {
                      Table[counter] [2]=thirdguess;
                    break;
                  }
                  else if(thirdguess==-1)
                  {
                      system("cls");
              submenu();
                  }
                  cout << "plz enter a number between 1~6 or Non-repetitive" << endl;
             }



           while(1)
             {
                  cin >> fourthguess;
                  if((fourthguess==1||fourthguess==2||fourthguess==3||fourthguess==4||fourthguess==5||fourthguess==6)&&(thirdguess!=fourthguess))
                  {
                      Table[counter] [3]=fourthguess;
                      break;
                  }
                  else if(fourthguess==-1)
                  {
                      system("cls");
              submenu();
                  }
                  cout << "plz enter a number between 1~6 or Non-repetitive" << endl;
             }


          playerguessprinter(firstguess ,secondguess ,thirdguess ,fourthguess);
          cout <<setw(50);
          char guesses[4];
        int hadaf[4]={secondplayerfirstnum,secondplayersecondnum,secondplayerthirdnum,secondplayerfourthnum};
        int hads[4]={firstguess,secondguess,thirdguess,fourthguess};
        char z;
        for(int i=0;i<4;i++)
        {
           for(int j=0;j<4;j++)
              {
                 if(hadaf[j]==hads[i])
                 {
                    z='T';
                    break;
                 }

                 else
                {
                   z='0';
                }
             }

          if(z=='T')
          {
             if(hadaf[i]==hads[i])
                z='T';

             else
                z='F';
          }

          else
            z='0';

          if(z=='F')
            score=--score;


          cout << "(" << z << ")   ";
          guesses[i]=z;
          Table[counter] [i]=z;
        }
        if(guesses[0]=='T'&&guesses[1]=='T'&&guesses[2]=='T'&&guesses[3]=='T')
        {
            cout << endl << "VICTORY!!" << endl;
           cout << "Your score is: " << score << endl;
           scores[scoressize]=score;
           system("pause");
           system("cls");
           score=100;
           mainmenu();
           scoressize=++scoressize;
           break;

        }

        else if(counter==11)
        {
            cout << endl << "GAME OVER!!" << endl;
            cout << "Your score is: 0" << endl;
            score=0;
            scores[scoressize]=score;
            system("pause");
            system("cls");
            score=100;
            scoressize=++scoressize;
            mainmenu();
        }

        else
        {
            continue;
        }
   }

}


int playerguessprinter(int first, int second, int third, int fourth)
{
    cout << setw(30);
    for(int i=0;i<4;i++)
    {
        if(i==0)
        {
           for(int i=1;i<61;i++)
           {
              cout << "$";
           }
        }

        else if(i==1)
        {
            cout << setw(30) << "$" << setw(20) << first << " ~~ " << second << " ~~ " << third << " ~~ " << fourth << setw(24) << "$";
        }

        else if(i==2)
        {
            cout << setw(30) << "$";
            for(int i=0;i<58;++i)
            {
                cout << "-";
            }
            cout << setw(1) << "$";
        }

        cout << endl;
    }
return 0;
}



void submenu(void)
{
    whenopencontmenu=2;
    int submenunumber;
    for(int i=0;i<10;i++)
    {
      cout << setw(40);
      if(i%4==0)
      {
      for(int b=1;b<42;++b)
        cout << "@";
      }

      else if((i-2)%4==0)
      {
          for(int b=1;b<41;++b)
          {
            if(b==1)
            cout << setw(40) << "@";


            else if(b==9&&i==2)
            {
                cout << "     1-Back to Main Menu        @";
            }

            else if(b==9&&i==6)
            {
                cout << "           2-Exit               @";
            }



            else
                cout << " ";
          }
      }
      else
        continue;

   cout << endl;
    }

    cin >> submenunumber ;
    if(submenunumber==1)
    {
      system("cls");
        mainmenucont();
    }

    else if(submenunumber==2)
    {
        system("cls");
        exit(2);
    }

    else
    {
        system("cls");
        cout <<"Please enter the correct number" << endl;
        submenu();
    }

}


void guide(void)
{
    int a;
    cout << setw(40) << "How does this game works? you have to guess the number which is chosen by computer \n or another player. you have maximum of 12 chances \n for every number has right position you will get the T output, for every numbers which has wrong position you will get the F output, and \n for every numberr which is not in the chosen numbers you will get the 0 output " << endl;
    cout << "1- You can start a single player or two player game" << endl;
    cout << "2- You can resume the last game feom where you left " << endl;
    cout << "3- Shows the last or current game's guesses" << endl;
    cout << "4- Shows the history of your scores" << endl;
    cout << "5- Helps you to understand the game" << endl;
    while(1)
    {
        cin >> a;
        if(a==-1)
        {
            system("cls");
            if(whenopencontmenu==2)
            {
            mainmenucont();
            }
            else
            {
                mainmenu();
            }
            break;
        }

        else
        {
            system("cls");
             cout << " ERROR! Please enter a correct number." << endl;
             guide();

        }
    }
}


void table( int[] [columns])
{
    int a,i;
    if(whenopencontmenu==2)
    {
    for( i=0;i<rows;++i)
    {
        if(i<countercontinue-1)
        {
            cout << setw(50);
        cout << "Stage:" << i+1 << " :";
        for(int j=0;j<columns;++j)
        {
            cout << Table[i] [j] << "~~";
        }
        }
cout << endl;
    }
    }
    else
    {
       for( i=0;i<rows;++i)
    {
        if(i<counter+1)
        {
            cout << setw(50);
        cout << "Stage:" << i+1 << " :";
        for(int j=0;j<columns;++j)
        {
            cout << Table[i] [j] << "~~";
        }
        }
cout << endl;
    }
    }

    cin >> a;
    exitchecker(a);

}

void scoreboard(int [], int y)
{
    int a;
    cout << setw(40);
    cout << "Enter -1 to back to main menu" << endl;
    for(int i=0;i<y;++i)
    {
        cout << setw(40);
        cout << " Game " << i+1 << " : " << scores[i] << endl;
    }

    cin >> a;
    exitchecker(a);
}


void exitchecker(int z)
{
    if(z==-1)
    {
        system("cls");
        if(whenopencontmenu==2)
            {
            mainmenucont();
            }
            else
            {
                mainmenu();
            }
    }

    else
    {
        cout << "Please enter the correcy number";
        cin >> z;
        exitchecker(z);
    }
}





void continuegame(int a)
{
    int scorecont=score;
  if(a==1)
  {
      int firstguesscont,secondguesscont,thirdguesscont,fourthguesscont;
      cout << setw(45);
    for(int i=0;i<5;++i)
    {

        if(i==0)
        {
        for(int i=0;i<21;++i)
        {
           cout <<"x";
        }
        }
        else if(i==4)
        {
            cout <<setw(45);
         for(int i=0;i<21;++i)
        {
           cout <<"x";
        }
        }
        else if(i==2)
        {
          cout << setw(48);
          cout << "x   " << targetguess[0] << " ~ " << targetguess[1] << " ~ " << targetguess[2] << " ~ " << targetguess[3] << "   x";
        }
        else
        {
            cout << setw(45) << "x" << setw(20) << "x";
        }
        cout << endl;
    }
    cout << "Enter -1  to open submenu" << endl;
    cout << "plz enter ue guesses" << endl << score;
    for(countercontinue=(counter+1);countercontinue<12;countercontinue++)
    {


          while(1)
          {
              cin >> firstguesscont;
              if(firstguesscont==1||firstguesscont==2||firstguesscont==3||firstguesscont==4||firstguesscont==5||firstguesscont==6)
              {
                  Table[countercontinue-1] [0]=firstguesscont;
                break;
              }
              else if(firstguesscont==-1)
              {
                  system("cls");
              submenu();
              }

              cout << "plz enter num bet 1~6" << endl;

          }


             while(1)
             {
                 cin >> secondguesscont;
                  if((secondguesscont==1||secondguesscont==2||secondguesscont==3||secondguesscont==4||secondguesscont==5||secondguesscont==6)&&(firstguesscont!=secondguesscont))
                  {
                      Table[countercontinue-1] [1]=secondguesscont;
                    break;
                  }
                  else if(secondguesscont==-1)
                  {
                      system("cls");
              submenu();
                  }
                  cout << "plz enter a number between 1~6 or Non-repetitive" << endl;

             }


           while(1)
             {
                 cin >> thirdguesscont;
                  if((thirdguesscont==1||thirdguesscont==2||thirdguesscont==3||thirdguesscont==4||thirdguesscont==5||thirdguesscont==6)&&(secondguesscont!=thirdguesscont)&&(firstguesscont!=thirdguesscont))
                  {
                      Table[countercontinue-1] [2]=thirdguesscont;
                    break;
                  }
                  else if(thirdguesscont==-1)
                  {
                      system("cls");
              submenu();
                  }
                  cout << "plz enter a number between 1~6 or Non-repetitive" << endl;
             }


           while(1)
             {
                  cin >> fourthguesscont;
                  if((fourthguesscont==1||fourthguesscont==2||fourthguesscont==3||fourthguesscont==4||fourthguesscont==5||fourthguesscont==6)&&(thirdguesscont!=fourthguesscont)&&(firstguesscont!=fourthguesscont)&&(secondguesscont!=fourthguesscont))
                  {
                      Table[countercontinue-1] [3]=fourthguesscont;
                      break;
                  }
                  else if(fourthguesscont==-1)
                  {
                     system("cls");
              submenu();
                  }
                  cout << "plz enter a number between 1~6 or Non-repetitive" << endl;
             }

          playerguessprinter(firstguesscont ,secondguesscont ,thirdguesscont ,fourthguesscont);
          cout <<setw(50);
          char guesses[4];
        int hadaf[4]={targetguess[0],targetguess[1],targetguess[2],targetguess[3]};
        int hads[4]={firstguesscont,secondguesscont,thirdguesscont,fourthguesscont};
        char z;
        static int score=100;
        for(int i=0;i<4;i++)
        {
           for(int j=0;j<4;j++)
              {
                 if(hadaf[j]==hads[i])
                 {
                    z='T';
                    break;
                 }

                 else
                {
                   z='0';
                }
             }

          if(z=='T')
          {
             if(hadaf[i]==hads[i])
                z='T';

             else
                z='F';
          }

          else
            z='0';

          if(z=='F')
            scorecont=--scorecont;

          cout << "(" << z << ")   ";
          guesses[i]=z;
        }
        if(guesses[0]=='T'&&guesses[1]=='T'&&guesses[2]=='T'&&guesses[3]=='T')
        {
           cout << endl << "VICTORY!!" << endl;
           cout << "Your score is: " << scorecont << endl;
           scores[scoressize]=scorecont;
           whenopencontmenu=1;
           system("pause");
           system("cls");
           score=100;
           scoressize=++scoressize;
           mainmenu();

           break;
        }

        else if(countercontinue==11)
        {
            cout << endl << "GAME OVER!!" << endl;
            cout << "Your score is: 0" << endl;
            scores[scoressize]=score;
            whenopencontmenu=1;
            system("pause");
            system("cls");
            score=100;
            scoressize=++scoressize;
            mainmenu();
        }

        else
        {
            continue;
        }

}
  }


  else if(a==2)
  {
      int firstguesscont,secondguesscont,thirdguesscont,fourthguesscont;
      cout << setw(45);
    for(int i=0;i<5;++i)
    {
        if(i==0)
        {
        for(int i=0;i<21;++i)
        {
           cout <<"x";
        }
        }
        else if(i==4)
        {
            cout <<setw(45);
         for(int i=0;i<21;++i)
        {
           cout <<"x";
        }
        }
        else if(i==2)
        {
          cout << setw(48);
          cout << "x   " << targetguess[0] << " ~ " << targetguess[1] << " ~ " << targetguess[2] << " ~ " << targetguess[3] << "   x";
        }
        else
        {
            cout << setw(45) << "x" << setw(20) << "x";
        }
        cout << endl;
    }
    cout << "Enter -1  to open submenu" << endl;
    cout << "plz enter ue guesses" << endl;
    for(countercontinue=(counter+1);countercontinue<12;countercontinue++)
    {


          while(1)
          {
              cin >> firstguesscont;
              if(firstguesscont==1||firstguesscont==2||firstguesscont==3||firstguesscont==4||firstguesscont==5||firstguesscont==6)
              {
                  Table[countercontinue-1] [0]=firstguesscont;
                break;
              }
              else if(firstguesscont==-1)
              {
                  system("cls");
              submenu();
              }

              cout << "plz enter num bet 1~6" << endl;

          }


             while(1)
             {
                 cin >> secondguesscont;
                  if((secondguesscont==1||secondguesscont==2||secondguesscont==3||secondguesscont==4||secondguesscont==5||secondguesscont==6)&&(firstguesscont!=secondguesscont))
                  {
                      Table[countercontinue-1] [1]=secondguesscont;
                    break;
                  }
                  else if(secondguesscont==-1)
                  {
                      system("cls");
              submenu();

                  }
                  cout << "plz enter a number between 1~6 or Non-repetitive" << endl;

             }


           while(1)
             {
                 cin >> thirdguesscont;
                  if((thirdguesscont==1||thirdguesscont==2||thirdguesscont==3||thirdguesscont==4||thirdguesscont==5||thirdguesscont==6)&&(secondguesscont!=thirdguesscont)&&(firstguesscont!=thirdguesscont))
                  {
                      Table[countercontinue-1] [2]=thirdguesscont;
                    break;
                  }
                  else if(thirdguesscont==-1)
                  {
                      system("cls");
              submenu();

                  }
                  cout << "plz enter a number between 1~6 or Non-repetitive" << endl;
             }


           while(1)
             {
                  cin >> fourthguesscont;
                  if((fourthguesscont==1||fourthguesscont==2||fourthguesscont==3||fourthguesscont==4||fourthguesscont==5||fourthguesscont==6)&&(thirdguesscont!=fourthguesscont)&&(firstguesscont!=fourthguesscont)&&(secondguesscont!=fourthguesscont))
                  {
                      Table[countercontinue-1] [3]=fourthguesscont;
                      break;
                  }
                  else if(fourthguesscont==-1)
                  {
                      system("cls");
              submenu();
                  }
                  cout << "plz enter a number between 1~6 or Non-repetitive" << endl;
             }

          playerguessprinter(firstguesscont ,secondguesscont ,thirdguesscont ,fourthguesscont);
          cout <<setw(50);
          char guesses[4];
        int hadaf[4]={targetguess[0],targetguess[1],targetguess[2],targetguess[3]};
        int hads[4]={firstguesscont,secondguesscont,thirdguesscont,fourthguesscont};
        char z;
        for(int i=0;i<4;i++)
        {
           for(int j=0;j<4;j++)
              {
                 if(hadaf[j]==hads[i])
                 {
                    z='T';
                    break;
                 }

                 else
                {
                   z='0';
                }
             }

          if(z=='T')
          {
             if(hadaf[i]==hads[i])
                z='T';

             else
                z='F';
          }

          else
            z='0';

          if(z=='F')
            scorecont=--scorecont;

          cout << "(" << z << ")   ";
          guesses[i]=z;
        }
        if(guesses[0]=='T'&&guesses[1]=='T'&&guesses[2]=='T'&&guesses[3]=='T')
        {
           cout << endl << "VICTORY!!" << endl;
           cout << "Your score is: " << scorecont << endl;
           scores[scoressize]=scorecont;
           whenopencontmenu=1;
           system("pause");
           system("cls");
           score=100;
           scoressize=++scoressize;
           mainmenu();

           break;
        }

        else if(countercontinue==11)
        {
            cout << endl << "GAME OVER!!" << endl;
            cout << "Your score is: 0" << endl;
            scores[scoressize]=score;
            whenopencontmenu=1;
            system("pause");
            system("cls");
            score=100;
            scoressize=++scoressize;
            mainmenu();
        }

        else
        {
            continue;
        }

}
  }
}

