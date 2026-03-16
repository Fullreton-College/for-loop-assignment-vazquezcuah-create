#include <iostream>
using namespace std;

int main() {
int store1;
int store2;
int store3;
int store4;
int store5;
   cout<< "Enter today's sales for store 1: " ;
   cin>> store1;
   cout<< endl << "Enter today's sales for store 2: " ;
   cin>> store2;
   cout<< endl << "Enter today's sales for store 3: ";
   cin>> store3;
   cout<< endl << "Enter today's sales for store 4: ";
   cin>> store4;
   cout<< endl<< "Enter today's sales for store 5: ";
   cin>>store5;
   int sales[]={store1 , store2 , store3 , store4 , store5};
   int i=1;
   while(i<=5){
      cout<< endl << "Store "<< i <<":";
      if(sales[i-1]>=100){
      for(int star=100 ; star <= sales[i-1];star+=100){
         cout<<"*";
      }
   }else{
      cout<<"sales less than 100";
   }
    i++;
   }
   cout<<endl;
   return 0;
}
