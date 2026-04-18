#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& v,int si,int ei){
    int pivotelement=v[si];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(v[i]<=pivotelement) count++;
    }
    int pivotidx=count+si;
    swap(v[si],v[pivotidx]);
    // to rearrange the elements
    int i=si;
    int j=ei;
    while(i<pivotidx && j>pivotidx){
        if(v[i]<=pivotelement) i++;
        if(v[j]>pivotelement) j--;
        else if(v[i]>pivotelement && v[j]<=pivotelement){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
void quicksort(vector<int>& v,int stidx,int endidx){
    if(stidx>=endidx) return ;
    int n=v.size();
    int pivotidx=partition(v,stidx,endidx);
    quicksort(v,stidx,pivotidx-1);
    quicksort(v,pivotidx+1,endidx);
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    quicksort(v,0,n-1); 
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
