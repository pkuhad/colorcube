# include "cube.h"
# include <fstream>
# include <iostream>
# include <cstdlib>

using namespace std;

# define box s[i].block[k+j*3]


enum
{
	white=0,
	red=1,
	blue=4,
	yellow=2,
	orange=3,
	green=5
};

int t;

cube::cube()
{
	int temp=3;
	for(int i=0;i<6;i++)
	{

		if(i<=3)
		{
			s[i].go.up=4;
			s[i].go.down=5;
			s[i].go.left=temp;
			if(i==3)
				s[i].go.right=0;
			else
				s[i].go.right=i+1;
		}
		else if(i==4)
		{
			s[4].go.up=2;
			s[4].go.down=0;
			s[4].go.left=3;
			s[4].go.right=1;
		}
		else if(i==5)
		{
			s[5].go.up=0;
			s[5].go.down=2;
			s[5].go.left=3;
			s[5].go.right=1;
		}


		temp=i;

		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
				s[i].block[k+j*3].value=i;
				s[i].block[k+j*3].row=j;
				s[i].block[k+j*3].col=k;
				s[i].block[k+j*3].homerow=j;
				s[i].block[k+j*3].homecol=k;
				box.side=i;
				box.got=0;

				if(j==1 && k==1)
					s[i].block[k+j*3].head=1;
				else if((j==0 && k==1) || (j==1 && k==0) || (j==1 && k==2) ||(j==2 && k==1))
					s[i].block[k+j*3].head=2;
				else
					s[i].block[k+j*3].head=3;
			}
		}

		s[i].pf=9;
	}
}


void cube::getvalues()
{

	for(int i=0;i<6;i++)
	{
		if(i==4)
			status();
		cout<<endl<<"Values for Side: "<<i<<"==>";

		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
				if(s[i].block[k+j*3].got==0)
				{
					s[i].block[k+j*3].row=j;
					s[i].block[k+j*3].col=k;

					cout<<endl<<"Row: "<<j<<" Col: "<<k;
					if(j==1 && k==1)
					{
						box.value=i;
						box.homerow=j;
						box.homecol=k;
						cout<<endl<<"Value: "<<i;
						cout<<endl<<"Homerow: "<<j;
						cout<<endl<<"Homecol: "<<k<<endl;
						box.side=i;
						box.got=1;

					}
					else
					{
						cout<<endl<<"Enter Value: ";cin>>s[i].block[k+j*3].value;
						box.side=i;

						if(box.head==3)
						{
							if(j==0 && k==0)
							{
								cout<<"What's up: ";

								t=6;
								cin>>s[s[i].go.up].block[t].value;
								s[s[i].go.up].block[t].side=s[i].go.up;
								s[s[i].go.up].block[t].got=1;

								cout<<"What's left: ";
								t=2;

								cin>>s[s[i].go.left].block[t].value;
								s[s[i].go.left].block[t].side=s[i].go.left;
								s[s[i].go.left].block[t].got=1;


							}
							if(j==0 && k==2)
							{
								cout<<"What's up: ";
								switch(i)
								{
									case 0: t=8;
										break;
									case 1: t=2;
										break;
									case 2: t=0;
										break;
								}
								cin>>s[s[i].go.up].block[t].value;
								s[s[i].go.up].block[t].side=s[i].go.up;
								s[s[i].go.up].block[t].got=1;


								cout<<"What's right: ";
								t=0;
								cin>>s[s[i].go.right].block[t].value;
								s[s[i].go.right].block[t].side=s[i].go.right;
								s[s[i].go.right].block[t].got=1;

							}
							if(j==2 && k==0)
							{
								cout<<"What's left: ";
								t=8;
								cin>>s[s[i].go.left].block[t].value;
								s[s[i].go.left].block[t].side=s[i].go.left;
								s[s[i].go.left].block[t].got=1;

								cout<<"What's down: ";
								t=0;
								cin>>s[s[i].go.down].block[t].value;
								s[s[i].go.down].block[t].side=s[i].go.down;
								s[s[i].go.down].block[t].got=1;

							}
							if(j==2 && k==2)
							{
								cout<<"What's right: ";
								t=6;


								cin>>s[s[i].go.right].block[t].value;
								s[s[i].go.right].block[t].side=s[i].go.right;
								s[s[i].go.right].block[t].got=1;

								cout<<"What's down: ";

								switch(i)
								{
									 case 0: t=2;
										break;
									 case 1: t=8;
										break;
									 case 2: t=6;
										break;
								}


								cin>>s[s[i].go.down].block[t].value;
								s[s[i].go.down].block[t].side=s[i].go.down;
								s[s[i].go.down].block[t].got=1;

							}

						}

						else if(box.head==2)
						{
							if(j==0 && k==1)
							{
								cout<<"What's up: ";
								switch(i)
								{
									case 0: t=7;
										break;
									case 1: t=5;
										break;
									case 2: t=1;
										break;
									case 3: t=3;
										break;
								}

								cin>>s[s[i].go.up].block[t].value;
								s[s[i].go.up].block[t].side=s[i].go.up;
								s[s[i].go.up].block[t].got=1;

							}
							if(j==1 && k==0)
							{
								cout<<"What's left: ";

								t=5;
								cin>>s[s[i].go.left].block[t].value;
								s[s[i].go.left].block[t].side=s[i].go.left;
								s[s[i].go.left].block[t].got=1;

							}
							if(j==1 && k==2)
							{
								cout<<"What's right: ";
								t=3;
								cin>>s[s[i].go.right].block[t].value;
								s[s[i].go.right].block[t].side=s[i].go.right;
								s[s[i].go.right].block[t].got=1;

							}
							if(j==2 && k==1)
							{
								cout<<"What's down: ";
								switch(i)
								{
									case 0: t=1;
										break;
									case 1: t=5;
										break;
									case 2: t=7;
										break;
									case 3: t=3;
										break;
								}



								cin>>s[s[i].go.down].block[t].value;
								s[s[i].go.down].block[t].side=s[i].go.down;
								s[s[i].go.down].block[t].got=1;

							}
						}


					}
				}
				else if(box.got==1)
				{
					s[i].block[k+j*3].row=j;
					s[i].block[k+j*3].col=k;
					box.side=i;

					cout<<endl<<"------------------"<<endl;
					cout<<endl<<"Row: "<<j<<" Col: "<<k;
					cout<<endl<<"Value: "<<box.value<<endl;
					cout<<endl<<"------------------"<<endl;
				}

			}
		}
	}
}

int cube::inputfromfile(const char *str)
{
	ifstream infile("ip.txt");
	int p[9];
	int side=0;

  while(infile >> p[0] >> p[1] >> p[2] >> p[3] >> p[4] >> p[5] >> p[6] >> p[7] >> p[8]){
  	for(int blck=0;blck<9;blck++)
			s[side].block[blck].value=p[blck];
		side++;
  }
	return 1;
}

void cube::status()
{

	for(int i=0;i<6;i++) {
		for(int j=0;j<3;j++)
    {
			for(int k=0;k<3;k++)
			{
			       	cout<<" "<<s[i].block[k+j*3].value;
			}
			
		}
		cout<<endl;

	}


}

//colorful status

void cube::cstatus()
{
	
}


void cube::leftturn(int sd1,int ro1)
{
	int temp,limitx,limity,rest;

	if(sd1<=3)
	{
		if(ro1==0)
		{
			limitx=0;
			limity=2;
		}
		if(ro1==1)
		{
			rightturn(0,0);
			rightturn(0,2);
			return;

		}
		if(ro1==2)
		{
			limitx=6;
			limity=8;
		}

		for(int i=0;i<=2;i++)
		{

			for(int y=limitx;y<=limity;y++)
			{
				temp=s[i].block[y].value;
				s[i].block[y].value=s[s[i].go.right].block[y].value;
				s[s[i].go.right].block[y].value=temp;
			}
		}

		if(ro1==0)
			transposeeffectclockwiseturn(4);
		if(ro1==2)
			transposeeffectanticlockwiseturn(5);

	}
	if(sd1==4)
	{
		if(ro1==0)
		{
			upturn(1,2);
			return;
		}
		else if(ro1==1)
		{
			upturn(1,0);
			upturn(1,2);
		}
		else if(ro1==2)
		{
			upturn(1,0);
			return;
		}
	}
	if(sd1==5)
	{
		if(ro1==0)
		{
			downturn(1,0);
			return;
		}
		else if(ro1==1)
		{
			upturn(1,0);
			upturn(1,2);
		}
		else if(ro1==2)
		{
			downturn(1,2);
			return;
		}
	}

}

void cube::rightturn(int sd2,int ro2)
{
	int temp,limitx,limity,rest;

	if(sd2<=3)
	{
		if(ro2==0)
		{
			limitx=0;
			limity=2;
		}
		if(ro2==1)
		{
			leftturn(0,0);
			leftturn(0,2);
			return;

		}
		if(ro2==2)
		{
			limitx=6;
			limity=8;
		}

		int sol;

		for(int i=1;i<=3;i++)
		{
			for(int y=limity;y>=limitx;y--)
			{
				sol=sd2+i;
				if(sol>=4)
					sol=sol-4;
				temp=s[sd2].block[y].value;
				s[sd2].block[y].value=s[sol].block[y].value;
				s[sol].block[y].value=temp;
			}
		}



		if(ro2==0)
			transposeeffectanticlockwiseturn(4);
		if(ro2==2)
			transposeeffectclockwiseturn(5);

	}
	if(sd2==4)
	{
		if(ro2==0)
		{
			downturn(1,2);
			return;
		}
		else if(ro2==1)
		{
			upturn(1,0);
			upturn(1,2);
			return;
		}
		else if(ro2==2)
		{
			downturn(1,0);
			return;
		}
	}

	if(sd2==5)
	{
		if(ro2==0)
		{
			upturn(1,0);
			return;
		}
		else if(ro2==1)
		{
			downturn(1,0);
			downturn(1,2);
			return;
		}
		else if(ro2==2)
		{
			upturn(1,2);
			return;
		}
	}


}

	//homecode====....



void cube::downturn(int sd3,int co3)
{
	int temp,limitx,limity,rest;

	if(sd3==0)
	{
		if(co3==0)
		{
			limitx=0;
			limity=6;
		}
		if(co3==1)
		{
			upturn(0,0);
			upturn(0,2);
			return;

		}
		if(co3==2)
		{
			limitx=2;
			limity=8;
		}


		int i=5;

		for(t=1;t<=2;t++)
		{
			if(t==2)
				i=0;

			for(int y=limitx;y<=limity;y+=3)
			{
				temp=s[i].block[y].value;
				s[i].block[y].value=s[s[i].go.up].block[y].value;
				s[s[i].go.up].block[y].value=temp;
			}
		}


//		      0-8, 3-5, 6-2
  //		      2 ==

		int t;

		if(co3==0)
		{
			i=4;
			for(int y=0,temp=8;y<=6;y+=3,temp-=3)
			{
				t=s[i].block[y].value;
				s[i].block[y].value=s[s[i].go.up].block[temp].value;
				s[s[i].go.up].block[temp].value=t;
			}
		}

		if(co3==2)
		{

			i=4;
			for(int y=0,temp=8;y<=6;y+=3,temp-=3)
			{
				t=s[i].block[temp].value;
				s[i].block[temp].value=s[s[i].go.up].block[y].value;
				s[s[i].go.up].block[y].value=t;
			}
		}


		if(co3==0)
			transposeeffectclockwiseturn(3);
		if(co3==2)
			transposeeffectanticlockwiseturn(1);



	}
	if(sd3==1)
	{
		if(co3==0)
		{
			int i,j,temp;
			int source[]={0,3,6};
			int target[]={2,1,0};

			i=5;
			for(j=0;j<3;j++)
			{
				temp=s[1].block[source[j]].value;
				s[1].block[source[j]].value=s[i].block[target[j]].value;
				s[i].block[target[j]].value=temp;
			}

			i=4;
			target[0]=6;target[1]=7;target[2]=8;
			for(j=0;j<3;j++)
			{
				temp=s[1].block[source[j]].value;
				s[1].block[source[j]].value=s[i].block[target[j]].value;
				s[i].block[target[j]].value=temp;
			}


			i=3;
			source[0]=6;source[1]=7;source[2]=8;
			target[0]=8;target[1]=5;target[2]=2;

			for(j=0;j<3;j++)
			{
				temp=s[4].block[source[j]].value;
				s[4].block[source[j]].value=s[i].block[target[j]].value;
				s[i].block[target[j]].value=temp;
			}

			transposeeffectclockwiseturn(0);
		}

		if(co3==1)
		{
			upturn(1,0);
			upturn(1,2);
			return;
		}
		if(co3==2)
		{
			int i,j,temp;
			int source[]={2,5,8};
			int target[]={8,7,6};

			i=5;
			for(j=0;j<3;j++)
			{
				temp=s[1].block[source[j]].value;
				s[1].block[source[j]].value=s[i].block[target[j]].value;
				s[i].block[target[j]].value=temp;
			}


			i=4;
			target[0]=0;target[1]=1;target[2]=2;

			for(j=0;j<3;j++)
			{
				temp=s[1].block[source[j]].value;
				s[1].block[source[j]].value=s[i].block[target[j]].value;
				s[i].block[target[j]].value=temp;
			}

			i=3;
			source[0]=0;source[1]=1;source[2]=2;
			target[0]=6;target[1]=3;target[2]=0;

			for(j=0;j<3;j++)
			{
				temp=s[4].block[source[j]].value;
				s[4].block[source[j]].value=s[i].block[target[j]].value;
				s[i].block[target[j]].value=temp;
			}

			transposeeffectanticlockwiseturn(2);
		}



	}

	if(sd3==2)
	{
		if(co3==0)
		{
			upturn(0,2);
			return;
		}
		else if(co3==1)
		{
			downturn(0,0);
			downturn(0,2);
			return;
		}
		else if(co3==2)
		{
			upturn(0,0);
			return;
		}
	}

	if(sd3==3)
	{
		if(co3==0)
		{
			upturn(1,2);
			return;
		}
		else if(co3==1)
		{
			downturn(1,0);
			downturn(1,2);
			return;
		}
		else if(co3==2)
		{
			upturn(1,0);
			return;
		}
	}
	if(sd3==4 || sd3==5)
	{
		downturn(0,co3);
		return;
	}


}

void cube::upturn(int sd4,int co4)
{
	int temp,limitx,limity,rest;

	if(sd4==0)
	{
		if(co4==0)
		{
			limitx=0;
			limity=6;
		}
		if(co4==1)
		{
			downturn(0,0);
			downturn(0,2);
			return;

		}
		if(co4==2)
		{
			limitx=2;
			limity=8;
		}


		int i=4;

		for(t=1;t<=2;t++)
		{
			if(t==2)
				i=0;

			for(int y=limitx;y<=limity;y+=3)
			{
				temp=s[i].block[y].value;
				s[i].block[y].value=s[s[i].go.down].block[y].value;
				s[s[i].go.down].block[y].value=temp;
			}
		}


//		      0-8, 3-5, 6-2
  //		      2 ==

		int t;

		if(co4==0)
		{
			i=5;
			for(int y=0,temp=8;y<=6;y+=3,temp-=3)
			{
				t=s[i].block[y].value;
				s[i].block[y].value=s[s[i].go.down].block[temp].value;
				s[s[i].go.down].block[temp].value=t;
			}
		}

		if(co4==2)
		{

			i=5;
			for(int y=0,temp=8;y<=6;y+=3,temp-=3)
			{
				t=s[i].block[temp].value;
				s[i].block[temp].value=s[s[i].go.down].block[y].value;
				s[s[i].go.down].block[y].value=t;
			}
		}


		if(co4==0)
			transposeeffectanticlockwiseturn(3);
		if(co4==2)
			transposeeffectclockwiseturn(1);



	}

	//sizzling one! :-)

	if(sd4==1)
	{
		if(co4==0)
		{
			int i,j,temp;
			int source[]={0,3,6};
			int target[]={6,7,8};

			i=4;
			for(j=0;j<3;j++)
			{
				temp=s[1].block[source[j]].value;
				s[1].block[source[j]].value=s[i].block[target[j]].value;
				s[i].block[target[j]].value=temp;
			}

			i=3;
			target[0]=8;target[1]=5;target[2]=2;
			for(j=0;j<3;j++)
			{
				temp=s[1].block[source[j]].value;
				s[1].block[source[j]].value=s[i].block[target[j]].value;
				s[i].block[target[j]].value=temp;
			}


			i=5;
			target[0]=2;target[1]=1;target[2]=0;

			for(j=0;j<3;j++)
			{
				temp=s[1].block[source[j]].value;
				s[1].block[source[j]].value=s[i].block[target[j]].value;
				s[i].block[target[j]].value=temp;
			}

			transposeeffectanticlockwiseturn(0);
		}

		if(co4==1)
		{
			downturn(1,0);
			downturn(1,2);
			return;
		}
		if(co4==2)
		{
			int i,j,temp;
			int source[]={2,5,8};
			int target[]={0,1,2};

			i=4;
			for(j=0;j<3;j++)
			{
				temp=s[1].block[source[j]].value;
				s[1].block[source[j]].value=s[i].block[target[j]].value;
				s[i].block[target[j]].value=temp;
			}


			i=3;
			target[0]=6;target[1]=3;target[2]=0;

			for(j=0;j<3;j++)
			{
				temp=s[1].block[source[j]].value;
				s[1].block[source[j]].value=s[i].block[target[j]].value;
				s[i].block[target[j]].value=temp;
			}

			i=5;
			target[0]=8;target[1]=7;target[2]=6;

			for(j=0;j<3;j++)
			{
				temp=s[1].block[source[j]].value;
				s[1].block[source[j]].value=s[i].block[target[j]].value;
				s[i].block[target[j]].value=temp;
			}

			transposeeffectclockwiseturn(2);
		}



	}
	if(sd4==2)
	{
		if(co4==0)
		{
			downturn(0,2);
			return;
		}
		else if(co4==1)
		{
			downturn(0,1);
			return;
		}
		else if(co4==2)
		{
			downturn(0,0);
			return;
		}
	}
	if(sd4==3)
	{
		if(co4==0)
		{
			downturn(1,2);
			return;
		}
		else if(co4==1)
		{
			downturn(1,1);
			return;
		}
		else if(co4==2)
		{
			downturn(1,0);
			return;
		}
	}
	if(sd4==4 || sd4==5)
	{
		upturn(0,co4);
		return;
	}

}

void cube::transposeeffectclockwiseturn(int rest)
{
	int temp;

	temp=s[rest].block[1].value;
	s[rest].block[1].value=s[rest].block[3].value;
	s[rest].block[3].value=temp;

	temp=s[rest].block[2].value;
	s[rest].block[2].value=s[rest].block[6].value;
	s[rest].block[6].value=temp;

	temp=s[rest].block[7].value;
	s[rest].block[7].value=s[rest].block[5].value;
	s[rest].block[5].value=temp;

	for(int i=0;i<=2;i++)
	{
		temp=s[rest].block[3*i].value;
		s[rest].block[3*i].value=s[rest].block[2+i*3].value;
		s[rest].block[2+i*3].value=temp;
	}
}



void cube::transposeeffectanticlockwiseturn(int rest)
{
	int temp;

	temp=s[rest].block[1].value;
	s[rest].block[1].value=s[rest].block[3].value;
	s[rest].block[3].value=temp;

	temp=s[rest].block[2].value;
	s[rest].block[2].value=s[rest].block[6].value;
	s[rest].block[6].value=temp;
	temp=s[rest].block[7].value;
	s[rest].block[7].value=s[rest].block[5].value;
	s[rest].block[5].value=temp;

	for(int i=0;i<=2;i++)
	{
		temp=s[rest].block[i].value;
		s[rest].block[i].value=s[rest].block[i+6].value;
		s[rest].block[i+6].value=temp;
	}
}

void cube::updatepf()
{

	int i,j,k,t;

	for(i=0;i<6;i++)
		s[i].pf=0;

	for(i=0;i<6;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				if(box.value==i)
				{
					if(box.head==1)
						s[i].pf++;
					if(box.head==3)
					{
						if(j==0 && k==0)
						{
							t=6;
							if(s[s[i].go.up].block[t].value==s[i].go.up)
							{
								t=2;
								if(s[s[i].go.left].block[t].value==s[i].go.left)
									s[i].pf++;

							}
						}

						if(j==0 && k==2)
						{
							switch(i)
							{
								case 0: t=8;
									break;
								case 1: t=2;
									break;
								case 2: t=0;
									break;
							}

							if(s[s[i].go.up].block[t].value==s[i].go.up)
							{
								t=0;
								if(s[s[i].go.right].block[t].value==s[i].go.right)
									s[i].pf++;
							}
						}

						if(j==2 && k==0)
						{
							t=8;
							if(s[s[i].go.left].block[t].value==s[i].go.left)
							{
								t=0;
								if(s[s[i].go.down].block[t].value==s[i].go.down)
									s[i].pf++;

							}
						}


						if(j==2 && k==2)
						{
							t=6;
							if(s[s[i].go.right].block[t].value==s[i].go.right)
							{
								switch(i)
								{
									 case 0: t=2;
										break;
									 case 1: t=8;
										break;
									 case 2: t=6;
										break;
								}


								if(s[s[i].go.down].block[t].value==s[i].go.down)
									s[i].pf++;
							}

						}

					}


					if(box.head==2)
					{
						if(j==0 && k==1)
						{
							switch(i)
							{
								case 0: t=7;
									break;
								case 1: t=5;
									break;
								case 2: t=1;
									break;
								case 3: t=3;
									break;
							}

							if(s[s[i].go.up].block[t].value==s[i].go.up)
								s[i].pf++;
						}


						if(j==1 && k==0)
						{
							t=5;
							if(s[s[i].go.left].block[t].value==s[i].go.left)
								s[i].pf++;
						}

						if(j==1 && k==2)
						{
							t=3;
							if(s[s[i].go.right].block[t].value==s[i].go.right)
								s[i].pf++;
						}

						if(j==2 && k==1)
						{
							switch(i)
							{
								case 0: t=1;
									break;
								case 1: t=5;
									break;
								case 2: t=7;
									break;
								case 3: t=3;
								break;
							}

							if(s[s[i].go.down].block[t].value==s[i].go.down)
								s[i].pf++;
						}
					}
				}
			}
		}
	}
}


void cube::showpf()
{
	int i;

	for(i=0;i<6;i++)
		cout<<endl<<"Side: "<<i<<" :Pf= "<<s[i].pf;
}


int cube::check()
{
	int t;
	updatepf();
	int pos=SOLVED;

	for(int i=0;i<4;i++)
	{
		if(s[i].pf!=9)
		{
			pos=UNSOLVED;
			return pos;
		}
	}
	if(pos==SOLVED)
	{
		cout<<endl<<"Cube Solved in "<<stepstaken<<" steps!"<<endl;

		//getch();
		cout<<endl<<"Steps Are:"<<endl;

		//Note that these steps are traced from the random,unsolved
		//position to solved position (INTIAL SET)
		//so array will be printed in string form, as it is
		for(int i=1;i<=stepstaken;i++)
		{
			switch(arr[i]){
				case 1:
					cout<<"Step: "<<i<<" upturn(0,0) x 1\n";
					break;
				case 2:
					cout<<"Step: "<<i<<" upturn(0,0) x 2\n";
					break;
				case 3:
					cout<<"Step: "<<i<<" downturn(0,0) x 1\n";
					break;
				case 4: 
					cout<<"Step: "<<i<<" upturn(0,1) x 1\n";
					break;
				case 5:
					cout<<"Step: "<<i<<" upturn(0,1) x 2\n";
					break;
				case 6:
					cout<<"Step: "<<i<<" downturn(0,1) x 1\n";
					break;
				case 7:
					cout<<"Step: "<<i<<" upturn(0,2) x 1\n";
					break;
				case 8:
					cout<<"Step: "<<i<<" upturn(0,2) x 2\n";
					break;
  			case 9:	
					cout<<"Step: "<<i<<" downturn(0,2) x 1\n";
					break;
  			case 10:
					cout<<"Step: "<<i<<" rightturn(0,0) x 1\n";
					break;
				case 11:	
					cout<<"Step: "<<i<<" rightturn(0,0) x 2\n";
					break;
				case 12:
					cout<<"Step: "<<i<<" lefttturn(0,0) x 1\n";
					break;
				case 13:
					cout<<"Step: "<<i<<" rightturn(0,1) x 1\n";
					break;
				case 14:
					cout<<"Step: "<<i<<" rightturn(0,1) x 2\n";
					break;
				case 15:
					cout<<"Step: "<<i<<" leftturn(0,1) x 1\n";
					break;
				case 16:
					cout<<"Step: "<<i<<" rightturn(0,2) x 1\n";
					break;
				case 17:
					cout<<"Step: "<<i<<" rightturn(0,2) x 2\n";
					break;
				case 18:
					cout<<"Step: "<<i<<" leftturn(0,2) x 1\n";
					break;
				case 19:
					cout<<"Step: "<<i<<" rightturn(5,0) x 1\n";
					break;
				case 20:
					cout<<"Step: "<<i<<" rightturn(5,0) x 2\n";
					break;
				case 21:
					cout<<"Step: "<<i<<" leftturn(5,0) x 1\n";
					break;
  			case 22:
					cout<<"Step: "<<i<<" rightturn(5,1) x 1\n";
					break;
  			case 23:
					cout<<"Step: "<<i<<" rightturn(5,1) x 2\n";
					break;
  			case 24:
					cout<<"Step: "<<i<<" leftturn(5,1) x 1\n";
					break;
				case 25:
					cout<<"Step: "<<i<<" rightturn(5,2) x 1\n";
					break;
				case 26:
					cout<<"Step: "<<i<<" rightturn(5,2) x 2\n";
					break;
				case 27:
					cout<<"Step: "<<i<<" leftturn(5,2) x 1\n";
					break;
		}
	 
	 }

		//getch();
		exit(1);		
	}
	return pos;

}

