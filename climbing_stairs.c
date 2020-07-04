#include <stdio.h>
int solution(int n){
	if(n<=0){
		return 0; //不合法的台阶数
	}
	switch(n){
		case 1: return 1;
		case 2: return 2;
		default:{
			//int sum = 2;
			//for (int i = 1; i < n - 1; i++){
				//sum += solution(i);
			//}
			//return sum;
			return solution(n-1)+solution(n-2);
		}		
	}
	

}
int main(void){
	int s;
	printf("请输入台阶数：");
	scanf("%d",&s);
	printf("走法共有%d种。\n",solution(s));
}