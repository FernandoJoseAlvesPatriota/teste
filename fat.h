#ifndef LIB_H
#define LIB_H

void fat(int numero) {
	return (numero > 1) ? numero * fat(numero-1) : 1;
}

#endif