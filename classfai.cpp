 #include <iostream>
#include <string>
using namespace std;
class ikan{
	public:
		void habitat(string habitat);
		string panjang, massa, warna;
		
};
int main(){
	ikan kakap, nila, bawal;

	kakap.panjang = "Panjangnya 60cm ";
	nila.panjang = "Panjangnya 40cm ";
	bawal.panjang = "Panjangnya 50cm ";
	
	kakap.massa = "Massanya 1kg ";
	nila.massa = "Massanya 1kg ";
	bawal.massa = "Massanya 1,5kg ";
	
	kakap.warna = "Warnanya merah ";
	nila.warna = "Warna hitam ";
	bawal.warna = "Warnanya hitam ";
	

	cout<<"ikan kakap "<< (kakap.panjang) << (kakap.massa) << (kakap.warna);
	kakap.habitat("nya di laut ");
	cout<<"ikan nila "<< (nila.panjang) << (nila.massa) << (nila.warna);
	nila.habitat("nya di sungai ");
	cout<<"ikan bawal "<< (bawal.panjang) << (bawal.massa) << (bawal.warna);
	bawal.habitat("nya di laut "); 
}
		
	void ikan::habitat(string habitat){
	cout<<"ikan dan habitat "<<habitat<<"\n";
}
