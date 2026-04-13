int main() {

	int N, C;

	(void)scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		(void)scanf("%d", &C);

		while (C > 0) {
			printf("%d ", C / 25);
			C = C % 25;
			printf("%d ", C / 10);
			C = C % 10;
			printf("%d ", C / 5);
			C = C % 5;
			printf("%d\n", C / 1);
			C = C % 1;
		}
	}

	return 0;
}