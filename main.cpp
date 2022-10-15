#include <iostream>

using namespace std;
struct ogr{
	string adi;
	int yas;
	
};

int main(int argc, char** argv) {
	ogr nes1;
	ogr *ptr;
	ptr=&nes1;
	ptr->adi="ahmet";
	ptr->yas=25;

	cout<<"adi:"<<ptr->adi<<endl;
	cout<<"yasi:"<<		ptr->yas<<endl;
	
	return 0;
}
