int main() {
	int N, K, cnt = 0, num = 0;
	(void)scanf("%d %d", &N, &K);

	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			cnt += 1;
			num = i;
		}
		if (cnt == K) {
			printf("%d", num);
			break;
		} 
	}
	if (cnt < K) printf("0");
}