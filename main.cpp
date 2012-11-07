# include <fstream>
# include <iostream>
# include <stdlib.h>
# include <stdio.h>
# include <string>
# include "cube.h"


using namespace std;

int stepstaken,limit; 
int arr[20]; //This is the solution array


void opforcube(cube mycube,int a)
{
	if(stepstaken>=limit)
		return;
	if(a==100)
	{

	//First Plane
	{
		//upturn(0,0) column
		{
			stepstaken++;
			//1
			mycube.upturn(0,0);
			arr[stepstaken]=1;
			printf("Step %d: upturn(0,0) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,1);
			//2
			mycube.upturn(0,0);
			arr[stepstaken]=2;
			printf("Step %d: upturn(0,0) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,2);
			//3
			mycube.upturn(0,0);
			arr[stepstaken]=3;
			printf("Step %d: upturn(0,0) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,3);
			//
			mycube.upturn(0,0); //in original position
			//end
			stepstaken--;
		}

		//upturn(0,1) column
		{
			stepstaken++;
			//4
			mycube.upturn(0,1);
			arr[stepstaken]=4;
			printf("Step %d: upturn(0,1) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,4);
			//5
			mycube.upturn(0,1);
			arr[stepstaken]=5;
			printf("Step %d: upturn(0,1) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,5);
			//6
			mycube.upturn(0,1);
			arr[stepstaken]=6;
			printf("Step %d: upturn(0,1) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,6);
			//
			mycube.upturn(0,1); //in original position

			//end
			stepstaken--;
		}
		//upturn(0,2) column
		{
			stepstaken++;
			//7
			mycube.upturn(0,2);
			arr[stepstaken]=7;
			printf("Step %d: upturn(0,2) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,7);
			//8
			mycube.upturn(0,2);
			arr[stepstaken]=8;
			printf("Step %d: upturn(0,2) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,8);
			//9
			mycube.upturn(0,2);
			arr[stepstaken]=9;
			printf("Step %d: upturn(0,2) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,9);
			//
			mycube.upturn(0,2); //in original position

			//end
			stepstaken--;
		}
	}


	//Second Plane
	{
		//rightturn(0,0) row
		{
			stepstaken++;
			//10
			mycube.rightturn(0,0);
			arr[stepstaken]=10;
			printf("Step %d: rightturn(0,0) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,10);
			//11
			mycube.rightturn(0,0);
			arr[stepstaken]=11;
			printf("Step %d: rightturn(0,0) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,11);
			//12
			mycube.rightturn(0,0);
			arr[stepstaken]=12;
			printf("Step %d: rightturn(0,0) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,12);
			//
			mycube.rightturn(0,0);//in original position

			//end
			stepstaken--;
		}

		//rightturn(0,1) row
		{
			stepstaken++;
			//13
			mycube.rightturn(0,1);
			arr[stepstaken]=13;
			printf("Step %d: rightturn(0,1) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,13);
			//14
			mycube.rightturn(0,1);
			arr[stepstaken]=14;
			printf("Step %d: rightturn(0,1) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,14);
			//15
			mycube.rightturn(0,1);
			arr[stepstaken]=15;
			printf("Step %d: rightturn(0,1) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,15);
			//
			mycube.rightturn(0,1); //in original position

			//end
			stepstaken--;

		}

		//rightturn(0,2) row
		{
			stepstaken++;
			//16
			mycube.rightturn(0,2);
			arr[stepstaken]=16;
			printf("Step %d: rightturn(0,2) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,16);
			//17
			mycube.rightturn(0,2);
			arr[stepstaken]=17;
			printf("Step %d: rightturn(0,2) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,17);
			//18
			mycube.rightturn(0,2);
			arr[stepstaken]=18;
			printf("Step %d: rightturn(0,2) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,18);
			//
			mycube.rightturn(0,2); //in original position

			//end
			stepstaken--;
		}
	}

	//Third Plane

	{
		//rightturn(5,0) row
		{
			stepstaken++;
			//19
			mycube.rightturn(5,0);
			arr[stepstaken]=19;
			printf("Step %d: rightturn(5,0) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,19);
			//20
			mycube.rightturn(5,0);
			arr[stepstaken]=20;
			printf("Step %d: rightturn(5,0) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,20);
			//21
			mycube.rightturn(5,0);
			arr[stepstaken]=21;
			printf("Step %d: rightturn(5,0) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,21);
			//
			mycube.rightturn(5,0); //in original position

			//end
			stepstaken--;
		}
		//rightturn(5,1) row
		{
			stepstaken++;
			//22
			mycube.rightturn(5,1);
			arr[stepstaken]=22;
			printf("Step %d: rightturn(5,1) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,22);
			//23
			mycube.rightturn(5,1);
			arr[stepstaken]=23;
			printf("Step %d: rightturn(5,1) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,23);
			//24
			mycube.rightturn(5,1);
			arr[stepstaken]=24;
			printf("Step %d: rightturn(5,1) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,24);
			//
			mycube.rightturn(5,1); //in original position

			//end
			stepstaken--;
		}
		//righturn(5,2) row
		{

			stepstaken++;
			//25
			mycube.rightturn(5,2);
			arr[stepstaken]=25;
			printf("Step %d: rightturn(5,2) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,25);
			//26
			mycube.rightturn(5,2);
			arr[stepstaken]=26;
			printf("Step %d: rightturn(5,2) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,26);
			//27
			mycube.rightturn(5,2);
			arr[stepstaken]=27;
			printf("Step %d: rightturn(5,2) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,27);
			//
			mycube.rightturn(5,2); //in original position

			//end
			stepstaken--;
		}
	}
	//End of initial entry point
	}


	/*
	 * The below section is the portion of code which is triggered from generation section when a = 100, 
	 * or in other words here it is defined what happens when a = 1, a = 2 and a = 3.
	 */

	/* For first plane */
	if(a==1) //22 rotations  change will occur in first plane ..second and third will remain same
	{

	//First Plane
	{
		//upturn(0,0) column
		{
		     //left as it is the same column
		}
		//upturn(0,1) column
		{
			stepstaken++;
			//5
			mycube.upturn(0,1);
			mycube.upturn(0,1);

			arr[stepstaken]=5;
			printf("Step %d: upturn(0,1) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,5);
			//6
			mycube.upturn(0,1);
			arr[stepstaken]=6;
			printf("Step %d: upturn(0,1) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,6);
			//
			mycube.upturn(0,1); //in original position
			//end
			stepstaken--;
		}


		//upturn(0,2) column
		{
			stepstaken++;
			//8
			mycube.upturn(0,2);
			mycube.upturn(0,2);

			arr[stepstaken]=8;
			printf("Step %d: upturn(0,2) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,8);
			//9
			mycube.upturn(0,2);
			arr[stepstaken]=9;
			printf("Step %d: upturn(0,2) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,9);
			//
			mycube.upturn(0,2); //in original position
			//end
			stepstaken--;
		}
	}
	//remaining part of a==1 is with same for first plane
	}

	if(a==2) //20 rotations  change will occur in first plane ..second and third will remain same
	{

	//defined as first plane
	{
		//upturn(0,0) column
		{
		     //left as it is the same column
		}
		//upturn(0,1) column
		{
			stepstaken++;
			//6
			mycube.upturn(0,1);
			mycube.upturn(0,1);
			mycube.upturn(0,1);

			arr[stepstaken]=6;
			printf("Step %d: upturn(0,1) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,6);
			//
			mycube.upturn(0,1); //in original position
			//end
			stepstaken--;
		}


		//upturn(0,2) column
		{
			stepstaken++;
			//9
			mycube.upturn(0,2);
			mycube.upturn(0,2);
			mycube.upturn(0,2);

			arr[stepstaken]=9;
			printf("Step %d: upturn(0,2) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,9);
			//
			mycube.upturn(0,2); //in original position
			//end
			stepstaken--;
		}
	}
	//remaining part of a==2 is with *same for first plane
	}


	//*same for first plane
	if(a>0 && a<=9)//18 rotations for each (22+20+18*7)*3=504!!
	{
	//Defined as second plane
	{
		//rightturn(0,0) row
		{
			stepstaken++;
			//10
			mycube.rightturn(0,0);
			arr[stepstaken]=10;
			printf("Step %d: rightturn(0,0) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,10);
			//11
			mycube.rightturn(0,0);
			arr[stepstaken]=11;
			printf("Step %d: rightturn(0,0) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,11);
			//12
			mycube.rightturn(0,0);
			arr[stepstaken]=12;
			printf("Step %d: rightturn(0,0) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,12);
			//
			mycube.rightturn(0,0);//in original position

			//end
			stepstaken--;
		}

		//rightturn(0,1) row
		{
			stepstaken++;
			//13
			mycube.rightturn(0,1);
			arr[stepstaken]=13;
			printf("Step %d: rightturn(0,1) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,13);
			//14
			mycube.rightturn(0,1);
			arr[stepstaken]=14;
			printf("Step %d: rightturn(0,1) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,14);
			//15
			mycube.rightturn(0,1);
			arr[stepstaken]=15;
			printf("Step %d: rightturn(0,1) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,15);
			//
			mycube.rightturn(0,1); //in original position

			//end
			stepstaken--;

		}

		//rightturn(0,2) row
		{
			stepstaken++;
			//16
			mycube.rightturn(0,2);
			arr[stepstaken]=16;
			printf("Step %d: rightturn(0,2) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,16);
			//17
			mycube.rightturn(0,2);
			arr[stepstaken]=17;
			printf("Step %d: rightturn(0,2) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,17);
			//18
			mycube.rightturn(0,2);
			arr[stepstaken]=18;
			printf("Step %d: rightturn(0,2) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,18);
			//
			mycube.rightturn(0,2); //in original position

			//end
			stepstaken--;
		}
	}

	//Defined as third plane

	{
		//rightturn(5,0) row
		{
			stepstaken++;
			//19
			mycube.rightturn(5,0);
			arr[stepstaken]=19;
			printf("Step %d: rightturn(5,0) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,19);
			//20
			mycube.rightturn(5,0);
			arr[stepstaken]=20;
			printf("Step %d: rightturn(5,0) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,20);
			//21
			mycube.rightturn(5,0);
			arr[stepstaken]=21;
			printf("Step %d: rightturn(5,0) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,21);
			//
			mycube.rightturn(5,0); //in original position

			//end
			stepstaken--;
		}
		//rightturn(5,1) row
		{
			stepstaken++;
			//22
			mycube.rightturn(5,1);
			arr[stepstaken]=22;
			printf("Step %d: rightturn(5,1) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,22);
			//23
			mycube.rightturn(5,1);
			arr[stepstaken]=23;
			printf("Step %d: rightturn(5,1) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,23);
			//24
			mycube.rightturn(5,1);
			arr[stepstaken]=24;
			printf("Step %d: rightturn(5,1) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,24);
			//
			mycube.rightturn(5,1); //in original position

			//end
			stepstaken--;
		}
		//righturn(5,2) row
		{

			stepstaken++;
			//25
			mycube.rightturn(5,2);
			arr[stepstaken]=25;
			printf("Step %d: rightturn(5,2) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,25);
			//26
			mycube.rightturn(5,2);
			arr[stepstaken]=26;
			printf("Step %d: rightturn(5,2) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,26);
			//27
			mycube.rightturn(5,2);
			arr[stepstaken]=27;
			printf("Step %d: rightturn(5,2) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,27);
			//
			mycube.rightturn(5,2); //in original position
			
			//end
			stepstaken--;
		}
	}
	//end of same for plane first
	}
	/* End of first plane */


	/* For second plane */
	if(a==10)//22 rotations  change will occur in second plane ..first and third will remain same
	{

	//Defined as second plane
	{
		//rightturn(0,0) row
		{
		     //left as it is the same row
		}
		//rightturn(0,1) row
		{
			stepstaken++;
			//14
			mycube.rightturn(0,1);
			mycube.rightturn(0,1);

			arr[stepstaken]=14;
			printf("Step %d: rightturn(0,1) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,14);
			//15
			mycube.rightturn(0,1);
			arr[stepstaken]=15;
			printf("Step %d: rightturn(0,1) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,15);
			//
			mycube.rightturn(0,1); //in original position
			//end
			stepstaken--;
		}


		//rightturn(0,2) column
		{
			stepstaken++;
			//17
			mycube.rightturn(0,2);
			mycube.rightturn(0,2);

			arr[stepstaken]=17;
			printf("Step %d: rightturn(0,2) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,17);
			//18
			mycube.rightturn(0,2);
			arr[stepstaken]=18;
			printf("Step %d: rightturn(0,2) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,18);
			//
			mycube.rightturn(0,2); //in original position
			//end
			stepstaken--;
		}
	}
	//remaining part of a==10 is with *same for second plane
	}

	if(a==11) //20 rotations  change will occur in second plane ..first and third will remain same
	{

	//Defined as second plane
	{
		//rightturn(0,0) row
		{
		     //left as it is the same row
		}
		//rightturn(0,1) row
		{
			stepstaken++;
			//15
			mycube.rightturn(0,1);
			mycube.rightturn(0,1);
			mycube.rightturn(0,1);

			arr[stepstaken]=15;
			printf("Step %d: rightturn(0,1) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,15);
			//
			mycube.rightturn(0,1); //in original position
			//it was for the dilemma
			//end
			stepstaken--;
		}


		//rightturn(0,2) row
		{
			stepstaken++;
			//18
			mycube.rightturn(0,2);
			mycube.rightturn(0,2);
			mycube.rightturn(0,2);

			arr[stepstaken]=18;
			printf("Step %d: rightturn(0,2) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,18);
			//
			mycube.rightturn(0,2); //in original position
			//end
			stepstaken--;
		}
	}
	//remaining part of a==11 is with SAME FOR FIRST PLANE
	}


	//*Same for second plane
	if(a>9 && a<=18)//18 rotations for each (22+20+18*7)*3=504!!
	{
	//Defined as First plane
	{
		//upturn(0,0) column
		{
			stepstaken++;
			//1
			mycube.upturn(0,0);
			arr[stepstaken]=1;
			printf("Step %d: upturn(0,0) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,1);
			//skipping 8 14 2  or 6 14 2
			if(stepstaken>=3 && (arr[stepstaken-2]==8 || arr[stepstaken-2]==6) && arr[stepstaken-1]==14)
			{
				//3
				mycube.upturn(0,0);
				mycube.upturn(0,0);
				arr[stepstaken]=3;
				printf("Step %d: upturn(0,0) x 3\n",stepstaken);
				mycube.check();
				opforcube(mycube,3);
			}
			else
			{
			//2
			mycube.upturn(0,0);
			arr[stepstaken]=2;
			printf("Step %d: upturn(0,0) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,2);
			//3
			mycube.upturn(0,0);
			arr[stepstaken]=3;
			printf("Step %d: upturn(0,0) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,3);
			}
			//
			mycube.upturn(0,0); //in original position
			//end
			stepstaken--;
		}

		//upturn(0,1) column
		{
			stepstaken++;
			//skipping 8 14 4 , 8 (14 5), 8 14 6   or 6 14 4, 6 (14 5), 6 14 6
			if(stepstaken>=3 && (arr[stepstaken-2]==8 || arr[stepstaken-2]==6) && arr[stepstaken-1]==14)
			{
			   ;//do nothing
			}
			else
			{


				//4
				mycube.upturn(0,1);
				arr[stepstaken]=4;
				printf("Step %d: upturn(0,1) x 1\n",stepstaken);
				mycube.check();
				opforcube(mycube,4);
				//skipping 14,5
				if(a==14)//or arr[stepstaken-1]==14
				{
					//6
					mycube.upturn(0,1);
					mycube.upturn(0,1);
					arr[stepstaken]=6;
					printf("Step %d: upturn(0,1) x 3\n",stepstaken);
					mycube.check();
					opforcube(mycube,6);
				}
				else
				{
				//5
				mycube.upturn(0,1);
				arr[stepstaken]=5;
				printf("Step %d: upturn(0,1) x 2\n",stepstaken);
				mycube.check();
				opforcube(mycube,5);
				//6
				mycube.upturn(0,1);
				arr[stepstaken]=6;
				printf("Step %d: upturn(0,1) x 3\n",stepstaken);
				mycube.check();
				opforcube(mycube,6);
				}
				//
				mycube.upturn(0,1); //in original position
			}
			//end
			stepstaken--;
		}
		//upturn(0,2) column
		{
			stepstaken++;
			//7
			mycube.upturn(0,2);
			arr[stepstaken]=7;
			printf("Step %d: upturn(0,2) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,7);
			//skipping 8 14 8 or 6 14 8
			if(stepstaken>=3 && (arr[stepstaken-2]==8 || arr[stepstaken-2]==6) && arr[stepstaken-1]==14)
			{
				//9
				mycube.upturn(0,2);
				mycube.upturn(0,2);
				arr[stepstaken]=9;
				printf("Step %d: upturn(0,2) x 3\n",stepstaken);
				mycube.check();
				opforcube(mycube,9);

			}
			else
			{

			//8
			mycube.upturn(0,2);
			arr[stepstaken]=8;
			printf("Step %d: upturn(0,2) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,8);
			//9
			mycube.upturn(0,2);
			arr[stepstaken]=9;
			printf("Step %d: upturn(0,2) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,9);
			}
			//
			mycube.upturn(0,2); //in original position

			//end
			stepstaken--;
		}
	}


	//Defined as third plane

	{
		//rightturn(5,0) row
		{
			stepstaken++;
			//19
			mycube.rightturn(5,0);
			arr[stepstaken]=19;
			printf("Step %d: rightturn(5,0) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,19);
			//20
			mycube.rightturn(5,0);
			arr[stepstaken]=20;
			printf("Step %d: rightturn(5,0) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,20);
			//21
			mycube.rightturn(5,0);
			arr[stepstaken]=21;
			printf("Step %d: rightturn(5,0) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,21);
			//
			mycube.rightturn(5,0); //in original position

			//end
			stepstaken--;
		}
		//rightturn(5,1) row
		{
			stepstaken++;
			//22
			mycube.rightturn(5,1);
			arr[stepstaken]=22;
			printf("Step %d: rightturn(5,1) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,22);
			//23
			mycube.rightturn(5,1);
			arr[stepstaken]=23;
			printf("Step %d: rightturn(5,1) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,23);
			//24
			mycube.rightturn(5,1);
			arr[stepstaken]=24;
			printf("Step %d: rightturn(5,1) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,24);
			//
			mycube.rightturn(5,1); //in original position

			//end
			stepstaken--;
		}
		//righturn(5,2) row
		{

			stepstaken++;
			//25
			mycube.rightturn(5,2);
			arr[stepstaken]=25;
			printf("Step %d: rightturn(5,2) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,25);
			//26
			mycube.rightturn(5,2);
			arr[stepstaken]=26;
			printf("Step %d: rightturn(5,2) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,26);
			//27
			mycube.rightturn(5,2);
			arr[stepstaken]=27;
			printf("Step %d: rightturn(5,2) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,27);
			//
			mycube.rightturn(5,2); //in original position

			//end
			stepstaken--;
		}
	}
	//end of *same for plane second
	}
	/* End of second plane */



        /* For third plane */
	if(a==19) //22 rotations  change will occur in third plane ..first and second will remain same
	{

	// Defined as third plane
	{
		//rightturn(5,0) row
		{
		     //left as it is the same row
		}
		//rightturn(5,1) row
		{
			stepstaken++;
			//23
			mycube.rightturn(5,1);
			mycube.rightturn(5,1);

			arr[stepstaken]=23;
			printf("Step %d: rightturn(5,1) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,23);
			//24
			mycube.rightturn(5,1);
			arr[stepstaken]=24;
			printf("Step %d: rightturn(5,1) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,24);
			//
			mycube.rightturn(5,1); //in original position
			//end
			stepstaken--;
		}


		//rightturn(5,2) column
		{
			stepstaken++;
			//26
			mycube.rightturn(5,2);
			mycube.rightturn(5,2);

			arr[stepstaken]=26;
			printf("Step %d: rightturn(5,2) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,26);
			//27
			mycube.rightturn(5,2);
			arr[stepstaken]=27;
			printf("Step %d: rightturn(5,2) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,27);
			//
			mycube.rightturn(5,2); //in original position
			//it was for the dilemma
			//end
			stepstaken--;
		}
	}
	//remaining part of a==19 is with *same for third plane
	}

	if(a==20)//20 rotations  change will occur in third plane ..first and second will remain same
	{

	//Defined as third plane
	{
		//rightturn(5,0) row
		{
		     //left as it is the same row
		}
		//rightturn(5,1) row
		{
			stepstaken++;
			//24
			mycube.rightturn(5,1);
			mycube.rightturn(5,1);
			mycube.rightturn(5,1);

			arr[stepstaken]=24;
			printf("Step %d: rightturn(5,1) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,24);
			//
			mycube.rightturn(5,1); //in original position
			//end
			stepstaken--;
		}


		//rightturn(5,2) row
		{
			stepstaken++;
			//27
			mycube.rightturn(5,2);
			mycube.rightturn(5,2);
			mycube.rightturn(5,2);

			arr[stepstaken]=27;
			printf("Step %d: rightturn(5,2) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,27);
			//
			mycube.rightturn(5,2); //in original position
			//end
			stepstaken--;
		}
	}
	//remaining part of a==20 is with *same for third plane
	}


	//*Same for third plane
	if(a>18 && a<=27)//18 rotations for each (22+20+18*7)*3=504!!
	{
	// Defined as first plane
	{
		//upturn(0,0) column
		{
			stepstaken++;
			//1
			mycube.upturn(0,0);
			arr[stepstaken]=1;
			printf("Step %d: upturn(0,0) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,1);
			//skipping 8 23 2 or 6 23 2
			if(stepstaken>=3 && (arr[stepstaken-2]==8 || arr[stepstaken-2]==6) && arr[stepstaken-1]==23)
			{
				//3

				mycube.upturn(0,0);
				mycube.upturn(0,0);
				arr[stepstaken]=3;
				printf("Step %d: upturn(0,0) x 3\n",stepstaken);
				mycube.check();
				opforcube(mycube,3);

			}
			else
			{

			//2
			mycube.upturn(0,0);
			arr[stepstaken]=2;
			printf("Step %d: upturn(0,0) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,2);
			//3
			mycube.upturn(0,0);
			arr[stepstaken]=3;
			printf("Step %d: upturn(0,0) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,3);
			}
			//
			mycube.upturn(0,0); //in original position
			//end
			stepstaken--;
		}

		//upturn(0,1) column
		{
			stepstaken++;

			//skipping 8 23 4 , 8 (23 5), 8 23 6 or 6 23 4, 6 (23 5), 6 23 6
			if(stepstaken>=3 && (arr[stepstaken-2]==8 || arr[stepstaken-2]==6) && arr[stepstaken-1]==23)
			{
			   ;//do nothing
			}
			else
			{
				//4
				mycube.upturn(0,1);
				arr[stepstaken]=4;
				printf("Step %d: upturn(0,1) x 1\n",stepstaken);
				mycube.check();
				opforcube(mycube,4);
				//skipping 23,5
				if(a==23)
				{
					//6
					mycube.upturn(0,1);
					mycube.upturn(0,1);
					arr[stepstaken]=6;
					printf("Step %d: upturn(0,1) x 3\n",stepstaken);
					mycube.check();
					opforcube(mycube,6);
				}
				else
				{
				//5
				mycube.upturn(0,1);
				arr[stepstaken]=5;
				printf("Step %d: upturn(0,1) x 2\n",stepstaken);
				mycube.check();
				opforcube(mycube,5);
				//6
				mycube.upturn(0,1);
				arr[stepstaken]=6;
				printf("Step %d: upturn(0,1) x 3\n",stepstaken);
				mycube.check();
				opforcube(mycube,6);
				}
				//
				mycube.upturn(0,1); //in original position

				//end
			}
			stepstaken--;
		}
		//upturn(0,2) column
		{
			stepstaken++;
			//7
			mycube.upturn(0,2);
			arr[stepstaken]=7;
			printf("Step %d: upturn(0,2) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,7);
			//skipping 8 23 8 or 6 23 8
			if(stepstaken>=3 && (arr[stepstaken-2]==8 || arr[stepstaken-2]==6) && arr[stepstaken-1]==23)
			{
				//9
				mycube.upturn(0,2);
				mycube.upturn(0,2);
				arr[stepstaken]=9;
				printf("Step %d: upturn(0,2) x 3\n",stepstaken);
				mycube.check();
				opforcube(mycube,9);

			}
			else
			{

			//8
			mycube.upturn(0,2);
			arr[stepstaken]=8;
			printf("Step %d: upturn(0,2) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,8);
			//9
			mycube.upturn(0,2);
			arr[stepstaken]=9;
			printf("Step %d: upturn(0,2) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,9);
			}
			//
			mycube.upturn(0,2); //in original position

			//end
			stepstaken--;
		}
	}

	//Defined as second plane
	{
		//rightturn(0,0) row
		{
			stepstaken++;
			//10
			mycube.rightturn(0,0);
			arr[stepstaken]=10;
			printf("Step %d: rightturn(0,0) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,10);
			//11
			mycube.rightturn(0,0);
			arr[stepstaken]=11;
			printf("Step %d: rightturn(0,0) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,11);
			//12
			mycube.rightturn(0,0);
			arr[stepstaken]=12;
			printf("Step %d: rightturn(0,0) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,12);
			//
			mycube.rightturn(0,0);//in original position

			//end
			stepstaken--;
		}

		//rightturn(0,1) row
		{
			stepstaken++;
			//13
			mycube.rightturn(0,1);
			arr[stepstaken]=13;
			printf("Step %d: rightturn(0,1) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,13);
			//skipping 23,14
			if(a==23)
			{
				//15
				mycube.rightturn(0,1);
				mycube.rightturn(0,1);
				arr[stepstaken]=15;
				printf("Step %d: rightturn(0,1) x 3\n",stepstaken);
				mycube.check();
				opforcube(mycube,15);
			}
			else
			{
			//14
			mycube.rightturn(0,1);
			arr[stepstaken]=14;
			printf("Step %d: rightturn(0,1) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,14);
			//15
			mycube.rightturn(0,1);
			arr[stepstaken]=15;
			printf("Step %d: rightturn(0,1) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,15);
			}
			//
			mycube.rightturn(0,1); //in original position

			//end
			stepstaken--;

		}

		//rightturn(0,2) row
		{
			stepstaken++;
			//16
			mycube.rightturn(0,2);
			arr[stepstaken]=16;
			printf("Step %d: rightturn(0,2) x 1\n",stepstaken);
			mycube.check();
			opforcube(mycube,16);
			//17
			mycube.rightturn(0,2);
			arr[stepstaken]=17;
			printf("Step %d: rightturn(0,2) x 2\n",stepstaken);
			mycube.check();
			opforcube(mycube,17);
			//18
			mycube.rightturn(0,2);
			arr[stepstaken]=18;
			printf("Step %d: rightturn(0,2) x 3\n",stepstaken);
			mycube.check();
			opforcube(mycube,18);
			//
			mycube.rightturn(0,2); //in original position

			//end
			stepstaken--;
		}
	}

	//end of *same for plane third
	}
	/* End of third plane */


}


int main(void)
{
	// We create an instance of cube
	cube admin;

	// We read input file
  	admin.inputfromfile("ip.txt");
	//admin.status();
	admin.check();

	/*
	 * This is naive implementation of brute force way of trying to solve rubik cube using our cube class.
	 * 'stepstaken' is a global variable which keeps the depth count of recursive calls we have made so far in 'opforcube' function.
	 * 'limit' is also a global variable which decides for how much depth we can do recursive call of 'opforcube' function.
	 * Each time in for loop we believe that given problem can be solved in 'i' number of steps starting from 1, so when we are not able
	 * to solve the cube in 'limit = i' number of 'depths' or 'levels' we increase 'level' by 1, and try 'opforcube' function with increasing
	 * depth of levels.
	 * On each level there are 3 rotatary planes defined with 9 rotations each, 
	 * overall we have 27 numbers of possible rotations, so on first level there are 27 
	 * possibilities on second level there are 27 * 27 and so on, so running time increases exponentially.
	 * It's not a good way to approach towards solving rubik cube problem, this is just a use case of this cube class.
	 */

	stepstaken=0;
	for(int i=1;i<=5;i++)
	{
		limit=i;
		opforcube(admin,100); // 100 is just a constant that tells us inside 'opforcube' function that this is the first call from 'main'
	}

	return 0;
}


