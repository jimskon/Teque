#include <stdio.h>
#include <cstring>
#include <list>
using namespace std;
 
int main()
{
    int n;
    list<int> teque;
    char str[20];
    int v;
    list<int>::iterator middle=teque.begin();

    scanf("%d", &n);
    //cin >> n;
    for (int i=0; i<n; i++) {
        for (auto x:teque) {
            printf(" %d",x);
        }
        printf("\n");
        scanf("%s %d", str, &v);
        //printf("ADD %d, %lu\n",v,teque.size());
        //cin >> c >> v;
        if (strcmp(str,"push_back")==0) {
            teque.push_back(v);
            if (teque.size()%2) 
                ++middle;
        } else if (strcmp(str,"push_front")==0) {
            teque.push_front(v);
            if (teque.size()%2) 
               --middle;
        } else if (strcmp(str,"push_middle")==0) {
            //auto it = teque.begin();
            //cout << "I:" << teque.size()+1 / 2 << endl;
            //advance(it, (teque.size()+1) / 2); // Move iterator to the middle
            printf("M: %d ",*middle);
            teque.insert(middle,v);
            
            
            if (teque.size()%2) 
                ++middle;
        } else {                        // assume get
            auto it = teque.begin();
            advance(it, v);
            printf("%d\n",*it);
            //cout << *it << endl;
        }
        printf("M: %d\n",*middle);

    }
}