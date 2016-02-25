#include<stdlib.h>
#include<stdio.h>

/////// Esteban Marin

/////// Battle FLeet


int main()
{
	char firex, firey , shots = 0;
	char ans = 'y';
	char i, j;

	do {
		char wincondition = '0';

		char waterfield[12][13] =
		{
			{ ' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ' ' },
			{ '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '0' },
			{ '1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '1' },
			{ '2', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '2' },
			{ '3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '3' },
			{ '4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '4' },
			{ '5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '5' },
			{ '6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '6' },
			{ '7', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '7' },
			{ '8', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '8' },
			{ '9', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '9' },
			{ ' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ' ' },
		};


		do
		{
			system("cls");
			
			// print map

			for (i = 0; i < 12; i++)
			{
				for (j = 0; j < 13; j++)
				{
					printf("%c", waterfield[i][j]);
				}
				printf("\n");
			}
			// SHIPS & FIRE
			printf("\nFIRE!\nX: ");
			scanf_s("%c", &firex);
			getchar();
			printf("Y: ");
			scanf_s("%c", &firey);
			getchar();

			shots++;

			////////////// SHIPS ///////////////

			/////////////// A
			if (firey == '8' && firex == '7')
			{
				waterfield[9][8] = 'A';
			}
			/////////////// B
			if (firey == '8' && firex == '0')
			{
				waterfield[9][1] = 'B';
			}
			if (firey == '7' && firex == '0')
			{
				waterfield[8][1] = 'B';
			}

			/////////////// C
			if (firey == '4' && firex == '4')
			{
				waterfield[5][5] = 'C';
			}
			if (firey == '4' && firex == '5')
			{
				waterfield[5][6] = 'C';
			}
			if (firey == '4' && firex == '6')
			{
				waterfield[5][7] = 'C';
			}

			////////////// D
			if (firey == '2' && firex == '9')
			{
				waterfield[3][10] = 'D';
			}
			if (firey == '3' && firex == '9')
			{
				waterfield[4][10] = 'D';
			}
			if (firey == '4' && firex == '9')
			{
				waterfield[5][10] = 'D';
			}
			if (firey == '5' && firex == '9')
			{
				waterfield[6][10] = 'D';
			}

			////////// WIN CONDITION ///////////

			if (waterfield[9][8] == 'A' && waterfield[9][1] == 'B'&& waterfield[8][1] == 'B' && waterfield[5][5] == 'C' && waterfield[5][6] == 'C' && waterfield[5][7] == 'C' && waterfield[3][10] == 'D' && waterfield[4][10] == 'D' && waterfield[5][10] == 'D' && waterfield[6][10] == 'D')
			{
				system("cls");
				// print map
				wincondition = '1';

				for (i = 0; i < 12; i++)
				{
					for (j = 0; j < 13; j++)
					{
						printf("%c", waterfield[i][j]);
					}
					printf("\n");
				}	
			}
		} while (wincondition == '0');

		///////// PLAY AGAIN? //////////

		printf("\nYou fired %i times.\nPlay again(y/n)? ", shots);
		scanf_s("%c", &ans);
		getchar();

	}while (ans == 'y');
	
	return 0;
}