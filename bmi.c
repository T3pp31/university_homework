#include<stdio.h>
 int main(){
	float w;
	float h;
	printf("bmiを計測します");

	printf("体重を入力してください(kg):");
	scanf("%f",&w);

	printf("身長を入力してください(m):");
	scanf("%f",&h);

	printf("bmiは%3.2fです\n",w/(h*h));
	return 0;
}
