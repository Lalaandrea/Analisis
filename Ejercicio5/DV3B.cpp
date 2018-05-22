void Buscar(p[],n){

   MinimaDistancia = 1e10;
   for (int i = 1; i < n-1; ++i){
      for (int j = i+1; j < n; ++j){
         if (Distancia(P[i],P[j])<MinimaDistancia){
            MinimaDistancia=Distancia(P[i],P[j]);
         }
      }

   }
}
