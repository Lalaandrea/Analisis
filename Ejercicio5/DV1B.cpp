lli MaximaSumaFuerzaB(const vector<lli> &A)
{
	lli Maximo = A[0], Suma;
	lli n = A.size();

	for(lli i = 0; i < n; ++i)
	{
		Suma = lli();
		for(lli j = i; j < n; ++j)
		{
			Suma += A[j];
			if(Suma > Maximo)
				Maximo = Suma;
		}
	}

	return Maximo;
}
