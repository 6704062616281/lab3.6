#include <stdio.h>
int main(){
	int score;
	scanf("%d",&score);
	
	if(score >= 100 && score < 0){
		if(score >= 68){
		if(score >= 85){
			printf("A");
		}else if(score >= 75){
			printf("B");
			printf("A is %d score",85-score);
		}else if(score >= 68){
			printf("C\n");
			printf("B is %d score",75-score);
		}
	}else{
		if(score >= 55){
			printf("D");
			printf("C is %d score",68-score);
		}else{
			printf("F");
			printf("D is %d score",55-score);
		}
	}	
	}else{
		printf(" error score");
	}
	return 0;
}
