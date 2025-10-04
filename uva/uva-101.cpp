// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=37
// one of the most painful problem i have ever faced
// brute force is the key here

#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

const int N = 30;

int n;
vector<int> v[N];

pair<int, int> get_id(int x) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < v[i].size(); j++) {
      if (v[i][j] == x) {
        return make_pair(i, j);
      }
    }
  }
  return make_pair(-1, -1);
}

void move_to_initial(int id, int position) {
  for (int i = position + 1; i < v[id].size(); i++) {
    int x = v[id][i];
    v[x].push_back(x);
  }
  v[id].resize(position + 1); // popping the elements and top will be a
}

void move_on_top_of_destination (int id, int position, int destination_id) {
  for (int i = position; i < v[id].size(); i++) {
    int x = v[id][i];
    v[destination_id].push_back(x);
  }
  v[id].resize(position); // inclusive
}

int main() {
  getsuga tensho;
  cin >> n;
  for (int i = 0; i < n; i++) {
    v[i].push_back(i);
  }
  string command;
  while (cin >> command and command != "quit") {
    int a, b;
    string state;
    cin >> a >> state >> b;
    
    auto [vector_id_a, vector_position_a] = get_id(a);
    auto [vector_id_b, vector_position_b] = get_id(b);
    // cerr << vector_id_a << ' ' << vector_position_a;
    // cerr << vector_id_b << ' ' << vector_position_b;
    // cerr << '\n' << '\n';
    if (vector_id_a == vector_id_b) continue;
    if (command == "move") {
      if (state == "onto") {
        // this time need to pop the elements from both the initial and destination vector  
        move_to_initial(vector_id_a, vector_position_a);
        move_to_initial(vector_id_b, vector_position_b);
        move_on_top_of_destination(vector_id_a, vector_position_a, vector_id_b);
      }
      else {
        // this time we don't need to pop the elements from destination vector 
        // only values placed top in the initial vector has to be popped
        move_to_initial(vector_id_a, vector_position_a);
        move_on_top_of_destination(vector_id_a, vector_position_a, vector_id_b);
      }
    }
    else {
      if (state == "onto") {
        // remove all elements on top of b's vector
        // then place all the elements starting from a's position on top of b's vector
        move_to_initial(vector_id_b, vector_position_b);
        move_on_top_of_destination(vector_id_a, vector_position_a, vector_id_b);
        
      }
      else{
        move_on_top_of_destination(vector_id_a, vector_position_a, vector_id_b);
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << i << ":";
    for (int j = 0; j < v[i].size(); j++) {
      cout << ' ' <<  v[i][j];
    }
    cout << '\n';
  }
  
  return 0;
}
