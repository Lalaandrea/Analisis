func MaximoComunDivisor(m, n){
	a = max(n, m);
	b = min(n, m);			//O(1)
	residuo = 1;
	mientras (b > 0){		//O(log(n))
		residuo = a mod b;	//O(1)
		a = b;
		b = residuo;
	}
	MaximoComunDivisor = a;
	return MaximoComunDivisor;
}