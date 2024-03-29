#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1); //pushes 1 into iteslf
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);  // adds 2 at the end of the vector . faster than push_back()
   vector<pair<int,int>> vec;
   vec.push_back({1,2}); 
   vec.emplace_back(1,2); // no need to add curly braces;
   
   vector<int> vfilled(5,100); // vfilled(size,element). element will filled upto given size
//    for(auto it:vfilled)cout<<it<<" ";
    // cout<<endl;
   vector<int> vgarbage(5); //vector of 0 or garbage value is generated . Depends on Compiler
//    for(auto it: vgarbage)cout<<it<<" ";
//    cout<<endl;

   vector<int> v1copy(vfilled);
   v1copy.push_back(900);
    // for(auto it: v1copy)cout<<it<<" ";
    // for(auto it: vfilled)cout<<it<<" ";
//    cout<<endl;
    // can access in similar way to array . Or using vectorname.at(index)

    // Iterators
    vector<int>::iterator it = v.begin();  // v.begin() is a memory pointer of the first element.

    // it++;
    // cout<<*it<<" "<<endl;
    
    // it=it+2;
    // cout<<*(it)<<" "<<endl;
    vector<int>::iterator it2=v.end();
//    vector<int>::iterator it2 =v.rend();
//     vector<int>::iterator it3= v.rbegin();
    
    // cout<<v[0]<<" "<<v.back()<<endl;

    // for(vector<int>::iterator it=v.begin();it!=v.end();it++)cout<<*(it)<<" ";    
    // cout<<endl;
    // for(auto it = v.begin();it!=v.end();it++){
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;
    // for(auto it :v)cout<<it<<" ";
    // cout<<endl; 
    
    //Deletion

    //{1,2,3,4} ---> {2,3,4}
    // v.erase(v.begin());
    //   for(auto it: v)cout<<it<<" ";
    // cout<<endl;
    // v.push_back(1);

    //{2,3,4,1} ---> {2}
    // v.erase(v.begin()+1,v.begin()+3);  //v.erase(start_index,end_index) . end_index is not included...
    // for(auto it: v)cout<<it<<" ";
    // cout<<endl

    //Insertion
    // vector<int> vinsertion(2,100); //{100,100}
    // vinsertion.insert(vinsertion.begin(),300); //{300,100,100}
    // vinsertion.insert(vinsertion.begin()+1, 2, 10); // v.insert(desired_index, number_of_instances, element_to_be_added)

    // for(auto it: vinsertion)cout<<it<<" "; cout<<endl;

    //Copy
    vector<int> vcopy(2,50); //{50,50}
    vector<int>  vcopy2(3,100);
    vcopy2.insert(vcopy2.begin(),vcopy.begin(),vcopy.end()); //{100,100,100,50,50};
    // for(auto it: vcopy2)cout<<it<<" ";
    // cout<<endl;
      
    //   cout<<vcopy2.size();
      vcopy2.pop_back();
        vcopy2.swap(vcopy);
        // vcopy2.clear();
        cout<<vcopy2.empty();

}