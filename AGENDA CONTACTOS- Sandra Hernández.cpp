#include<iostream>
#include<fstream>
using namespace std;

//1. INTRODUCIR CONTACTOS

int main(){
    int salir;
    char otro='s';
    char nomasamigos='n';
    string nombre;
    string apellido;
    string telefono;
    string whatsapp;
    ofstream agenda("ficheroAgenda.txt");           
    
    while(otro=='s'){
         cout<<"---------- * AGENDA DE CONTACTOS * ---------- "<<endl<<endl<<endl;                        
         cout<<"Como se llama tu amigo? : ";
         cin>>nombre;
         cout<<"-------------------- "<<endl<<endl<<endl; 
         cout<<"Cuales es su apellido? : ";
         cin>>apellido;
         cout<<"-------------------- "<<endl<<endl<<endl;
         cout<<"Dime su numero de telefono : ";
         cin>>telefono;
         cout<<"-------------------- "<<endl<<endl<<endl;
         cout<<"Tiene Whatsapp?: ";
         cin>>whatsapp;
         cout<<"-------------------- "<<endl<<endl<<endl;
         agenda<<nombre<<" "<<apellido<<" , "<<telefono<<","<<whatsapp<<" tiene Whatsapp"<<endl;
       
       cout<<"Deseas introducir otro amigo (s/n)?: ";
       cin>>otro; 
       } 
//2. VER CONTACTOS

    while(nomasamigos=='n'){
    cout<<"---------- * ESTOS SON TUS CONTACTOS * ---------- "<<endl<<endl<<endl;                  

	     ifstream agenda;
	     agenda.open("ficheroAgenda.txt");
	     while(!agenda.eof())
	     cout<<(char)agenda.get();
         agenda.close();
         cin>>salir;
}
}

