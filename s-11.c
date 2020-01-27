// Задача S-11 Крулые скобки
// В символьной строке имеются круглые скобки. Проверить, правильно ли они расставлены.

#include <stdio.h>

 int main(void) {

	int j = 0;
	char c;

	printf("\n Vvedite stroku\n");
	
	c = getchar();
		
	while (c != '\n') { 
			
		    if (c == '(') 
				
				j++;
				
		    if (c == ')') 
						
					j --;
			
		  c = getchar();
	}

	(j == 0)? printf("Yes"): printf("No");
 
 return 0;
}