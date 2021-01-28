#include <iostream>
#include <list> //sequence container
#include <set> //associative container
#include <iterator>

void main() 
{
//	1) list
	std::list <int> lst; std::list <int> lst1; std::list <int> lst2;
	std::list <int> :: iterator it1 = lst.begin();
	lst.push_back(6);
	lst.push_back(4); //add to the end
	lst.push_front(-3); //add to the begin 
	lst.push_back(0);
	lst.push_back(7);
	it1=lst.begin();
	advance(it1, 3); //offset by 3 cells
	lst.insert(it1, 1); //add a unit to the 4th element
	lst.push_back(4);
	lst.pop_back(); //delete last element
	lst.pop_front(); //delete first element
	copy(lst.begin(), lst.end(), std::ostream_iterator<int>(std::cout, " ")); //print a list
	std::cout<<std::endl;

	lst1.push_back(1);
	lst1.push_back(6);
	lst2.push_back(3);
	lst2.push_back(5);
	lst1.merge(lst2); //connect lists
	copy(lst1.begin(), lst1.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout<<std::endl;

//  2) set
	std::set <int> st;
	std::set <int> :: iterator it = st.begin();
	    for (int i = 0; i < 5; i++) { 
        st.insert(i*i); //add an item to a set
    }
	st.insert(1); // 1 is in set, nothing will change 
	for (it=st.begin(); it != st.end(); ++it) { //print a set 
        std::cout << *it << " ";
    }
	std::cout<<std::endl;
	it = st.begin();
	++it;
	st.erase(it); //delete 2th element
	st.erase(16); //delete element = 16
	copy(st.begin(), st.end(), std::ostream_iterator<int>(std::cout, " ")); //print through copy
	std::cout<<std::endl;
	if (st.find(9) != st.end())  //searches for an elem equal to the key
		std::cout<<"This value is in set";
	else std::cout<<"This value is not in set";
	}
