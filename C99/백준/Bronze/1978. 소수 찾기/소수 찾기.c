int main() {
	int N, cnt2 = 0;
	(void)scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int cnt = 0, n;
		(void)scanf("%d", &n);
		for (int i = 1; i < n; i++) {
			if (n % i == 0) cnt += 1;
		}
		if (cnt == 1) cnt2 += 1;
	}
	printf("%d", cnt2);
}