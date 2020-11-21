#include <iostream>
#include <ctime>

using namespace std;

int main(){
	int yas;
	string calismadurumu;
	time_t currentTime;
	struct tm *localTime;

	time( &currentTime );
	localTime = localtime( &currentTime );

	int hour = localTime->tm_hour;
	int wday = localTime->tm_wday;
	
	cout << wday << endl;
	cout << hour << endl;
	cout << "Yasinizi giriniz: ";
	cin >> yas;
	cout << "Herhangi bir iste calisiyor musunuz?(evet/hayir): ";
	cin >> calismadurumu;
	
	if(wday <= 5){
		if(yas <= 20 || yas >= 65){
			if(calismadurumu == "hayir"){
				if(yas <= 20)
					if(hour >= 16 || hour <= 13){cout << "disari cikamazsin";}
					else{cout << "disari cikabilirsin";}
				else if(yas >= 65)
					if(hour >= 13 || hour <= 10){cout << "disari cikamazsin";}
					else{cout << "disari cikabilirsin";}
				}
			else{cout << "disari cikabilirsin";}
		}
		else{cout << "disari cikabilirsin";}
	}
	else{
		if(calismadurumu == "hayir"){
			if(yas <= 20 || yas >= 65){
				if(yas <= 20)
					if(hour >= 16 || hour <= 13){cout << "disari cikamazsin";}
					else{cout << "disari cikabilirsin";}
				else if(yas >= 65)
					if(hour >= 13 || hour <= 10){cout << "disari cikamazsin";}
					else{cout << "disari cikabilirsin";}
				}
			else{cout << "disari cikamazsin";}
		}
		else{cout << "disari cikabilirsin";}
	}
	return 0; 		

}

