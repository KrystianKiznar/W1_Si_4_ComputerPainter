#include <stdio.h>

void rectangl_x(int row, int col)
{	

	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			printf("X");
		}
		printf("\n");
	}
}
void triangle(int row)
{
	
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("X");
		}
		printf("\n");
	}

}

void XO_pattern(int row, int col)
{
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			if (!(i % 2 == 0))
				printf("XO");
			else
				printf("OX");

		}
		printf("\n");
	}


}

void frame_pattern(int row, int col)
{
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			if ((i == 1) || (i == row) || (j == 1) || (j == col))
				printf("X");

			else
				printf("o");
		}
		printf("\n");
	}
}

void cross_pattern(int row, int col)
{
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			if ((i == 1) || (i == row) || (j == 1) || (j == col) || (j == i) || (j == (col - i+1)))
				printf("X");

			else
				printf("o");
		}
		printf("\n");
	}

}
//level 2

void diamond_pattern(int row)
{
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= 2*row - 1; j++)
		{
			if (j >= row - (i - 1) && j <= row + (i - 1))
			{
				printf("X");
			}
			else
			{
				printf("o");
			}
		}
		printf("\n");
	}


}

void chess_pattern(int row)
{
	for (int i = 1; i <= row; i++)
	{
		if (!(i % 2 == 0))
		{
			printf("oooXXXoooXXX");
		}
		else
		{
			printf("XXXoooXXXooo");
		}

		printf("\n");
	}

}



int main()

{
	int row, col, option;

	printf("Enter the row and col number (only odd numbers): \n");

	while (1)
	{
	scanf_s("%d", &row);
	scanf_s("%d", &col);
	if ((row % 2 == 0) || (col%2 == 0))
	{
		printf("Only odd numbers. Try again!\n");
		continue;
	}
	break;
	}

	printf("Choose the pattern:\n1.Xo_pattern\n2.triangle\n3.rectangle_x\n4.frame_pattern\n5.cross_pattern\n6.diamond_pattern\n7.chess_pattern\n");

	scanf_s("%d", &option);

	switch (option)
	{
		case 1:
		{
		XO_pattern(row,col);
		}
		break;
		case 2:
		{
		triangle(row);
		}
		break;
		case 3:
		{
		rectangl_x(row,col);
		}
		break;
		case 4:
		{
		frame_pattern(row, col);
		}
		break;
		case 5:
		{
		cross_pattern(row, col);
		}
		break;
		case 6:
		{
		diamond_pattern(row);
		}
		break;
		case 7:
		{
		chess_pattern(row);
		}
		break;
		default:
		printf("Unknown!");
	}
	return 0;
}