#include <iostream>
using namespace std;

int main() {
   int n,p=0,s=1,c=1;
   cin>>n;
   cout<<s<< endl;
   while (c++<=n) {
      cout <<p+s<<endl;
      if (p<s){
         p+=s;
      } else {
         s+=p;
      }
      if((p+s)>n){
        break;
      }
   }
   return 0;
}
