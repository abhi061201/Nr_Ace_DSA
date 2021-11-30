#include <iostream >
using namespace std;

int gcd(int a,int b){
if(b>a)swap(a,b);

if(b==0)return a;
else return gcd(a%b,b);

}
int main(){
    
    int a,b;
    cin>>a>>b;;
    int ans= gcd( a,b);

cout<<ans;

    return 0;

}