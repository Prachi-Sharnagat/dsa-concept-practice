#include <bits/stdc++.h>
using namespace std;

// pairs
void pairExplain(){
    pair<int,int> p ={1,6};
    cout << " explain pairs : ";

    cout << p.first << p.second << endl;
    pair<int, pair<int,int>> s ={1,{3,4}};
    cout << s.first << s.second.first << s.second.second << endl;
    pair <int,int> arr[] = {{1,2},{3,4}};
    cout << arr[1].second<< endl;
}

// vectors
void vectorExplain(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);
    vector<pair<int,int>>p1;
    p1.push_back({1,3});
    p1.emplace_back(1,8);

    vector<int> p2(5,100);
    vector<int> p3(5);
    vector<int> v_copy(v);
    // dynamic in nature so we can increase the size
    //{1,2,3,4,5,6}
    p2.push_back(200);
    cout << " explain vector : ";

    vector<int>::iterator it = v.begin();
    //1
    cout << *(it) << " ";
    it++;
    // 2
    cout << *(it) << " ";
    it = it+2;
    // 3
    cout << *(it) << " ";
    
    cout << v[0] << " ";
    cout << v.back()<<" ";
    vector<int>::iterator it1 = v.end();
    // vector<int>::iterator it1 = v.rend();
    // vector<int>::iterator it1 = v.rbegin()

    // print the whole vector 
    for(vector<int>::iterator it =v.begin(); it!=v.end(); it++)
{
    cout << *(it) <<" ";
}    

for(auto it = v.begin(); it!= v.end(); it++){
    cout << *(it) << " ";
}

for(auto it:v){
    cout << it << " ";
}

v.erase(v.begin()+1);
// start include , end exclude 
v.erase(v.begin()+1, v.begin()+4);

// vector 100, 100

// { 1,6, 300 , 100 , 50,50 100}
vector<int> copys(v);
vector<int> n(2,100);
n.insert(n.begin(),300);
n.insert(n.begin()+2, 2, 50);
vector<int>copy(2,40);
n.insert(n.begin(), copy.begin(), copy.end());

n.pop_back(); // remove 100
p2.swap(p3);
vector<int>::iterator loop = n.begin();
for(auto loop:n){
    cout << loop << " ";
}
// cout << p2[0] << " ";
// cout << p1[0] << " ";
// n.clear();
cout << n.empty();
cout << endl ;
// true --> 1
// false --> 0
}

void listExplain(){
    list<int> ls;
    ls.push_back(100); //{100}
    ls.emplace_back(4); // {100,4}
    ls.push_front(200);
    ls.emplace_front(50);
    cout << " explain list : ";

    list<int>::iterator it = ls.begin();
    for(auto it:ls){
        cout << it << " ";
    }
    cout << endl;
    // same as of vector 
    // begin, end , rbegin, rend, insert same as vector
}

void dequeExplain(){
    deque<int> dq;
    dq.push_back(12);
    dq.emplace_back(13);
    dq.push_front(9);
    dq.emplace_front(2);
    cout << " explain deque : ";
      deque<int>::iterator it = dq.begin();
    for(auto it:dq){
        cout << it << " ";
    } 
    dq.pop_back();
    dq.pop_front();
      for(auto it:dq){
        cout << it << " ";
    }
     cout << endl;
    // same as vector funtions 
}

void stackExplain(){
    stack<int> st;
    cout << " explain stack lifo : ";

st.push(19);
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
st.push(6);
st.push(8);
st.pop();
cout << st.top();
cout << st.size() << st.empty();
stack<int> st1, st2;
st1.swap(st2);
}

void queueExplain(){
    queue<int> q;
    cout << " explain queue fifo : ";

    q.push(2);
    q.push(20);
    q.emplace(2);
    q.back() += 5; // it add last element+5 it means 7
    cout << q.back() << " ";
    cout << q.front()<< " " ;
    q.pop();
    cout << endl;
}

void priorityQueue(){
priority_queue<int> pq;
    cout << " explain priority_queue : ";

pq.push(3);
pq.push(88);
pq.push(30);
cout << pq.top() << " ";
pq.pop();
cout << pq.top() <<" ";

priority_queue<int , vector<int>, greater<int>> pq2;
pq2.push(2);
pq2.push(3);
pq2.push(88);
pq2.push(30);
cout << pq2.top() << " ";
pq2.pop();
cout << pq2.top() <<endl;
}

void setExplain(){
    cout << " explain set : ";
    set<int> st;
    st.insert(1);
    st.insert(12);
    st.insert(12);
    st.insert(16);
    st.insert(3); // {1,3,12,16}
    auto it = st.find(3); // iterate till 3
    if(it!=st.end()){
        cout << "found 3 : "<< *(it) << " ";
    }
    else{
        cout << "not found";
    }
    it = st.find(100);
    if(it!=st.end()){
        cout << "found 100 : "<< *(it) << " ";
    }
     else{
        cout << "not found" << endl;
    }
    // auto it = st.find(100); // iterate till back +1: st.end() : its not present here
    st.erase(3); // erase 3 then sort it again and rearrange
    int cnt = st.count(12);
    cout << cnt <<  " ";
    auto it1 = st.find(1);
    auto it2 = st.find(12);
    st.erase(it1,it2); //{1,16}
      set<int>::iterator it3 = st.begin();
    for(auto it3:st){
        cout << it3 << " ";
    } cout << endl;

}

void multisetExplain(){
    // not unique but sorted 
    multiset<int> ms;
    ms.insert(1);
    ms.insert(3);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    cout << " explain multi-set : ";
    cout << "count : " << ms.count(3) << endl;
    ms.erase(2); // delete all 2 from the set
    // multiset<int>::iterator it= ms.begin();
    for(auto it:ms){
        cout << it << " ";
    } cout << endl;
    // if want to erase only 1 then give address
    ms.erase(ms.find(3));
    for(auto val:ms){
        cout << val << " ";
    } cout << endl;
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);

    ms.erase(ms.find(2), std::next(ms.find(2),3)); // here end is excluded 
      for(auto val:ms){
        cout << val << " ";
    } cout << endl;
}

void unorderedExplain(){
    // cout << " explain unordered : ";
    // same as ordered list function run
    // does not support upper bound and lower bound
}

void mapExplain() {
    // keys are unique, always stored in sorted order
    map<int, int> mpp;
    mpp[1] = 10;
    mpp[2] = 10;
    mpp[3] = 10;
    mpp[5] = 10;
    mpp.emplace(6,3);


    cout << "explain map: ";
    cout << " " << mpp[6] << " ";

    map<int, pair<int, int>> mp1;
    mp1[2] = {10, 30};
    mp1[1] = {20, 30};
    mp1[3] = {30, 30};
    mp1[4] = {40, 30};
    mp1[5] = {50, 30}; 

    map<pair<int, int>, int> mp2;
    mp2[{5, 5}] = 10;
    mp2[{2, 5}] = 10;
    mp2[{3, 5}] = 10;
    mp2[{4, 5}] = 10;
// always print in sorted manner
    for (auto val : mp2) {
        cout << "{" << val.first.first << "," << val.first.second << "} "; // give key pair
    }
    
    // auto it1  = mpp.lower_bound();
    // auto it1  = mpp.upper_bound();

   cout << endl;
}

void multiMapExplain(){
    // everythig same as map, only it can store multiple keys
    // only mapp[key] control is used here
}

bool comp(pair<int,int>p1, pair<int,int>p2){
if(p1.second < p2.second) return true;
if(p1.second > p2.second) return false;
// if(p1.second == p2.second){

// }
if(p1.first>p2.first) return true;
return false;


}

void extraExplain(){
    cout << "explain algorithm: ";
    int n = 4;
    int a[n] = {23,34,4};
    sort(a, a+n);
    // sort(a+2, a+4);
    // decreasing order me sorting
    sort(a, a+n,greater<int>());
    pair<int,int> b[] = {{1,2},{2,1},{4,1}};
    // condition:
    // 1.sort it according to second element
    // 2. if second element is same then sort it according to first elemnt in desecnding order
    // (2,1) (4,1) (1,2)
    // (4,1) (2,1) (1,2) 
    sort(b, b+n, comp);
    int num = 7;
    int cnt = __builtin_popcount(num);
    long long number = 128888863388;
    // int count = __builtin_popcount11(number);
      int count = __builtin_popcountll(number); // use ll version
    cout << cnt << " " << count << endl; ;

    string s = "123";
  
    do{
        cout << s << "  ";
    } while(next_permutation(s.begin(), s.end()));
    cout << endl;

    string p = "213";
//   sort(p.begin(),p.end()); // this line makes all permutation possible
    do{
        cout << p << "  ";
    } while(next_permutation(p.begin(), p.end()));
    cout << endl;

    int maxi = *max_element(a,a+n);
    // * is for getting element 
    cout << maxi << endl;

}

int main(){
    // pairExplain();ṇ
    vectorExplain();
    // listExplain();
    // dequeExplain();
    // stackExplain();
    // queueExplain();
    // priorityQueue();
    // setExplain();
    // multisetExplain();
    // unorderedExplain();
    // mapExplain();
    // extraExplain();
    // size swap empty all are same in other too...

    return 0;
}