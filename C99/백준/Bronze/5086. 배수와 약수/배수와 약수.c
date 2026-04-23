int main() {
	int A, B;
	
	while (1) {
		(void)scanf("%d %d", &A, &B);
		if (A == 0 & B == 0) return 0;
		if (A < B) {
			if (B % A == 0) printf("factor\n");
			else printf("neither\n");
		}
		else {
			if (A % B == 0) printf("multiple\n");
			else printf("neither\n");
		}
	}
}