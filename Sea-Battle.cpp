#include <iostream>

using namespace std;
//////////////////////////////////////////////////////////////////////////////
    char map01[10][10] = {{'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'}};
/*##########################################################################*/
    char map02[10][10] = {{'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                          {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                          {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                          {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                          {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                          {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                          {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                          {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                          {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                          {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'}};
/*##########################################################################*/
     char map1[10][10] = {{'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'}};
/*##########################################################################*/
     char map2[10][10] = {{'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                          {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                          {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                          {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                          {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                          {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                          {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                          {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                          {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                          {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'}};
//////////////////////////////////////////////////////////////////////////////
    void cleanboard()
    {
     for (int i = 0; i < 60; i++)
     {
      cout<<endl;
     }
    }
///////////////////////////////////////////////////////////////////////////////////////////
     void Map1()
    {
       cout<<"             КАРТА"<<endl;
     cout<<"\n     1 2 3 4 5 6 7 8 9 10"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 1  |"<<map1[0][0]<<"|"<<map1[0][1]<<"|"<<map1[0][2]<<"|"<<map1[0][3]<<"|"<<map1[0][4]<<"|"<<map1[0][5]<<"|"<<map1[0][6]<<"|"<<map1[0][7]<<"|"<<map1[0][8]<<"|"<<map1[0][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 2  |"<<map1[1][0]<<"|"<<map1[1][1]<<"|"<<map1[1][2]<<"|"<<map1[1][3]<<"|"<<map1[1][4]<<"|"<<map1[1][5]<<"|"<<map1[1][6]<<"|"<<map1[1][7]<<"|"<<map1[1][8]<<"|"<<map1[1][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 3  |"<<map1[2][0]<<"|"<<map1[2][1]<<"|"<<map1[2][2]<<"|"<<map1[2][3]<<"|"<<map1[2][4]<<"|"<<map1[2][5]<<"|"<<map1[2][6]<<"|"<<map1[2][7]<<"|"<<map1[2][8]<<"|"<<map1[2][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 4  |"<<map1[3][0]<<"|"<<map1[3][1]<<"|"<<map1[3][2]<<"|"<<map1[3][3]<<"|"<<map1[3][4]<<"|"<<map1[3][5]<<"|"<<map1[3][6]<<"|"<<map1[3][7]<<"|"<<map1[3][8]<<"|"<<map1[3][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 5  |"<<map1[4][0]<<"|"<<map1[4][1]<<"|"<<map1[4][2]<<"|"<<map1[4][3]<<"|"<<map1[4][4]<<"|"<<map1[4][5]<<"|"<<map1[4][6]<<"|"<<map1[4][7]<<"|"<<map1[4][8]<<"|"<<map1[4][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 6  |"<<map1[5][0]<<"|"<<map1[5][1]<<"|"<<map1[5][2]<<"|"<<map1[5][3]<<"|"<<map1[5][4]<<"|"<<map1[5][5]<<"|"<<map1[5][6]<<"|"<<map1[5][7]<<"|"<<map1[5][8]<<"|"<<map1[5][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 7  |"<<map1[6][0]<<"|"<<map1[6][1]<<"|"<<map1[6][2]<<"|"<<map1[6][3]<<"|"<<map1[6][4]<<"|"<<map1[6][5]<<"|"<<map1[6][6]<<"|"<<map1[6][7]<<"|"<<map1[6][8]<<"|"<<map1[6][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 8  |"<<map1[7][0]<<"|"<<map1[7][1]<<"|"<<map1[7][2]<<"|"<<map1[7][3]<<"|"<<map1[7][4]<<"|"<<map1[7][5]<<"|"<<map1[7][6]<<"|"<<map1[7][7]<<"|"<<map1[7][8]<<"|"<<map1[7][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 9  |"<<map1[8][0]<<"|"<<map1[8][1]<<"|"<<map1[8][2]<<"|"<<map1[8][3]<<"|"<<map1[8][4]<<"|"<<map1[8][5]<<"|"<<map1[8][6]<<"|"<<map1[8][7]<<"|"<<map1[8][8]<<"|"<<map1[8][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 10 |"<<map1[9][0]<<"|"<<map1[9][1]<<"|"<<map1[9][2]<<"|"<<map1[9][3]<<"|"<<map1[9][4]<<"|"<<map1[9][5]<<"|"<<map1[9][6]<<"|"<<map1[9][7]<<"|"<<map1[9][8]<<"|"<<map1[9][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    }
    void Map2()
    {
       cout<<"             КАРТА"<<endl;
     cout<<"\n     1 2 3 4 5 6 7 8 9 10"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 1  |"<<map2[0][0]<<"|"<<map2[0][1]<<"|"<<map2[0][2]<<"|"<<map2[0][3]<<"|"<<map2[0][4]<<"|"<<map2[0][5]<<"|"<<map2[0][6]<<"|"<<map2[0][7]<<"|"<<map2[0][8]<<"|"<<map2[0][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 2  |"<<map2[1][0]<<"|"<<map2[1][1]<<"|"<<map2[1][2]<<"|"<<map2[1][3]<<"|"<<map2[1][4]<<"|"<<map2[1][5]<<"|"<<map2[1][6]<<"|"<<map2[1][7]<<"|"<<map2[1][8]<<"|"<<map2[1][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 3  |"<<map2[2][0]<<"|"<<map2[2][1]<<"|"<<map2[2][2]<<"|"<<map2[2][3]<<"|"<<map2[2][4]<<"|"<<map2[2][5]<<"|"<<map2[2][6]<<"|"<<map2[2][7]<<"|"<<map2[2][8]<<"|"<<map2[2][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 4  |"<<map2[3][0]<<"|"<<map2[3][1]<<"|"<<map2[3][2]<<"|"<<map2[3][3]<<"|"<<map2[3][4]<<"|"<<map2[3][5]<<"|"<<map2[3][6]<<"|"<<map2[3][7]<<"|"<<map2[3][8]<<"|"<<map2[3][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 5  |"<<map2[4][0]<<"|"<<map2[4][1]<<"|"<<map2[4][2]<<"|"<<map2[4][3]<<"|"<<map2[4][4]<<"|"<<map2[4][5]<<"|"<<map2[4][6]<<"|"<<map2[4][7]<<"|"<<map2[4][8]<<"|"<<map2[4][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 6  |"<<map2[5][0]<<"|"<<map2[5][1]<<"|"<<map2[5][2]<<"|"<<map2[5][3]<<"|"<<map2[5][4]<<"|"<<map2[5][5]<<"|"<<map2[5][6]<<"|"<<map2[5][7]<<"|"<<map2[5][8]<<"|"<<map2[5][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 7  |"<<map2[6][0]<<"|"<<map2[6][1]<<"|"<<map2[6][2]<<"|"<<map2[6][3]<<"|"<<map2[6][4]<<"|"<<map2[6][5]<<"|"<<map2[6][6]<<"|"<<map2[6][7]<<"|"<<map2[6][8]<<"|"<<map2[6][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 8  |"<<map2[7][0]<<"|"<<map2[7][1]<<"|"<<map2[7][2]<<"|"<<map2[7][3]<<"|"<<map2[7][4]<<"|"<<map2[7][5]<<"|"<<map2[7][6]<<"|"<<map2[7][7]<<"|"<<map2[7][8]<<"|"<<map2[7][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 9  |"<<map2[8][0]<<"|"<<map2[8][1]<<"|"<<map2[8][2]<<"|"<<map2[8][3]<<"|"<<map2[8][4]<<"|"<<map2[8][5]<<"|"<<map2[8][6]<<"|"<<map2[8][7]<<"|"<<map2[8][8]<<"|"<<map2[8][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 10 |"<<map2[9][0]<<"|"<<map2[9][1]<<"|"<<map2[9][2]<<"|"<<map2[9][3]<<"|"<<map2[9][4]<<"|"<<map2[9][5]<<"|"<<map2[9][6]<<"|"<<map2[9][7]<<"|"<<map2[9][8]<<"|"<<map2[9][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void map10()
    {
     cout<<"\n     1 2 3 4 5 6 7 8 9 10"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 1  |"<<map01[0][0]<<"|"<<map01[0][1]<<"|"<<map01[0][2]<<"|"<<map01[0][3]<<"|"<<map01[0][4]<<"|"<<map01[0][5]<<"|"<<map01[0][6]<<"|"<<map01[0][7]<<"|"<<map01[0][8]<<"|"<<map01[0][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 2  |"<<map01[1][0]<<"|"<<map01[1][1]<<"|"<<map01[1][2]<<"|"<<map01[1][3]<<"|"<<map01[1][4]<<"|"<<map01[1][5]<<"|"<<map01[1][6]<<"|"<<map01[1][7]<<"|"<<map01[1][8]<<"|"<<map01[1][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 3  |"<<map01[2][0]<<"|"<<map01[2][1]<<"|"<<map01[2][2]<<"|"<<map01[2][3]<<"|"<<map01[2][4]<<"|"<<map01[2][5]<<"|"<<map01[2][6]<<"|"<<map01[2][7]<<"|"<<map01[2][8]<<"|"<<map01[2][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 4  |"<<map01[3][0]<<"|"<<map01[3][1]<<"|"<<map01[3][2]<<"|"<<map01[3][3]<<"|"<<map01[3][4]<<"|"<<map01[3][5]<<"|"<<map01[3][6]<<"|"<<map01[3][7]<<"|"<<map01[3][8]<<"|"<<map01[3][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 5  |"<<map01[4][0]<<"|"<<map01[4][1]<<"|"<<map01[4][2]<<"|"<<map01[4][3]<<"|"<<map01[4][4]<<"|"<<map01[4][5]<<"|"<<map01[4][6]<<"|"<<map01[4][7]<<"|"<<map01[4][8]<<"|"<<map01[4][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 6  |"<<map01[5][0]<<"|"<<map01[5][1]<<"|"<<map01[5][2]<<"|"<<map01[5][3]<<"|"<<map01[5][4]<<"|"<<map01[5][5]<<"|"<<map01[5][6]<<"|"<<map01[5][7]<<"|"<<map01[5][8]<<"|"<<map01[5][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 7  |"<<map01[6][0]<<"|"<<map01[6][1]<<"|"<<map01[6][2]<<"|"<<map01[6][3]<<"|"<<map01[6][4]<<"|"<<map01[6][5]<<"|"<<map01[6][6]<<"|"<<map01[6][7]<<"|"<<map01[6][8]<<"|"<<map01[6][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 8  |"<<map01[7][0]<<"|"<<map01[7][1]<<"|"<<map01[7][2]<<"|"<<map01[7][3]<<"|"<<map01[7][4]<<"|"<<map01[7][5]<<"|"<<map01[7][6]<<"|"<<map01[7][7]<<"|"<<map01[7][8]<<"|"<<map01[7][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 9  |"<<map01[8][0]<<"|"<<map01[8][1]<<"|"<<map01[8][2]<<"|"<<map01[8][3]<<"|"<<map01[8][4]<<"|"<<map01[8][5]<<"|"<<map01[8][6]<<"|"<<map01[8][7]<<"|"<<map01[8][8]<<"|"<<map01[8][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 10 |"<<map01[9][0]<<"|"<<map01[9][1]<<"|"<<map01[9][2]<<"|"<<map01[9][3]<<"|"<<map01[9][4]<<"|"<<map01[9][5]<<"|"<<map01[9][6]<<"|"<<map01[9][7]<<"|"<<map01[9][8]<<"|"<<map01[9][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    }
/*########################################################################################################################################################################################################*/
    void map20()
    {
     cout<<"\n     1 2 3 4 5 6 7 8 9 10"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 1  |"<<map02[0][0]<<"|"<<map02[0][1]<<"|"<<map02[0][2]<<"|"<<map02[0][3]<<"|"<<map02[0][4]<<"|"<<map02[0][5]<<"|"<<map02[0][6]<<"|"<<map02[0][7]<<"|"<<map02[0][8]<<"|"<<map02[0][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 2  |"<<map02[1][0]<<"|"<<map02[1][1]<<"|"<<map02[1][2]<<"|"<<map02[1][3]<<"|"<<map02[1][4]<<"|"<<map02[1][5]<<"|"<<map02[1][6]<<"|"<<map02[1][7]<<"|"<<map02[1][8]<<"|"<<map02[1][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 3  |"<<map02[2][0]<<"|"<<map02[2][1]<<"|"<<map02[2][2]<<"|"<<map02[2][3]<<"|"<<map02[2][4]<<"|"<<map02[2][5]<<"|"<<map02[2][6]<<"|"<<map02[2][7]<<"|"<<map02[2][8]<<"|"<<map02[2][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 4  |"<<map02[3][0]<<"|"<<map02[3][1]<<"|"<<map02[3][2]<<"|"<<map02[3][3]<<"|"<<map02[3][4]<<"|"<<map02[3][5]<<"|"<<map02[3][6]<<"|"<<map02[3][7]<<"|"<<map02[3][8]<<"|"<<map02[3][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 5  |"<<map02[4][0]<<"|"<<map02[4][1]<<"|"<<map02[4][2]<<"|"<<map02[4][3]<<"|"<<map02[4][4]<<"|"<<map02[4][5]<<"|"<<map02[4][6]<<"|"<<map02[4][7]<<"|"<<map02[4][8]<<"|"<<map02[4][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 6  |"<<map02[5][0]<<"|"<<map02[5][1]<<"|"<<map02[5][2]<<"|"<<map02[5][3]<<"|"<<map02[5][4]<<"|"<<map02[5][5]<<"|"<<map02[5][6]<<"|"<<map02[5][7]<<"|"<<map02[5][8]<<"|"<<map02[5][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 7  |"<<map02[6][0]<<"|"<<map02[6][1]<<"|"<<map02[6][2]<<"|"<<map02[6][3]<<"|"<<map02[6][4]<<"|"<<map02[6][5]<<"|"<<map02[6][6]<<"|"<<map02[6][7]<<"|"<<map02[6][8]<<"|"<<map02[6][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 8  |"<<map02[7][0]<<"|"<<map02[7][1]<<"|"<<map02[7][2]<<"|"<<map02[7][3]<<"|"<<map02[7][4]<<"|"<<map02[7][5]<<"|"<<map02[7][6]<<"|"<<map02[7][7]<<"|"<<map02[7][8]<<"|"<<map02[7][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 9  |"<<map02[8][0]<<"|"<<map02[8][1]<<"|"<<map02[8][2]<<"|"<<map02[8][3]<<"|"<<map02[8][4]<<"|"<<map02[8][5]<<"|"<<map02[8][6]<<"|"<<map02[8][7]<<"|"<<map02[8][8]<<"|"<<map02[8][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    cout<<" 10 |"<<map02[9][0]<<"|"<<map02[9][1]<<"|"<<map02[9][2]<<"|"<<map02[9][3]<<"|"<<map02[9][4]<<"|"<<map02[9][5]<<"|"<<map02[9][6]<<"|"<<map02[9][7]<<"|"<<map02[9][8]<<"|"<<map02[9][9]<<"|"<<endl;
    cout<<"    ---------------------"<<endl;
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int MapGamer1(int move11, int move12)
    {
     map01[move11 - 1][move12 - 1] = '#';
     return move11, move12;
    }
//////////////////////////////////////////////////////////////////////////
    int MapGamer2(int move21, int move22)
    {
     map02[move21 - 1][move22 - 1] = '#';
     return move21, move22;
    }
//////////////////////////////////////////////////////////////////////////

int main()
{
    setlocale(LC_ALL, "");

    int win1 = 0;
    int win2 = 0;

    string name1;
    string name2;

    cout<<"                      МОРСКОЙ БОЙ"<<endl;
    cout<<"\n  Виды кораблей: "<<endl;
    cout<<"  1-(1)####,"<<endl
        <<"  2-(2)###,"<<endl
        <<"  3-(3)##,"<<endl
        <<"  4-(4)#."<<endl;
    cout<<"\n  X - Это попадание."<<endl;
    cout<<"  O - Это промах."<<endl;
    cout<<"\n  Игрок 1"<<endl;
    cout<<"  Введите ник: ";
     cin>>name1;
    cout<<"\n  Игрок 2"<<endl;
    cout<<"  Введите ник: ";
     cin>>name2;
/////////////////////////////////////////////////////////////////////////////////////////
    for (int i = 0; i < 20; i++)
    {
        int x, y;
     cleanboard();
     map10();
     cout<<"  "<<i + 1<<"-Игрок "<<name1<<endl;
     cout<<"  Введите Х: ";
      cin>>x;
     cout<<"  Введите Y: ";
      cin>>y;
      if (x == 101)
      {
          int CtrlZ1, CtrlZ2;
          int Gg;
          cleanboard();
          map10();
          cout<<"    Игрок "<<name1<<endl;
        cout<<"   Введите Х: ";
         cin>>CtrlZ1;
        cout<<"   Введите Y: ";
         cin>>CtrlZ2;
        map01[CtrlZ1 - 1][CtrlZ2 - 1] = '+';
        cleanboard();
        map10();
        cout<<"  Продолжить: ";
         cin>>Gg;
      }
      while (x > 10 || x < 1 || y > 10 || y < 1 || map01[x - 1][y - 1] != '+')
    {
        cleanboard();
        map10();
     cout<<"   ERROR!"<<endl;
     cout<<"   Игрок "<<name1<<endl;
      cout<<"   Введите снова: "<<endl;
       cout<<"   Введите X: ";
       cin>>x;
      cout<<"   Введите Y: ";
       cin>>y;
       if (x == 101)
      {
          int CtrlZ1, CtrlZ2;
          int Gg;
          cleanboard();
          map10();
          cout<<"   Игрок "<<name1<<endl;
          cout<<"   Введите Х: ";
           cin>>CtrlZ1;
          cout<<"   Введите Y: ";
           cin>>CtrlZ2;
        map01[CtrlZ1 - 1][CtrlZ2 - 1] = '+';
        cleanboard();
        map10();
        cout<<"  Продолжить: ";
         cin>>Gg;
      }
    }
      MapGamer1(x, y);
    }
////////////////////////////////////////////////////////////
    for (int i = 0; i < 20; i++)
    {
        int x1, y1;
     cleanboard();
     map20();
     cout<<"  "<<i + 1<<"-Игрок "<<name2<<endl;
     cout<<"  Введите Х: ";
      cin>>x1;
     cout<<"  Введите Y: ";
      cin>>y1;
      if (x1 == 101)
      {
          int CtrlZ1, CtrlZ2;
          int Gg;
          cleanboard();
          map20();
          cout<<"  Игрок "<<name2<<endl;
        cout<<"   Введите Х: ";
         cin>>CtrlZ1;
        cout<<"   Введите Y: ";
         cin>>CtrlZ2;
        map02[CtrlZ1 - 1][CtrlZ2 - 1] = '-';
        cleanboard();
        map20();
        cout<<"   Продолжить: ";
         cin>>Gg;
      }
      while (x1 > 10 || x1 < 1 || y1 > 10 || y1 < 1 || map02[x1 - 1][y1 - 1] != '-')
    {
        cleanboard();
        map20();
     cout<<"  ERROR!"<<endl;
     cout<<"  Игрок "<<name2<<endl;
      cout<<"  Введите снова: "<<endl;
       cout<<"  Введите X: ";
       cin>>x1;
      cout<<"  Введите Y: ";
       cin>>y1;
       if (x1 == 101)
      {
          int CtrlZ1, CtrlZ2;
          int Gg;
          cleanboard();
          map20();
          cout<<"  Игрок "<<name2<<endl;
        cout<<"  Введите Х: ";
         cin>>CtrlZ1;
        cout<<"  Введите Y: ";
         cin>>CtrlZ2;
        map02[CtrlZ1 - 1][CtrlZ2 - 1] = '-';
        cleanboard();
        map20();
        cout<<"  Продолжить: ";
         cin>>Gg;
      }
    }
      MapGamer2(x1, y1);
    }
///////////////////////////////////////////////////////////////////////////////////////
    for (int i = 0; i < 200; i++)
    {
     if (i % 2 == 0)
     {
         int X1, Y1;
      cleanboard();
      Map2();
      cout<<"  Счет: "<<win1<<endl;
      cout<<"  Игрок "<<name1<<endl;
      cout<<"  Аттакуйте!"<<endl;
      cout<<"  Введите Х: ";
       cin>>X1;
      cout<<"  Введите Y: ";
       cin>>Y1;
       if (X1 == 342 && Y1 == 213)
       {
          int Pr;
          cleanboard();
          map20();
         cout<<"  Продолжить: ";
          cin>>Pr;
       }
     while (X1 > 10 || X1 < 1 || Y1 > 10 || Y1 < 1 || map2[X1 - 1][Y1 - 1] != '-')
     {
         cleanboard();
         Map2();
        cout<<"  Error!"<<endl;
        cout<<"  Счет: "<<win1<<endl;
        cout<<"  Игрок "<<name1<<endl;
        cout<<"  Введите снова: "<<endl;
         cout<<"  Введите Х: ";
          cin>>X1;
         cout<<"  Введите Y: ";
          cin>>Y1;
     }
      if (map02[X1 - 1][Y1 - 1] == '#')
      {
          win1++;
        map2[X1 - 1][Y1 - 1] = 'X';
        if (win1 == 20)
        {
            cleanboard();
            Map2();
          cout<<"  Счет: "<<win1<<endl;
          cout<<"  Игрок "<<name1<<endl;
          cout<<"  ПОБЕДИЛ!!!"<<endl;
           return 0;
        }
        else
        {
            while (map2[X1 - 1][Y1 - 1] != 'O')
            {
                cleanboard();
                Map2();
              cout<<"  Счет: "<<win1<<endl;
              cout<<"  Игрок "<<name1<<endl;
             cout<<"  Введите снова: "<<endl;
              cout<<"  Введите Х: ";
               cin>>X1;
              cout<<"  Введите Y: ";
               cin>>Y1;
               while (X1 > 10 || X1 < 1 || Y1 > 10 || Y1 < 1 || map2[X1 - 1][Y1 - 1] != '-')
               {
                   cleanboard();
                   Map2();
                 cout<<"  Error!"<<endl;
                 cout<<"  Счет: "<<win1<<endl;
                 cout<<"  Игрок "<<name1<<endl;
                  cout<<"  Введите снова: "<<endl;
                   cout<<"  Введите Х: ";
                    cin>>X1;
                   cout<<"  Введите Y: ";
                    cin>>Y1;
               }
               if (map02[X1 - 1][Y1 - 1] == '#')
               {
                 win1++;
                 map2[X1 - 1][Y1 - 1] = 'X';
                 if (win1 == 20)
                 {
                     cleanboard();
                     Map2();
                   cout<<"  Счет: "<<win1<<endl;
                   cout<<"  Игрок "<<name1<<endl;
                   cout<<"  ПОБЕДИЛ!!!"<<endl;
                    return 0;
                 }
               }
               else
               {
                   cleanboard();
                 int yes;
                map2[X1 - 1][Y1 - 1] = 'O';
                Map2();
                cout<<"  Продолжить, нажмите 1: ";
                 cin>>yes;
               }
        }
      }
      }
      else
      {
          cleanboard();
          int yes;
        map2[X1 - 1][Y1 - 1] = 'O';
        Map2();
        cout<<"  Продолжить, нажмите 1: ";
        cin>>yes;
      }
     }
////////////////////////////////////////////////////////////////////////////////////////////
     else
     {
      int X2, Y2;
      cleanboard();
      Map1();
      cout<<"  Счет: "<<win2<<endl;
      cout<<"  Игрок "<<name2<<endl;
      cout<<"  Аттакуйте!"<<endl;
      cout<<"  Введите Х: ";
       cin>>X2;
      cout<<"  Введите Y: ";
       cin>>Y2;
       if (X2 == 564 && Y2 == 435)
       {
           int Pr1;
         cleanboard();
         map10();
         cout<<"  Продолжить: ";
          cin>>Pr1;
       }
     while (X2 > 10 || X2 < 1 || Y2 > 10 || Y2 < 1 || map1[X2 - 1][Y2 - 1] != '+')
     {
         cleanboard();
         Map1();
        cout<<"  Error!"<<endl;
        cout<<"  Счет: "<<win2<<endl;
        cout<<"  Игрок "<<name2<<endl;
        cout<<"  Введите снова: "<<endl;
         cout<<"  Введите Х: ";
          cin>>X2;
         cout<<"  Введите Y: ";
          cin>>Y2;
          if (X2 == 564 && Y2 == 435)
          {
              int Pr1;
            cleanboard();
            map10();
            cout<<"  Продолжить: ";
             cin>>Pr1;
          }
     }
      if (map01[X2 - 1][Y2 - 1] == '#')
      {
          win2++;
        map1[X2 - 1][Y2 - 1] = 'X';
        if (win2 == 20)
        {
            cleanboard();
            Map1();
          cout<<"  Счет: "<<win2<<endl;
          cout<<"  Игрок "<<name2<<endl;
          cout<<"  Победил!!!"<<endl;
           return 0;
        }
        else
        {
          while (map1[X2 - 1][Y2 - 1] != 'O')
          {
              cleanboard();
              Map1();
              cout<<"  Счет: "<<win2<<endl;
              cout<<"  Игрок "<<name2<<endl;
            cout<<"  Введите снова: "<<endl;
             cout<<"  Введите Х: ";
              cin>>X2;
             cout<<"  Введите Y: ";
              cin>>Y2;
              while (X2 > 10 || X2 < 1 || Y2 > 10 || Y2 < 1 || map1[X2 - 1][Y2 - 1] != '+')
              {
                cleanboard();
                Map1();
                 cout<<"  Error!"<<endl;
                 cout<<"  Счет: "<<win2<<endl;
                 cout<<"  Игрок "<<name2<<endl;
                  cout<<"  Введите снова: "<<endl;
                  cout<<"  Введите Х: ";
                   cin>>X2;
                  cout<<"  Введите Y: ";
                   cin>>Y2;
              }
              if (map01[X2 - 1][Y2 - 1] == '#')
              {
                  win2++;
                 map1[X2 - 1][Y2 - 1] = 'X';
                 if (win2 == 20)
                 {
                  cleanboard();
                  Map1();
                   cout<<"  Счет: "<<win2<<endl;
                   cout<<"  Игрок "<<name2<<endl;
                   cout<<"  Победил!!!"<<endl;
                    return 0;
                 }
              }
              else
              {
                  cleanboard();
                int yes;
                 map1[X2 - 1][Y2 - 1] = 'O';
                 Map1();
                  cout<<"  Продолжить, нажмите 2: ";
                   cin>>yes;
               }
        }
      }
      }
      else
      {
          cleanboard();
          int yes;
        map1[X2 - 1][Y2 - 1] = 'O';
        Map1();
        cout<<"  Продолжить, нажмите 2: ";
        cin>>yes;
      }
     }
    }

    return 0;
}
