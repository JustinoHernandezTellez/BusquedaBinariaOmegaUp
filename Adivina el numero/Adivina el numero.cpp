///6127. Adivina el número
#include "AdivinaElNumero.h"

void adivina(long long a, long long b) {
	 long long l = a, r = b;
	 long long mit;
	 int es_o_no;
	 while (l <= r){
           mit = (l + r) / 2;
           es_o_no = pista(mit);
           if (es_o_no == -1){
              r = mit - 1;
           } else if (es_o_no == 1){
              l = mit + 1;
           } else if (es_o_no == 0) break;
	 }

}