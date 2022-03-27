#ifndef _USERS_JOHAECHANG_OOD_LAB13_SORT_H_
#define _USERS_JOHAECHANG_OOD_LAB13_SORT_H_
#include <algorithm>
#include <vector>

template<class T>
void Sort(typename T::iterator begin, typename T::iterator end) {
    typedef std::iterator_traits<decltype(begin)> traits;
    int key, j;

    int* arr = &(*begin);
    std::vector<int*> v;

    if ( typeid(typename traits::iterator_category)
    == typeid(std::bidirectional_iterator_tag)) {
        for ( ; begin != end; ++begin ) {
            v.push_back(&(*begin));
        }
        for ( int i=1; i< v.size(); i++ ) {
            key = *v[i];
            j = i - 1;
            while ( j >= 0 && *v[j] > key ) {
                *v[j + 1] = *v[j];
                j = j - 1;
            }
            *v[j + 1] = key;
        }

    } else if ( typeid(typename traits::iterator_category)
    == typeid(std::random_access_iterator_tag) ) {
        int i = 0;
        for ( ; begin != end; ++begin ) {
            key = *(arr + i);
            j = i - 1;
            while ( j >= 0 && *(arr+j) > key ) {
                *(arr + j + 1) = *(arr + j);
                j = j - 1;
            }
            *(arr + j + 1) = key;
            i++;
        }
    }
}

#endif  // _USERS_JOHAECHANG_OOD_LAB13_SORT_H_
