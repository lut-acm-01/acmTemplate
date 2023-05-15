char gc() {
	static const int N = 1 << 20;
	static char buf[N], *S = buf, *T = buf;
	return S == T && (T = (S = buf) + fread(buf, 1, N, stdin), S == T) ? EOF : *S++;
}
template<typename T>
void read(T &x) {
	x = 0;
	char ch = gc();
	for (; ch < '0' || ch > '9';) ch = gc();
	for (; ch <= '9' && ch >= '0';)
		x = x * 10 + (ch ^ 48), ch = gc();
}
