#include <stdio.h>
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int price, day = 0, pay = 9000;
		scanf("%d", &price);
		while(price > 0)
        {
            if(day % 7 == 0 && (day != 0))
            {
                pay += 200;
            }
            price -= pay * 7;
            day++;
        }
		printf("%d\n", day);
	}
    return 0;
}