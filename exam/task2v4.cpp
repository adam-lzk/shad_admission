#include <iostream>
using namespace std;
int main(){
int size;
cin>>size;
int vertex_power[size];
int v[size];
int k;
k=0;
while(k<size){
cin>>v[k];
vertex_power[k]=0;
k=k+1;}
k=size-1;
while(k>=0){
vertex_power[k]=vertex_power[k]+v[k];
int i=1;
while(i<=v[k]){
vertex_power[k-i]=vertex_power[k-i]+1;
i=i+1;}
k=k-1;}
k=0;
while(k<size){
cout<<vertex_power[k]<<" ";
k=k+1;}
cout<<endl;
return 0;}