#include<iostream>
#include <string>

using namespace std;

class board{
protected:
	/* making a 2-D array for the 8x8 board */
	int brd[8][8];
public:
	board(){
	/* '1' character representing white boxes and '0' representing black boxes */
	/* using the for loop for making alternating boxes */
		for(int i = 0 ; i < 8;i++){
			for(int j = 0 ; j < 8;j++){
				if(i%2 == 0){
					if(j%2 == 0){
						brd[i][j] = 0;
					}else{
						brd[i][j] = 1;
					}	
				}else{	
					if(j%2 == 0){
						brd[i][j] = 1;
					}else{
						brd[i][j] = 0;
					}
				}
			}
		}

		/* placing the pieces on the board */
		/* using characters '2' and  '3' for black and white respectively*/
	
		int g = 2;
		for(int i = 0 ; i < 8;i++){
			for(int j = 0 ; j < 8;j++){		
				if(i%2 == 0 && j%2 != 0){
					brd[i][j] = g;
				}else if(i%2 != 0 && j%2 == 0){
					brd[i][j] = g;
				}
			}
			if(i == 2){
				i = 4;
				g = 3;
			}
		}
	}//end of constructor
	void show_board(){
		for(int i = 0 ; i < 8;i++){
			cout << i+1 <<"  |";
			for(int j = 0 ; j < 8;j++){
				cout << "  " << brd[i][j] ;
			}
			cout << endl;
		}
		cout << "------------------------------\n";
		cout << "      a  b  c  d  e  f  g  h\n\n";
	}
};

class game:public board{
	string coodinate;
	bool t;
	int p1;
	int p2;
public:
	game(){t = 1;p1 = 12;p2 = 12;}
	string turn (){
		string location;
		if (t){
			cout << "Player 1 turn : ";
			cin >> location;
		}else{
			cout << "Player 2 turn : ";
			cin >> location;
		}
		return location;
	}

	void move(){
		while(gameEnd()){
			getCoodinates();
		}
	}

	bool gameEnd(){
		if(p1 == 0 || p2 == 0){
			return 0;
		}
		return 1;
	}
	
	void getCoodinates(){
		coodinate =  turn();
		//check length
		if(coodinate.length() == 5){
			int fw = (coodinate[0] - '`') - 1;
			int fh = (coodinate[1] - '0') - 1;
			int tw = (coodinate[3] - '`') - 1;
			int th = (coodinate[4] - '0') - 1;
			checkCoodinates(fw , fh , tw , th);
		}else{
			cout << "Wrong Input;\n";
			move();
		}
	}

	void checkCoodinates(int fw , int fh , int tw , int th){
		if(t){
			if((fh+1 == th && (fw-1 == tw || fw+1 == tw)) && brd[th][tw] == 1){
				brd[th][tw] = 2;
				brd[fh][fw] = 1;
				t = 0;
				cout << endl;
				show_board();
				move();
			}else if((fh+1 == th && (fw-1 == tw || fw+1 == tw)) && brd[th][tw] == 3 && (brd[th+1][tw+1] == 1 || brd[th+1][tw-1] == 1 )){
				brd[th][tw] = 1;
				brd[fh][fw] = 1;
				p2--;
				if(brd[th+1][tw+1] == 1){
					brd[th+1][tw+1] = 2;
				}else{
					brd[th+1][tw-1] = 2;
				}
				cout << endl;
				show_board();
				move();
			}else{
				cout << "Wrong Input;\n";
				move();
			}
		}else{
			if((fh-1 == th && (fw-1 == tw || fw+1 == tw)) && brd[th][tw] == 1){
				brd[th][tw] = 3;
				brd[fh][fw] = 1;
				t = 1;
				cout << endl;
				show_board();
				move();
			}else if((fh-1 == th && (fw-1 == tw || fw+1 == tw)) && brd[th][tw] == 2 && (brd[th-1][tw+1] == 1 || brd[th-1][tw-1] == 1 )){
				brd[th][tw] = 1;
				brd[fh][fw] = 1;
				p1--;
				if(brd[th-1][tw+1] == 1){
					brd[th-1][tw+1] = 3;
				}else{
					brd[th-1][tw-1] = 3;
				}
				cout << endl;
				show_board();
				move();
			}else{
				cout << "Wrong Input;\n";
				move();
			}
		}
	}
};

int main()
{
	game g;
	g.show_board();
	cout << "user must input from coodinates and to coodinates example a6-b5 : \n";
	cout << "in this a6 is from and b5 is to.\n\n";
	g.move();

	system("pause");
	return 0;
}