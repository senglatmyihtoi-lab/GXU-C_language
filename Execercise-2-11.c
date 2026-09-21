#include<stdio.h>
#include<math.h>
int main(void){
	double x,y; //declare variable
	
	printf("Enter the num of x : ");
	scanf("%lf",&x); //asigh the value of x
	
	if(x<0){
		y = pow(x+1,2)+2*x+1/x; // the method of power() if x was less than 0
	}
	else{
		y = sqrt(x); // the method of square_root if i was greater than 0
	}
	
	printf("y value is : %.2f\n",y); //printout the final y result
	return 0; // no return value
}
