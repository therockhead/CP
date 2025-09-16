/**
*    @author:  TheRockHead
*    created: 16.09.2025 21:36:25
**/
#include <bits/stdc++.h>

using namespace std;
int main() {
	ios::sync_with_stdio(false);
  cin.tie(nullptr);
	
	// declaration
	priority_queue<int> pq;
	

	// pushing values O(logn)
	pq.push(12);
	pq.push(100);
	pq.push(0);


	// popping values O(logn)
	pq.pop();


	// accessing the top O(1)
	cout << pq.top() << '\n';


	// size O(1)
	cout << pq.size() << '\n';
	

	// empty or not check
	cout << pq.empty() << '\n';
	

	// swap() elements
	// pq will take up all elements from pq2
	// pq2 will take up all elements from pq
	priority_queue<int> pq2;
	pq2.push(1000);
	pq2.push(56);
	pq2.push(19);
	pq.swap(pq2);
	cout << pq.top() << '\n';
	pq.pop();
	cout << pq.top() << '\n';

	// implementation of minHeap using priority_queue
	// priority_queue<dataType, vector<dataType>, greater<dataType>> minHeap;
	//------------------------------------------------------------------------ 
	priority_queue<int, vector<int>, greater<int>> minHeap;
	minHeap.push(100);
	minHeap.push(20);
	minHeap.push(8);
	minHeap.push(9);
	cout << minHeap.top() << endl; // 8 on top (minimum value) 

	// min heap of pair
	priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int, int>>> minHeapPair;
	
	minHeapPair.push(make_pair(12, 6));
	minHeapPair.push(make_pair(19, 18));
	minHeapPair.push(make_pair(28, 1));

	cout << minHeapPair.top().first << '\n'; // 12
	cout << minHeapPair.top().second << '\n'; // 6

	return 0;
}