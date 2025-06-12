#include <iostream>
using namespace std;
int main() {
  string num;
	cin >> num; 
  int countZ =0;   //Reading input from STDIN
  int countO =0;   //Reading input from STDIN
  
    for(int i =0; i<num.length(); i++){

     if(num[i] == 'z')countZ++;
       if(num[i] == 'o')countO++;
     };

     if(countO == 2 * countZ){
      cout<<"YES"<<endl;
     }else{
      cout<<"NO"<<endl;
     }
    return 0;
}