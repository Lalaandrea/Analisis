#include <algorithm>
#include <iostream>
#include <vector>
typedef long long int lli;
using namespace std;

// Función auxiliar de Maxima Suma: calcula la máxima suma de un subarreglo
// comenzando en la mitad de arreglo A y extendiéndose hacia el extremo.

lli MaximoSecuencial(const vector<lli> &A, lli inicio, lli j){
	lli Suma = A[inicio];												//El maximo es el inicio del subarreglo
	lli Maximo = Suma;

	if(inicio<j){														//Lado derecho del arreglo

		for(lli k = inicio+1; k < j ; k++){
			Suma += A[k];												//Suma el siguiente digito.
			if(Suma > Maximo)											//Si es mayor que el maximo que tenemos guardamos este
				Maximo = Suma;
		}
	}
	else{																//Lado izquierdo del arreglo

		for(lli k = inicio-1; k > j ; k--){
			Suma += A[k];												//Suma el siguiente digito
			if(Suma > Maximo)											//Si la suma es mayor al maximo guardamos este valor
				Maximo = Suma;
		}

	}

	
	return Maximo;														//Regresa la suma maxima del segmento
}

//Parte el problema, obtiene la maxima suma del lado izquierdo, del lado derecho, asi como la suma de las sumas maximas
//de los subarreglos de izquierda y derecha de la mitad hacia los extremos.
//Obtiene el maximo de los 3
lli MaximaSuma(const vector<lli> &A, lli inicio=0, lli j=-1)
{
	if(j == -1)
		j = A.size();
	
	if(j - inicio == 1)
		return A[inicio];

	lli m = inicio + (j-inicio)/2;

	lli SumaIzquierda = MaximaSuma(A, inicio, m);
	lli SumaDerecha = MaximaSuma(A, m, j);
	lli t_izq = MaximoSecuencial(A, m-1, inicio-1);
	lli t_der = MaximoSecuencial(A, m, j);
	
	return max({SumaIzquierda, SumaDerecha, t_izq + t_der});							//Obtenemos el máximo en un array
}
int main()
{
	lli n=0;
	cin>>n;
	vector<lli> A;
	lli auxiliar;
	for(long long int i=0; i<n;i++)
	{
	        cin>>auxiliar;   // Se lee el numero
	        A.push_back(auxiliar);
	        cin.ignore(1); // Se descarta el separador
	    
	}



	printf("%lld\n",MaximaSuma(A) );
	
	return 0;
}