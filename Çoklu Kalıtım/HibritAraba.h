#include "ElektrikliAraba.h"
#include "NormalAraba.h"
class HibritAraba:public NormalAraba,public ElektrikliAraba{
	public:
		HibritAraba(int,int,int,std::string);
		int fiyat;
};
