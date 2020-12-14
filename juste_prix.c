#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int x,a,b;
	const int MAX = 100, MIN = 10;
	
	x = 0 ;								// initialisation du boucle de recommencement
	while (x == 0){
		srand(time(NULL));				// initialisation du générateur des nombres aléatoires
		a = rand()%MAX;
		
		while(b != a){
		printf("Quel est le prix ? \n");
		scanf("%d",&b);
		
		if(a > b)
			printf("C'est plus!");
		else if(a < b)
			printf("C'est moins!");
		else
			printf("Vous avez trouvez le juste prix!!");
		}
		printf("Vous voulez recommencez? 0: Oui 1:Non \n");
		scanf("%d",&x);
	}
	
	return 0;
}
