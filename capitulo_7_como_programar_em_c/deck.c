#include<stdio.h> 
#include<stdlib.h>
#include<time.h> 


void shuffle(int wdeck[][13]);
void distributes(const int wdeck[][13], const char *wnaipe[],
				 const char *wnaipe[]);
				 
int main(void)
{
	const char *naipe[4] = {"hearts","diamond", "sticks", "swords"};
	
	const char *face[13] =
	{
		"As","two","three","four", 
		"five","six","seven","eith",
		"nine","ten","jack","lady","king"};
		
	int deck[4][13] = {0};
	
	srand(time(0));
	
	shuffle(deck);
	distributes(deck, face, suit);
	
	return 0;	
}

void shuffle(int wdeck[][13])
{
	int line;
	int column;
	int letter;
	
	for(letter = 1; letter <= 52; letter++)
	{
		do {
			
		line = rand() % 4;
		column = rand() % 13;
		
		}while(wdeck[line][column] != 0);
	
		wdeck[line][column] = letter;
	}

}

void distributes(const int wdeck[][13], const char *wnaipe[],
const char *wnaipe[])
{
	int letter;
	int line;
	int column;
	
	for(letter = 1; letter <= 52; letter++)
	{
		for(line = 0; line <= 3; line++)
		{
			for(column = 0; column <= 12; column++)
			{
				if(wdeck[line][column] == letter)
				{
					printf("%5s of %-8s%c", wnaipe[column], wnaipe[line],
					letter % 2 == 0? '\n':'\t');
				}
			}
		}
	}
}