#include "hash_tables.h"
/ * *
 * hash_djb2 - implementación del algoritmo djb2
 * @str: cadena utilizada para generar valor hash
 *
 * Devolución: valor hash
 * /
unsigned  long  int  hash_djb2 ( const  unsigned  char * str)
{
	 hash int largo  sin firmar ;
	int c;

	hash = 5381 ;
	mientras ((c = * str ++))
	{
		hash = ((hash << 5 ) + hash) + c; / * hash * 33 + c * /
	}
	retorno (hash);
}
