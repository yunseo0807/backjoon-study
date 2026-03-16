int main(void) {

	int hour, min, time, t_hour, t_min;

	(void)scanf("%d %d %d", &hour, &min, &time);
	
	t_hour = hour;
	t_min = min + time;

	while (t_min >= 60) {
		t_hour++;
		t_min = t_min - 60;
	}
	while (t_hour >= 24) {
		t_hour = t_hour - 24;
	}

	printf("%d %d", t_hour, t_min);

	return 0;
}