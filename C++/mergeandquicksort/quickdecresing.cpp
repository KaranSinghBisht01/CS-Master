#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& v,int stidx,int edidx){
    int count=0;
    int pivotelement=v[stidx];
    int pivotidx;
    for(int i=stidx+1;i<=edidx;i++){// 
        if(pivotelement>=v[i]) count++;
    }
    pivotidx=count+stidx;
    swap(v[stidx],v[pivotidx]);
    int i=stidx,j=edidx;
    while(i<pivotidx && j>pivotidx){
        if(v[i]<=v[pivotidx]) i++;
        if(v[j]>v[pivotidx]) j--;// 2
        else if(v[i]>pivotelement && v[j]<=pivotelement){ // major 3rd 
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
void quicksort(vector<int>& v,int stidx,int edidx){
    if(stidx>=edidx) return ;
    int pivotidx=partition(v,stidx,edidx);
    quicksort(v,stidx,pivotidx-1);
    quicksort(v,pivotidx+1,edidx); // 4th
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