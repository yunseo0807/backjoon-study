#include <math.h>
int main() {
	int N;

	(void)scanf("%d", &N);

	int num = 4;

	if (N == 0) {
		num = 4;
	}
	else {
		for (int i = 1; i <= N; i++) {
			num = (sqrt(num)*2 - 1) * (sqrt(num)*2 - 1);
		}
	}
	printf("%d", num);

	return 0;
}