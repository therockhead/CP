bool search(int x, int left, int right, vector<int> &v) {
  int mid = (left + right)/2;
  if (left > right) return false;
  if (v[mid] == x) return true;
  else if (v[mid] > x) {
    right = mid-1;
    return search(x, left, right, v);
  }
  else if(v[mid] < x) {
    left = mid + 1;
    return search(x, left, right, v);
  }
}
