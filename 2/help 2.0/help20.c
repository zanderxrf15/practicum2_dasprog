#include <stdio.h>

	int main(){
		int T,N,M,number=0;
		char typepattern;
		scanf("%d",&T);
		while(T > 0){
			scanf("%c %d %d",&typepattern,&N,&M);
			T--;
			number++;
			printf("Pattern no : %d\n",number);
			if(typepattern == 'A') {
				for(int i = N; i>0; i--) {
					if(i%2!=0) printf(" ");
					for(int j = 1; j <= M; j++){
						if(j%2!=0) printf(".");
						else printf("-");
					}
					printf("\n");
				}
			}
			else if(typepattern == 'B') {
				for(int i = N; i > 0; i--) {
					if(i%2 == 0) printf(" ");
					for(int j = 1; j <= M; j++){
						if(j%2!=0) printf("-");
						else printf(".");
					}
					printf("\n");
				}
			}
		}

	}
