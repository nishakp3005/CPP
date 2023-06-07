#include<bits/stdc++.h>
using namespace std;
//cpp vector methods (website)
template <class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a;
    vector<int> vec1;
    cout<<"enter"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cin>>a;
        vec1.push_back(a);
    }
    cin>>a;
    //removes the last element
    display(vec1);
    vec1.pop_back();
    display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter, 0); //number will be added at 0th index
    vec1.insert(iter+1, 5, a); //number will be added at 1st index and after that till 4 indexes
    display(vec1);
    return 0;
}