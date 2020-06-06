#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool primo[n+1];
    vector<int> primos;
    for(int i=0;i<=n;i++){
        primo[i]=true;
    }
    primo[0]=false;
    primo[1]=false;
    for(int p=2;p<sqrt(n)+1;p++)
        if(primo[p]){
            primos.push_back(p);
            for(int x=p*2;x<=n;x+=p)
            primo[x]=false;
        }
    for(int j=primos[primos.size()-1]+1;j<=n;j++)
        if(primo[j]==true) primos.push_back(j);

    for(int i=0;i<primos.size();i++)
        cout<<primos[i]<<endl;

    return 0;
}
