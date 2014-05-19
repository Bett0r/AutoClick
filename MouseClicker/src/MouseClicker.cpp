//============================================================================
// Name        : MouseClicker.cpp
// Author      : 
// Version     :
// Copyright   : GOOOO
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "windows.h"


using namespace std;


const int MAXCLICK = 500000;
const int CLICKPAUSE = 30; //Pause between Clicks in ms
const int CLICKDURATION = 50; //How long should the button be pressed?
int percCount = 1;//counts the percentile (10%, 20%,...)

void LeftClick ( const int x, const int y)
{
	POINT pos;
	GetCursorPos(&pos);
	SetCursorPos(x,y);
	mouse_event(MOUSEEVENTF_LEFTDOWN,100, 200, 0,0);
	Sleep(rand() % CLICKDURATION);//in millisec
	mouse_event(MOUSEEVENTF_LEFTUP,100, 200, 0,0);
	SetCursorPos(pos.x, pos.y);
}

void infoOutput(const int x) {
if(x >= MAXCLICK*percCount/10) {

	cout <<percCount<<"0% der Clicks erreicht"<<endl;
	percCount++;
}

}

void RandomizeMousePosition(int* x, int* y){
	*x = *x -25 + rand()%50;
	*y = *y -25 + rand()%50;
	//cout << "Randomized Position: x= "<<*x <<" y= "<< *y <<endl;
}

int main() {
	//cout << "!!!Hello World2222!!!" << endl; // prints !!!Hello World!!!
	POINT pos;
	//config_lc conf = new config_lc();
	cout << "5 Seconds to Click!"<<endl;
	Sleep(5000);//warte vor der ersten Messung
	GetCursorPos(&pos);
	int x = (int) pos.x;
	int y = (int) pos.y;
	int i = 1;

	cout << "Initial Position: Pos.x= "<<x <<"Pos.y= "<< y <<endl;
	while(i<=MAXCLICK) {
		GetCursorPos(&pos);
		x = (int) pos.x;
		y = (int) pos.y;
		//cout << i<<".Position: Pos.x= "<<x <<"Pos.y= "<< y <<endl;
		//RandomizeMousePosition(&x, &y);
		LeftClick(x, y);
		Sleep(CLICKPAUSE);
		i++;
		//if(i < MAXCLICK%10)
		infoOutput(i);
	}
	cout<<"Finished";
	return 0;
}

