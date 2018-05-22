lli getInvCount(lli Numeros[], lli n)
{
  lli NumInversiones = 0;
  for (lli i = 0; i < n - 1; i++)                                                           //Para Cada elemento del arreglo
    for (lli j = i+1; j < n; j++)                                                           //Checar con cada elemento del array
      if (Numeros[i] > Numeros[j])                                                          //Ver si la posicion es correcta.
        NumInversiones++;
 
  return NumInversiones;                                                                    //Dime cuantos son
}