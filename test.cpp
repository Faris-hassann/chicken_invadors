#include <iostream>
#include <windows.h>
#include <dos.h>
#include <conio.h>
#include <ctime>

using namespace std;

// window
#define screen_width 100
#define screen_height 25
#define window 120

// postions
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

// global variable
int score = 0;
int carPos = window / 2;
char negma = '*';
char tal2a = '^';
char space = ' ';
char chicken1[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken3[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken5[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken7[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken9[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken11[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken13[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken15[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken17[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken19[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken21[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken23[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken25[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char ship[4][4] = { 
                    ' ', '*', '*', ' ', 
				    '*', '*', '*', '*', 
					' ', '*', '*', ' ',
					'*', '*', '*', '*'
                };                   


// functions
void gotoXY(int x , int y);
void draw_board();
void draw_car();
void game_engine();
void chickens_shape();
void instruction();
void eraseCar();
void rocket(int number);
void bullet();

int main()
{
    // varibles
    char number;

    // prompet to welcome the user
    cout << "-------------------------------------------------------------" << endl;
    cout << "-----------------------| start the game |--------------------" << endl;
    cout << "-------------------------------------------------------------\n\n" << endl;

    cout << "1: start the game\n"
         << "2: instruction\n"
         << "3: quit\n\n";

    cout << "Enter the number: ";
    cin >> number;

    switch (number)
    {
        case '1':
            game_engine();
            break;
        case '2':
            instruction();
            main();
            break;
        case '3':
            break;    
        default:
            game_engine();
            break;
    }      

    system("pause");
    return 0;
}

void gotoXY(int x, int y)
{
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}

void draw_board()
{
    for (int x = 0; x < screen_height ; x++)
    {
        for (int i = 0; i < 10; i++)
        {
            gotoXY(0+i ,x);
            cout << "##";
            gotoXY(screen_width-i , x);
            cout << "##";
        }
        cout << endl;
    }

    for (int i = 0; i < screen_height; i++)
    {
        gotoXY(window, i);
        cout << " ";
    }

    cout << endl;
}

void draw_car()
{
	for(int i=0; i<4; i++)
    {
		for(int j=0; j<4; j++)
        {
			gotoXY(j + carPos, i + 22);
            cout << ship[i][j];
		}
	}
}

void chickens_shape()
{
    gotoXY(14,0);
    cout << chicken1[0][0] << " " << chicken1[0][1];
    gotoXY(14,1);
    cout << chicken1[1][0] << " " << chicken1[1][1];

    gotoXY(26,0);
    cout << chicken3[0][0] << " " << chicken3[0][1];
    gotoXY(26,1);
    cout << chicken3[1][0] << " " << chicken3[1][1];

    gotoXY(38,0);
    cout << chicken5[0][0] << " " << chicken5[0][1];
    gotoXY(38,1);
    cout << chicken5[1][0] << " " << chicken5[1][1];

    gotoXY(50,0);
    cout << chicken7[0][0] << " " << chicken7[0][1];
    gotoXY(50,1);
    cout << chicken7[1][0] << " " << chicken7[1][1];

    gotoXY(62,0);
    cout << chicken9[0][0] << " " << chicken9[0][1];
    gotoXY(62,1);
    cout << chicken9[1][0] << " " << chicken9[1][1];

    gotoXY(74,0);
    cout << chicken11[0][0] << " " << chicken11[0][1];
    gotoXY(74,1);
    cout << chicken11[1][0] << " " << chicken11[1][1];

    gotoXY(86,0);
    cout << chicken13[0][0] << " " << chicken13[0][1];
    gotoXY(86,1);
    cout << chicken13[1][0] << " " << chicken13[1][1];

    // second line

    gotoXY(20,3);
    cout << chicken15[0][0] << " " << chicken15[0][1];
    gotoXY(20,4);
    cout << chicken15[1][0] << " " << chicken15[1][1];

    gotoXY(32,3);
    cout << chicken17[0][0] << " " << chicken17[0][1];
    gotoXY(32,4);
    cout << chicken17[1][0] << " " << chicken17[1][1];

    gotoXY(44,3);
    cout << chicken19[0][0] << " " << chicken19[0][1];
    gotoXY(44,4);
    cout << chicken19[1][0] << " " << chicken19[1][1];

    gotoXY(56,3);
    cout << chicken21[0][0] << " " << chicken21[0][1];
    gotoXY(56,4);
    cout << chicken21[1][0] << " " << chicken21[1][1];

    gotoXY(68,3);
    cout << chicken23[0][0] << " " << chicken23[0][1];
    gotoXY(68,4);
    cout << chicken23[1][0] << " " << chicken23[1][1];

    gotoXY(80,3);
    cout << chicken25[0][0] << " " << chicken25[0][1];
    gotoXY(80,4);
    cout << chicken25[1][0] << " " << chicken25[1][1];
}

void instruction()
{
    system("cls");
    cout <<  " you must kill all chickens to win the game \n"
		 << " press 'A' to move left\n"
		 << " press 'D' to move right\n"
	     << " press 'W' to move up \n"
		 << " press 's' to move down\n";
}

void eraseCar()
{
	for(int i=0; i<4; i++)
    {
		for(int j=0; j<4; j++)
        {
			gotoXY (j+carPos, i+22);
            cout<<"  ";
		}
	}
}

void bullet(int number)
{
    int num1 = number, num2 = 21;

    for(int i = 0; i < 25; i++)
    {
        gotoXY(num1, num2);
        cout << tal2a;

        Sleep(50);

        gotoXY(num1, num2);
        cout << space;
        
        num2--;
        
        if(num2 == 0)
            cout << space;
    }

}

void rocket()
{
    // variables
    int num1 = 14, num2 = 5;

    num1 = rand() % 180;

    if (num1 >= 11 && num1 <= 90)
    {
        //the forth line
        for(int i = 0; i < 20; i++)
        {
            gotoXY(num1, num2);
            cout << negma;

            Sleep(50);

            gotoXY(num1, num2);
            cout << space;

            if(negma == tal2a)
                cout << space;

            num2++;    
        } 
    }
    else
        rocket();
}

void game_engine()
{
    carPos = -1 + window / 2;
	score = 0;
	  
	system("cls"); 
	draw_board(); 
	
    system("pause");

    chickens_shape();
	
	while (true)
    {
		if(kbhit())
        {
			char ch = getch();

			if (ch == 'a' || ch == 'A')
            {
				if(carPos > 12)
					carPos -= 4;
			}
			else if (ch == 'd' || ch == 'D')
            {
				if(carPos < 84)
					carPos += 4;
			}
            else if (GetAsyncKeyState(VK_LEFT) != false)
            {
				if(carPos < 84)
					carPos -= 4;
			}
            else if (GetAsyncKeyState(VK_RIGHT) != false)
            {
				if(carPos < 84)
					carPos += 4;
			}
            else if(GetAsyncKeyState(VK_SPACE) != false)
            {
                bullet(carPos);
            }
            else if(negma == ship[0][1] || negma == ship[0][2])
            {
                system("cls");
                cout << "Game Over" << endl;
                system("pause");
                main();
            }
		}
        draw_car();

        rocket();
        
        Sleep(10);

        eraseCar();
	}
}