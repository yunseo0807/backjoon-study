int main() {
	int M, N, cnt = 0, tot = 0, num = 0, min = 0, cnt2 = 0;
	(void) scanf("%d\n%d", &M, &N);
	for (int i = M; i <= N; i++) {
		cnt = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) cnt += 1;
		}
		if (cnt == 2) { //그 수가 소수일 경우 
			tot += i;
			cnt2 += 1;
			num = i;
		}
		if (tot - num == 0) min = tot;
	}
	if (tot == num && cnt2 != 1) {
		printf("%d", -1);
		return 0;
	}
	printf("%d\n%d", tot, min);
}