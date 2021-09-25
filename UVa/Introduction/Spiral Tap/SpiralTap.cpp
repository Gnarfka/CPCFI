#include <iostream>
#include <cmath>

using namespace std;

int main(){ 
	int SZ, P, level, lineOut, columnOut;

	cin >> SZ >> P;

	while(SZ || P){
		if(P == 1){
			int aux = ceil(SZ/2.0);
			cout << "Line = " << aux << ", column = " << aux << "." << endl;
			cin >> SZ >> P;
			continue;
		}

		int level = 1, 
			levelPos = ceil(SZ/2.0), 
			outsideRings = SZ-levelPos;

		while(P > level*level){
			level +=2;
			levelPos++;
			outsideRings--;
		}

		// Calculamos las esquinas con respecto al anillo de P
		int URC = level*level; // Upper right corner
		int LRC = level*level - (level-1); // Lower right corner
		int LLC = level*level - 2*(level-1); // Lower left corner
		int ULC = level*level - 3*(level-1); // Upper left corner

		if(P <= ULC){
			lineOut = levelPos;
			int columnULC = 1+outsideRings;
			columnOut = columnULC + (ULC-P);
		}
		else if(P <= LLC){
			columnOut = 1+outsideRings;
			lineOut = columnOut + (LLC-P);
		}
		else if(P <= LRC){
			lineOut = 1+outsideRings;
			columnOut = levelPos - (LRC-P);
		}
		else{
			columnOut = levelPos;
			int lineURC = SZ-outsideRings;
			lineOut = lineURC - (URC-P);
		}

		cout << "Line = " << lineOut << ", column = " << columnOut << "." << endl;

		cin >> SZ >> P;
	}


	return 0;
}