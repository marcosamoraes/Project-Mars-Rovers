//Project Mars Rovers - Marcos Moraes

#include <stdio.h>
#include <conio.h>

int main()
{
	int x, y, x_init, y_init, x_max, y_max, _pos; 
	char pos, com;
	
	scanf("%d %d", &x_max, &y_max);
	printf("\n");
	
	do{
		scanf("%d %d %c", &x_init, &y_init, &pos);
		printf("\n");
		
		if(pos == 'O')
			_pos = 0;
		if(pos == 'N')
			_pos = 1;
		if(pos == 'E')
			_pos = 2;
		if(pos == 'S')
			_pos = 3;									
		
		x = x_init;
		y = y_init;
		
		do{
			com = getche();
			
			switch(com)
			{
				case 'L':
					if(_pos > 0)
						_pos--;
					else
						_pos = 3;
					break;
				case 'R':
					if(_pos < 3)
						_pos++;
					else
						_pos = 0;
					break;
				case 'M':
					if(_pos == 0)
						x--;
					else if(_pos == 1)
						y++;
					else if(_pos == 2)
						x++;
					else if(_pos == 3)
						y--;
					break;
				default:
					break;				
			}
		}while(com == 'L' || com == 'R' || com == 'M');
		
		if(_pos == 0)
			pos = 'O';
		if(_pos == 1)
			pos = 'N';
		if(_pos == 2)
			pos = 'E';
		if(_pos == 3)
			pos = 'S';	
		
		printf("\n\n%d %d %c\n\n", x, y, pos);
		
	}while((x_init <= x_max) && (y_init <= y_max));
	
	getch();
}
