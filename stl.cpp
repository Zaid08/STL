#include <bits/stdc++.h>
using namespace std;

void learnPair(pair<int, int> p[], int n){
    
    for (int i=0; i<n; i++){
        cin >> p[i].first >> p[i].second;
    }

    cout << "Printing Array of Pairs" << endl;
    for (int i=0; i<n; i++){
        cout << p[i].first << " " << p[i].second << endl;
    }
    // pair<int,int> p1 = {1,3};
    // cout << p1.first << " " << p1.second << endl;
    // pair<int,pair<int,int>> p2 = {1,{2,3}};
    // cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;
    // pair<int,int> arr[] = {{1,2}, {1,3}, {1,4}};
    // cout << arr[0].first << " " <<arr[0].second << endl;
    // cout << arr[1].first << " " <<arr[1].second << endl;
    // cout << arr[2].first << " " <<arr[2].second << endl;
}

void learnVector(){
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(2);

    // vector<pair<int,int>> v1;
    // v1.push_back({1,2});
    // v1.emplace_back(1,2);

    
    // vector<int> v3(3);
    // cout << v2[0] << endl;

    // vector<int>::iterator it = v2.begin();
    // it++;
    // cout << *(it) << " " << endl;
    // vector<int>::iterator it1 = v2.end(); 
    // it1--;
    // cout << *(it1) << " " << endl;

    // for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++){
    //     cout << *(it) << " ";
    // }
    // cout << endl;
    // for (auto it = v2.begin(); it != v2.end(); it++){
    //     cout << *(it) << " ";
    // }
    // cout << endl;
    vector<int> v2(5,300);
    v2.insert(v2.begin() + 1, 3, 7);
    vector<int> v3(2,5);
    v3.emplace_back(4);
    v2.insert(v2.begin(), v3.begin(),v3.end());
    v2.insert(v2.end(), 2);
    v2.erase(v2.begin()+1, v2.begin()+4);
    v2.swap(v3);
    // v2.pop_back(); //delete the last ele
    cout << v2.empty();
    v2.clear();
    for (auto it : v2){
        cout << it << " ";
    }
    cout << endl;
    for (auto it : v3){
        cout << it << " ";
    }
    cout << endl;
    cout << v3.size() << endl;
    cout << v2.size() << endl;
}

void learnList(){
    list<int> ls = {1,2,3};
    ls.emplace_back(4);  // or ls.push_back(4);
    ls.emplace_front(0); // or ls.push_front(0);
    // all other functions is same as vector functions.
    for (auto it : ls){
        cout << it << " ";
    }
}

void learnDeque(){
    deque<int> dq;
    dq.push_back(2);
    dq.emplace_front(1);
    for(auto it : dq){
        cout << it << " ";
    }
    // all other functions is same as vector functions.
    cout << endl;
    cout << dq.front() << endl;
    cout << dq.back() << endl;
}

void learnStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << st.top() << endl;
    cout << st.size() << endl;
    st.pop();
    // for (auto it : st){
    //     cout << it << endl; 
    // }
}

void learnQueue(){
    queue<int> q;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);
    q.push(10);
    q.back() += 5;
    cout << q.back()<< endl;
    cout << q.front()<< endl;
    
}

void learnPriority_Queue(){
    priority_queue<int> pq; // largest element is always present in the top means element is in descinding order;
    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.push(25);
    pq.push(1);

    cout << pq.top() << endl;
    // for implement ascending order pq;
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(10);
    pq1.push(20);
    pq1.push(5);
    pq1.push(25);
    pq1.push(1);

    cout << pq1.top() << endl;
}

void  learnSet(){
    // same as vector but always save ele in sorted order and save inly unique ele.
    set<int> s;
    s.insert(1);
    s.insert(0);
    s.insert(-1);
    s.insert(6);
    s.erase(-1);
    for (auto it: s){
        cout << it << " ";
    }
    cout << endl << s.count(1);
    cout << endl << s.count(5);
}

void  learnMulti_Set(){
    // same as set and can save more than one same element means it do not follow uniqueness property
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    // ms.erase(2); all 2's erase
    ms.erase(ms.find(2)); // earse only one occurence of 2
    for (auto it: ms){
        cout << it << " ";
    }
    cout << endl << ms.count(1);
    cout << endl << ms.count(2);
}

void learnUnordered_Set(){
   // save unique elements in random order
   // similiar to set but lower and upper bound function do not work
   unordered_set<int> us;
   us.insert(1);
   us.insert(4);
   us.insert(3);
   us.insert(2);
   for (auto it : us){
    cout << it << endl;
   }
}

void learnMap(){
    // map contain key value pairs in sorted order of keys; key value of element should be unique.
    map<int,int, greater<int>> m; // greater is used to print key values in descending order.
    m.insert({1,2});
    m.insert({3,5});
    m.insert({2,3});
    for (auto it : m){
        cout << it.first << " " << it.second << endl;
    }
    // multimap can save same element which contain same key values;
    // unorder_map is same as map but it cannot save key values in sorted order.
}

int main() {
    // int n;
    // cin >> n;
    // pair<int, int> p[n];
    // learnPair(p,n);
    // learnVector();
    // learnList();
    // learnDeque();
    // learnStack();
    // learnQueue();
    // learnPriority_Queue();
    // learnSet();
    // learnMulti_Set();
    // learnUnordered_Set();
       learnMap();
       return 0;
}