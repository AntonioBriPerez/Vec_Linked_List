#ifndef _TVECTOR_H_
#define _TVECTOR_H_
#include <iostream>
#include "tporo.h"
using namespace std;

class TVectorPoro{
	private:
		int dimension;
		TPoro *datos;
		TPoro error;
		bool equalData(TVectorPoro &);

	public:
		TVectorPoro();
		TVectorPoro(int);
		TVectorPoro(TVectorPoro &);
		~TVectorPoro();
		TVectorPoro & operator=(TVectorPoro &);


		bool operator==(TVectorPoro &);
		bool operator!=(TVectorPoro &);
		TPoro & operator[](int);
		TPoro operator[](int) const;
		int Longitud();
		int Cantidad();
		bool Redimensionar(int);

	friend ostream & operator << (ostream &, TVectorPoro &);

};
#endif

