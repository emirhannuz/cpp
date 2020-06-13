#ifndef NOKTA3D_H
#define NOKTA3D_H

#include "Nokta2D.h"

class Nokta3D : public Nokta2D
{
	private:
		int z;
		
	public:
		void setZ(int);
		int getZ();
};
#endif