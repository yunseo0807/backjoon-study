int main() {
	int map[100][100] = { 0 };
	int N;
	int x, y;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d %d", &x, &y);

		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (map[x + i][y + j] == 0) map[x + i][y + j] = 1;
			}
		}
	}
	int cnt = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (map[i][j] == 1) cnt += 1;
		}
	}
	printf("%d", cnt);
}