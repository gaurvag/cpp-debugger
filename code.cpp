
#include<bits/stdc++.h>
using namespace std;

//#define ONLINE_JUDGE

template <class T, class V> void logData(pair <T, V>);
template <class T> void logData(list <T>);
template <class T> void logData(forward_list <T>);
template <class T> void logData(queue <T>);
template <class T> void logData(deque <T>);
template <class T> void logData(priority_queue <T>);
template <class T> void logData(stack <T>);
template <class T> void logData(vector <T>);
template <class T> void logData(set <T>);
template <class T> void logData(unordered_set <T>);
template <class T> void logData(multiset <T>);
template <class T> void logData(unordered_multiset <T>);
template <class T, class V> void logData(map <T, V>);
template <class T, class V> void logData(unordered_map <T, V>);
template <class T, class V> void logData(multimap <T, V>);
template <class T, class V> void logData(unordered_multimap <T, V>);

#define type1 cerr<<"[ "; for(auto u:v){ logData(u); cerr<<" "; } cerr<<"]";
#define type2 cerr<<"[ "; for(T u:v){ logData(u); cerr<<" "; } cerr<<"]";
#define type3 cerr<<"["; while(!v.empty()){ logData(v.top()); v.pop(); cerr<<" "; } cerr<<"]";
#define type4 cerr<<"["; while(!v.empty()){ logData(v.front()); v.pop_front(); cerr<<" "; } cerr<<"]";
#define type5 cerr<<"["; while(!v.empty()){ logData(v.front()); v.pop(); cerr<<" "; } cerr<<"]";
#define type6 cerr<<"{"; logData(v.first); cerr<<","; logData(v.second); cerr<<"}";

#ifndef ONLINE_JUDGE
#define debug(el) cerr<<#el<<": "; logData(el); cerr<<endl;
#else 
#define debug(el);
#endif

void logData(int v){ cerr<<v; }
void logData(unsigned int v){ cerr<<v; }
void logData(long long v){ cerr<<v; }
void logData(unsigned long long  v){ cerr<<v; }
void logData(float v){ cerr<<v; }
void logData(double v){ cerr<<v; }
void logData(long double v){ cerr<<v; }
void logData(char v){ cerr<<v; }
void logData(string v){ cerr<<v; }

template <class T, class V> void logData(pair <T, V> v){ type6 }
template <class T> void logData(list <T> v){ type2 }
template <class T> void logData(forward_list <T> v){ type2 }
template <class T> void logData(queue <T> v){ type5 }
template <class T> void logData(deque<T> v){ type4 }
template <class T> void logData(priority_queue<T> v){ type3 }
template <class T> void logData(stack<T> v){ type3 }
template <class T> void logData(vector<T> v){ type2 }
template <class T> void logData(set<T> v){ type2 }
template <class T> void logData(unordered_set <T> v){ type2 }
template <class T> void logData(multiset <T> v){ type2 }
template <class T> void logData(unordered_multiset <T> v){ type2 }
template <class T, class V> void logData(map <T, V> v){ type1 }
template <class T, class V> void logData(unordered_map <T, V> v){ type1 }
template <class T, class V> void logData(multimap <T, V> v){ type1 }
template <class T, class V> void logData(unordered_multimap <T, V> v){ type1 }

void init_code(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  freopen("logs.txt","w",stderr);
#endif
}

int32_t main(){
  init_code();

  //a demo on it:
  string str; cin>>str;
  debug(str);

  int n=str.size();
  debug(n);

  vector<int> a(n);
  for(int i=0;i<n;i++)
    a[i]=str[i]-'a'+1;
  debug(a);

  map<char, int> freq;
  for(char ch:str)
    freq[ch]++;
  debug(freq);
  
  freq[str[4]]--;
  freq['a']++;
  str[4]='a';
  
  debug(str);
  debug(freq);
  
  cout<<n<<endl;
  for(auto el:freq)
    cout<<el.first<<" "<<el.second<<endl;

  return 0;
}