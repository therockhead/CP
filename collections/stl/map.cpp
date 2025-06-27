// @uthor: asif
#include <iostream>
#include <map>

using namespace std;

int main() {
    /*  template 
        std::map <key_type, data_type>
    */
    map<string,int>marks;
    // declared a map to store student mark
    // key_type - string
    // data_type - int

    // Finding the length
    int length = marks.size(); //Gives the size of the map.
    
    // insertion
    marks.insert(make_pair("Asif", 100)); 
    marks.insert(make_pair("Zahin", 90));
    marks.insert(make_pair("Kamal", 80));
    marks.insert(make_pair("Jamal", 70));

    //  Value Erasing
    marks.erase("Asif"); //Erases the pair from the map where the key is "Asif"

    // Finding an element
    // map<string,int>::iterator itr=m.find(val); 
    //Gives the iterator to the element val if it is found otherwise returns m.end() .
    // Example:
    map<string,int>::iterator itr= marks.find("Zahin"); //If Maps is not present as the key value then itr==m.end().
    if (itr != marks.end()) {
         cout << "found" << endl;
         cout << "index position: " << distance(marks.begin(), itr) << endl;
    }
    if (itr == marks.end()) cout << "Not Found" << endl;

    //  Access
    //  To get the value stored of the key "MAPS" we can do m["MAPS"] or
    //  we can get the iterator using the find function and then by itr->second we can access the value.
    cout << marks["Zahin"] << endl;
    cout << itr->second << endl;
    
    return 0;
}
