#include <iostream>
#include <fstream>

using namespace std;

bool rozklad(int liczba) {
int i;
int k[3];

for(int j; j<3; j++){
    k[i]==0;
}
for(i=2; i<=liczba; i++) {

	while (liczba%i==0) {
	if(i%2==0) return false;
	liczba/=i;

        if(i!=k[0] && i!=k[1] && i!=k[2]){
        for(int j; j<3; j++){
            if(k[j]==0){
                k[j]=i;
            }
        }
    }
        else{
            cout<<"O";
            return false;
       }
        }
    }
   if(k[0]!=0 && k[1]!=0 && k[2]!=0) return true;       //ile=3
   else return false;                                  //ile<3
}
int main(int argc, char** argv) {
    ifstream plik;
    int liczba;
    plik.open("in.txt");
    if(plik.good()){
         while(!plik.eof()){
            if(rozklad(liczba)){
            cout<<"Tak";
        }
	else{
            cout<<"Nie";
        }
        }
    }
    plik.close();
    return 0;
}
