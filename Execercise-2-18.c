#include<stdio.h>
#include<math.h>

//factorial function
double fact(n){ 
	double value = 1.0;
	int i = 1;
	for(i=1;i<=n;i++){ //factorial loop
		value = value*i;
	}
	return value;
}

double act(n,m){
	double ans = fact(n)/fact(m)*fact(n-m); //book declerated equalation
	return ans; //return value
}

//main function
int main(void){
	
	int n, m;
	printf("Enter n number : ");
	scanf("%d",&n);
	printf("Enter m number must be less than and equal with n : ");
	scanf("%d",&m);
	
	printf("final_ans: %.2f\n",act(n,m));
	
	return 0;
}
