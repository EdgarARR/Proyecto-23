#include<stdio.h>
#include<math.h>

void fDeX(int x, int res1){
	
res1= (5*pow(x,3))+(4*pow(x,2))-(6*x)+7;
printf(" F(x): %d\n", res1);	
}

void fPDeX(int x, int res2){

res2=(15*pow(x,2))+(8*x)-6;
printf(" F'(x): %d\n", res2);		
}

void fPPDeX(int x, int res3){

res3=(30*x)+8;
printf(" F''(x): %d\n", res3);
}


int main(){
int ls, li , x, res1, res2, res3;
	printf("El limite inferior es: ");
	scanf("%d", &li);
	printf("\n\n");
	printf("Y el limite superior es: ");
	scanf("%d", &ls);
	
for(x=li; x<=ls; x++ ){
	printf("\n%d", x);  
    fDeX(x, res1);
	fPDeX(x, res2);
	fPPDeX(x, res3);
}
	return 0;
}
