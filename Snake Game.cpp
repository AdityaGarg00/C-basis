#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
bool GameOver;
const int wridth = 20;
const int height = 20;
int x,y,fruitX,fruitY,score;
int TailX[100],TailY[100];
int nTail;
enum eDirection {STOP = 0,LEFT,RIGHT,UP,DOWN};
eDirection dir;

void Setup()
{
	system("Color A5");
	GameOver = false;
	dir = STOP;
	x= wridth/2;
	y= height/2;
	fruitX = rand() %wridth;
	fruitY = rand() %height;
	score = 0;
}

void Draw()
{
	system("cls"); //clear scr
	for(int i=0;i<wridth;i++)
	    cout << "#";
		cout << endl;
	for(int i=0;i<height;i++)
	{
		for(int j=0;j<wridth;j++)
		{
			if(j == 0)
				cout<<"#";
			if(i==y && j==x)
				cout<<"0";
			else if(i == fruitY && j == fruitX)
				cout <<"F";
			else
			{
					bool print = false;
				for(int k=0; k < nTail; k++)
				{
					if(TailX[k] == j && TailY[k] == i)
					{
						cout <<"o";
						print = true;
					}
				}
			}
				cout<<" ";
			if(j == wridth-1)
			  cout <<"#";
		}
		cout << endl;
	}
		for(int i=0;i<wridth;i++)
		
			cout <<"#";
			cout <<endl;
			cout <<"Score:" << score <<endl;
		
}
void Input()
{
	if (kbhit())
	{
		switch(getch())
		{
			case'a':
				dir = LEFT;
				break;
			case'd':
				dir = RIGHT;
				break;
			case'w':
				dir = UP;
				break;
			case's':
				dir = DOWN;
				break;
			case'x':
				GameOver = true;
				break;
		}
	}
}

void Logic()
{
		int prevX = TailX[0];
		int prevY = TailY[0];
		int prev2X, prev2Y;
		TailX[0] = x;
		TailY[0] = y; 
		for (int i=1 ; i < nTail ; i++)
		{
			prev2X = TailX[i];
			prev2Y = TailY[i];
			TailX[i] = prevX;
			TailY[i] = prevY;
			prevX = prev2X;
			prevY = prev2Y;
		}
		switch(dir)
		{
			case LEFT:
				x--;
				break;
			case RIGHT:
				x++;
				break;
			case UP:
				y--;
				break;
			case DOWN:
				y++;
				break;				
			default:
				break;
		}
		if(x > wridth || x<0 || y>height || y<0)
			GameOver = true;
		if(x == fruitX && y == fruitY)
		{
			score += 10; 
			fruitX = rand() %wridth;
			fruitY = rand() %height;
			nTail++;
		}				
		
		
}
int main()
{
	Setup();
	while(!GameOver)
	{
		Draw();
		Input();
		Logic();
	}
	return 0;
}
