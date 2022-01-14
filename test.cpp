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

char chicken2[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken3[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken4[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken5[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken6[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken7[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

 char chicken8[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

  char chicken9[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

 char chicken10[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken11[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken12[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken13[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken14[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken15[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken16[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken17[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken18[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken19[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken20[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken21[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken22[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken23[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken24[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken25[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken26[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken27[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken28[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken29[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken30[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken31[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken32[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken33[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken34[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken35[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken36[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken37[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken38[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken39[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken40[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken41[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken42[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken43[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken44[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken45[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken46[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken47[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken48[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken49[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken50[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken51[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken52[2][2]= {
                        {'@', '@'},
                        {'@', '@'}
                    };

char chicken53[2][2]= {
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
void update_score();
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

    gotoXY(20,0);
    cout << chicken2[0][0] << " " << chicken2[0][1];
    gotoXY(20,1);
    cout << chicken2[1][0] << " " << chicken2[1][1];

    gotoXY(26,0);
    cout << chicken3[0][0] << " " << chicken3[0][1];
    gotoXY(26,1);
    cout << chicken3[1][0] << " " << chicken3[1][1];

    gotoXY(32,0);
    cout << chicken4[0][0] << " " << chicken4[0][1];
    gotoXY(32,1);
    cout << chicken4[1][0] << " " << chicken4[1][1];

    gotoXY(38,0);
    cout << chicken5[0][0] << " " << chicken5[0][1];
    gotoXY(38,1);
    cout << chicken5[1][0] << " " << chicken5[1][1];

    gotoXY(44,0);
    cout << chicken6[0][0] << " " << chicken6[0][1];
    gotoXY(44,1);
    cout << chicken6[1][0] << " " << chicken6[1][1];

    gotoXY(50,0);
    cout << chicken7[0][0] << " " << chicken7[0][1];
    gotoXY(50,1);
    cout << chicken7[1][0] << " " << chicken7[1][1];

    gotoXY(56,0);
    cout << chicken8[0][0] << " " << chicken8[0][1];
    gotoXY(56,1);
    cout << chicken8[1][0] << " " << chicken8[1][1];

    gotoXY(62,0);
    cout << chicken9[0][0] << " " << chicken9[0][1];
    gotoXY(62,1);
    cout << chicken9[1][0] << " " << chicken9[1][1];

    gotoXY(68,0);
    cout << chicken10[0][0] << " " << chicken10[0][1];
    gotoXY(68,1);
    cout << chicken10[1][0] << " " << chicken10[1][1];

    gotoXY(74,0);
    cout << chicken11[0][0] << " " << chicken11[0][1];
    gotoXY(74,1);
    cout << chicken11[1][0] << " " << chicken11[1][1];

    gotoXY(80,0);
    cout << chicken12[0][0] << " " << chicken12[0][1];
    gotoXY(80,1);
    cout << chicken12[1][0] << " " << chicken12[1][1];

    gotoXY(86,0);
    cout << chicken13[0][0] << " " << chicken13[0][1];
    gotoXY(86,1);
    cout << chicken13[1][0] << " " << chicken13[1][1];

    //second line

    gotoXY(14,3);
    cout << chicken14[0][0] << " " << chicken14[0][1];
    gotoXY(14,4);
    cout << chicken14[1][0] << " " << chicken14[1][1];

    gotoXY(20,3);
    cout << chicken15[0][0] << " " << chicken15[0][1];
    gotoXY(20,4);
    cout << chicken15[1][0] << " " << chicken15[1][1];

    gotoXY(26,3);
    cout << chicken16[0][0] << " " << chicken16[0][1];
    gotoXY(26,4);
    cout << chicken16[1][0] << " " << chicken16[1][1];

    gotoXY(32,3);
    cout << chicken17[0][0] << " " << chicken17[0][1];
    gotoXY(32,4);
    cout << chicken17[1][0] << " " << chicken17[1][1];

    gotoXY(38,3);
    cout << chicken18[0][0] << " " << chicken18[0][1];
    gotoXY(38,4);
    cout << chicken18[1][0] << " " << chicken18[1][1];

    gotoXY(44,3);
    cout << chicken19[0][0] << " " << chicken19[0][1];
    gotoXY(44,4);
    cout << chicken19[1][0] << " " << chicken19[1][1];

    gotoXY(50,3);
    cout << chicken20[0][0] << " " << chicken20[0][1];
    gotoXY(50,4);
    cout << chicken20[1][0] << " " << chicken20[1][1];

    gotoXY(56,3);
    cout << chicken21[0][0] << " " << chicken21[0][1];
    gotoXY(56,4);
    cout << chicken21[1][0] << " " << chicken21[1][1];

    gotoXY(62,3);
    cout << chicken22[0][0] << " " << chicken22[0][1];
    gotoXY(62,4);
    cout << chicken22[1][0] << " " << chicken22[1][1];

    gotoXY(68,3);
    cout << chicken23[0][0] << " " << chicken23[0][1];
    gotoXY(68,4);
    cout << chicken23[1][0] << " " << chicken23[1][1];

    gotoXY(74,3);
    cout << chicken24[0][0] << " " << chicken24[0][1];
    gotoXY(74,4);
    cout << chicken24[1][0] << " " << chicken24[1][1];

    gotoXY(80,3);
    cout << chicken25[0][0] << " " << chicken25[0][1];
    gotoXY(80,4);
    cout << chicken25[1][0] << " " << chicken25[1][1];

    gotoXY(86,3);
    cout << chicken26[0][0] << " " << chicken26[0][1];
    gotoXY(86,4);
    cout << chicken26[1][0] << " " << chicken26[1][1];

    //thrid line
    gotoXY(14,6);
    cout << chicken27[0][0] << " " << chicken27[0][1];
    gotoXY(14,7);
    cout << chicken27[1][0] << " " << chicken27[1][1];


    gotoXY(20,6);
    cout << chicken28[0][0] << " " << chicken28[0][1];
    gotoXY(20,7);
    cout << chicken28[1][0] << " " << chicken28[1][1];

    gotoXY(26,6);
    cout << chicken29[0][0] << " " << chicken29[0][1];
    gotoXY(26,7);
    cout << chicken29[1][0] << " " << chicken29[1][1];

    gotoXY(32,6);
    cout << chicken30[0][0] << " " << chicken30[0][1];
    gotoXY(32,7);
    cout << chicken30[1][0] << " " << chicken30[1][1];

    gotoXY(38,6);
    cout << chicken31[0][0] << " " << chicken31[0][1];
    gotoXY(38,7);
    cout << chicken31[1][0] << " " << chicken31[1][1];

    gotoXY(44,6);
    cout << chicken32[0][0] << " " << chicken32[0][1];
    gotoXY(44,7);
    cout << chicken32[1][0] << " " << chicken32[1][1];

    gotoXY(50,6);
    cout << chicken33[0][0] << " " << chicken33[0][1];
    gotoXY(50,7);
    cout << chicken33[1][0] << " " << chicken33[1][1];

    gotoXY(56,6);
    cout << chicken34[0][0] << " " << chicken34[0][1];
    gotoXY(56,7);
    cout << chicken34[1][0] << " " << chicken34[1][1];

    gotoXY(62,6);
    cout << chicken35[0][0] << " " << chicken35[0][1];
    gotoXY(62,7);
    cout << chicken35[1][0] << " " << chicken35[1][1];

    gotoXY(68,6);
    cout << chicken36[0][0] << " " << chicken36[0][1];
    gotoXY(68,7);
    cout << chicken36[1][0] << " " << chicken36[1][1];

    gotoXY(74,6);
    cout << chicken37[0][0] << " " << chicken37[0][1];
    gotoXY(74,7);
    cout << chicken37[1][0] << " " << chicken37[1][1];

    gotoXY(80,6);
    cout << chicken38[0][0] << " " << chicken38[0][1];
    gotoXY(80,7);
    cout << chicken38[1][0] << " " << chicken38[1][1];

    gotoXY(86,6);
    cout << chicken39[0][0] << " " << chicken39[0][1];
    gotoXY(86,7);
    cout << chicken39[1][0] << " " << chicken39[1][1];

    // forth line
    gotoXY(14,9);
    cout << chicken40[0][0] << " " << chicken40[0][1];
    gotoXY(14,10);
    cout << chicken40[1][0] << " " << chicken40[1][1];


    gotoXY(20,9);
    cout << chicken41[0][0] << " " << chicken41[0][1];
    gotoXY(20,10);
    cout << chicken41[1][0] << " " << chicken41[1][1];

    gotoXY(26,9);
    cout << chicken42[0][0] << " " << chicken42[0][1];
    gotoXY(26,10);
    cout << chicken42[1][0] << " " << chicken42[1][1];

    gotoXY(32,9);
    cout << chicken43[0][0] << " " << chicken43[0][1];
    gotoXY(32,10);
    cout << chicken43[1][0] << " " << chicken43[1][1];

    gotoXY(38,9);
    cout << chicken44[0][0] << " " << chicken44[0][1];
    gotoXY(38,10);
    cout << chicken44[1][0] << " " << chicken44[1][1];

    gotoXY(44,9);
    cout << chicken45[0][0] << " " << chicken45[0][1];
    gotoXY(44,10);
    cout << chicken45[1][0] << " " << chicken45[1][1];

    gotoXY(50,9);
    cout << chicken46[0][0] << " " << chicken46[0][1];
    gotoXY(50,10);
    cout << chicken46[1][0] << " " << chicken46[1][1];

    gotoXY(56,9);
    cout << chicken47[0][0] << " " << chicken47[0][1];
    gotoXY(56,10);
    cout << chicken47[1][0] << " " << chicken47[1][1];

    gotoXY(62,9);
    cout << chicken48[0][0] << " " << chicken48[0][1];
    gotoXY(62,10);
    cout << chicken48[1][0] << " " << chicken48[1][1];

    gotoXY(68,9);
    cout << chicken49[0][0] << " " << chicken49[0][1];
    gotoXY(68,10);
    cout << chicken49[1][0] << " " << chicken49[1][1];

    gotoXY(74,9);
    cout << chicken50[0][0] << " " << chicken50[0][1];
    gotoXY(74,10);
    cout << chicken50[1][0] << " " << chicken50[1][1];

    gotoXY(80,9);
    cout << chicken51[0][0] << " " << chicken51[0][1];
    gotoXY(80,10);
    cout << chicken51[1][0] << " " << chicken51[1][1];

    gotoXY(86,9);
    cout << chicken52[0][0] << " " << chicken52[0][1];
    gotoXY(86,10);
    cout << chicken52[1][0] << " " << chicken52[1][1];
}

void update_score()
{
    gotoXY(screen_width + 7, 5);
    cout << "Score: " << score << endl;
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
    int num1 = 14, num2 = 12;

    num1 = rand() % 180;

    if (num1 >= 11 && num1 <= 90)
    {
        //the forth line
        for(int i = 0; i < 13; i++)
        {
            gotoXY(num1, num2);
            cout << negma;

            Sleep(50);

            gotoXY(num1, num2);
            cout << space;

             if(negma == tal2a)
                cout << space;

            num2++;

            for(int j = 0; j < 4; j++)
            {
                for(int x = 0; x < 4; x++)
                {
                    if( chicken40[j][x] &&
                        chicken41[j][x] &&
                        chicken42[j][x] && 
                        chicken43[j][x] && 
                        chicken44[j][x] && 
                        chicken45[j][x] &&
                        chicken46[j][x] && 
                        chicken47[j][x] && 
                        chicken48[j][x] && 
                        chicken49[j][x] && 
                        chicken50[j][x] && 
                        chicken51[j][x] && 
                        chicken52[j][x]  
                        == space )

                    {
                        num2 = 9;

                        for(int i = 0; i < 17; i++)
                        {
                            gotoXY(num1, num2);
                            cout << negma;

                            Sleep(50);

                            gotoXY(num1, num2);
                            cout << space;

                            if(negma == tal2a)
                                cout << space;
                            num2++;
                            
                            // third line
                             for(int j = 0; j < 4; j++)
                            {
                                for(int x = 0; x < 4; x++)
                                {
                                    if( chicken27[j][x] &&
                                        chicken28[j][x] &&
                                        chicken29[j][x] && 
                                        chicken30[j][x] && 
                                        chicken31[j][x] && 
                                        chicken32[j][x] &&
                                        chicken33[j][x] && 
                                        chicken34[j][x] && 
                                        chicken35[j][x] && 
                                        chicken36[j][x] && 
                                        chicken37[j][x] && 
                                        chicken28[j][x] && 
                                        chicken29[j][x]  
                                        == space )

                                    {
                                        num2 = 6;                
                                            
                                        for(int i = 0; i < 21; i++)
                                        {
                                            gotoXY(num1, num2);
                                            cout << negma;

                                            Sleep(50);

                                            gotoXY(num1, num2);
                                            cout << space;

                                            if(negma == tal2a)
                                                cout << space;
                                            num2++;

                                            for(int j = 0; j < 4; j++)
                                            {
                                                for(int x = 0; x < 4; x++)
                                                {
                                                    if( chicken14[j][x] &&
                                                        chicken15[j][x] &&
                                                        chicken16[j][x] && 
                                                        chicken17[j][x] && 
                                                        chicken18[j][x] && 
                                                        chicken19[j][x] &&
                                                        chicken20[j][x] && 
                                                        chicken21[j][x] && 
                                                        chicken22[j][x] && 
                                                        chicken23[j][x] && 
                                                        chicken24[j][x] && 
                                                        chicken25[j][x] && 
                                                        chicken26[j][x]  
                                                        == space )

                                                    {
                                                        num2 = 3;
                                                            
                                                        for(int i = 0; i < 21; i++)
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

                                                        // first line
                                                        for(int j = 0; j < 4; j++)
                                                        {
                                                            for(int x = 0; x < 4; x++)
                                                            {
                                                                if( chicken1[j][x] &&
                                                                    chicken2[j][x] &&
                                                                    chicken3[j][x] && 
                                                                    chicken4[j][x] && 
                                                                    chicken5[j][x] && 
                                                                    chicken6[j][x] &&
                                                                    chicken7[j][x] && 
                                                                    chicken8[j][x] && 
                                                                    chicken9[j][x] && 
                                                                    chicken10[j][x] && 
                                                                    chicken11[j][x] && 
                                                                    chicken12[j][x] && 
                                                                    chicken13[j][x]  
                                                                    == space )

                                                                {
                                                                    {
                                                                        system("cls");
                                                                        cout << "you have won" << endl;
                                                                    } 
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }                                
                    }    
                }
            }    
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
	update_score(); 
	
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
					carPos -= 3;
			}
			if (ch == 'd' || ch == 'D')
            {
				if(carPos < 84)
					carPos += 3;
			}
            if (GetAsyncKeyState(VK_LEFT) != false)
            {
				if(carPos < 84)
					carPos -= 3;
			}
            if (GetAsyncKeyState(VK_RIGHT) != false)
            {
				if(carPos < 84)
					carPos += 3;
			}
            if(GetAsyncKeyState(VK_SPACE) != false)
            {
                bullet(carPos);
            }
		}
        draw_car();

        rocket();
        
        Sleep(10);

        eraseCar();

        if(tal2a == chicken53[1][0] || tal2a == chicken53[1][1])
        {
            for(int x = 0; x < 4; x++)
            {
                for(int j = 0; j < 4; j++)
                {
                    chicken53[x][j] = space;
                }
            }
        }
	}
}