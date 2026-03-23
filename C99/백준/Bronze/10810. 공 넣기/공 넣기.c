#define MAX 100;
int main() {

	int N, M;
	int arr[100] = { 0 };
	int s, e, ballnum;
	(void)scanf("%d %d", &N, &M);

	for (int i = 1; i <= M; i++) {
		(void)scanf("%d %d %d", &s, &e, &ballnum);
		for (int i = s; i <= e; i++) {
			arr[i] = ballnum;
		}
	}
	for (int i = 1; i <= N; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}