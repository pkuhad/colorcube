#ifndef CUBE_H
#define CUBE_H

#include <fstream>


extern int stepstaken,limit; 
extern int arr[20]; //this is the solution array



#define SOLVED 1
#define UNSOLVED 0





using namespace std;

struct declare
{
	//current position
	int side;
	int row;
	int col;
	//home position
	int value;
	int homerow;
	int homecol;
	//other details
	int head;
	int got;
};


class cube
{
	private:
		struct side
		{
			 declare block[9];
			 struct dim
			 {
				int up,down,left,right;
			 }go;
			 int pf;
		}s[6];
		
	public:
		cube();
		void status();
		void cstatus();
		int inputfromfile(const char *);
		void getvalues();
		void leftturn(int,int);
		void rightturn(int,int);
		void downturn(int,int);
		void upturn(int,int);
		void transposeeffectclockwiseturn(int);
		void transposeeffectanticlockwiseturn(int);
		void updatepf();
		void showpf();
		int check();

};

#endif
