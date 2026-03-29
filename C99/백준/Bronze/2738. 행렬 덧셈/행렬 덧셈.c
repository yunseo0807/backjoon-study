int main(void) {

	int N, M;
	int a[100][100], b[100][100];

	(void)scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			(void)scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			(void)scanf("%d", &b[i][j]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%d ", a[i][j] + b[i][j]);
		}
		printf("\n");
	}
	return 0;
}