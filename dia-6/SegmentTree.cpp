
void build (int i, int l, int r) {
	if (l==r) {
		ST[i] = a[l];
		return;
	}
	build (2*i, l, (l+r)/2 );
	build (2*i + 1, (l+r)/2 + 1, r);
	ST[i] = ST[2*i] + ST[2*i + 1];
}
