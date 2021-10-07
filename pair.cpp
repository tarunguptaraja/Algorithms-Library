#include<bits/stdc++.h>
using namespace std;
 int main()
 {//pair are used to maintain a relation between the inserted  elements
  pair<int,string>p;
  p={3,"harshit "};

  cout<<p.first<<" " <<p.second;
  //pair of array;
  pair<int ,int>p_array[3];
  p_array[0]={1,2};
 p_array[1]={10,20};
  p_array[2]={11,21};
  swap(p_array[0],p_array[2]);
for(int i=0; i<3;i++)
{

    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
}

return 0;
 }
