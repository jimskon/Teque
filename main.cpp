#include <stdio.h>
#include <cstring>
#include <list>
using namespace std;

void display(list<int> l) {
  for (auto x: l) {
    printf(" %d",x);
  }
}

int main()
{
    int n;
    list<int> teque;
    char str[20];
    int v;
    list<int>::iterator middle=teque.end();

    scanf("%d", &n);
    //cin >> n;
    for (int i=0; i<n; i++) {
        //display(teque);
        //printf(" S: %lu, M: %d\n",teque.size(),*middle);
        scanf("%s %d", str, &v);
        //printf("ADD %d, %lu\n",v,teque.size());
        //cin >> c >> v;
        if (strcmp(str,"push_back")==0) {
            teque.push_back(v);
            if (teque.size()==2) ++middle;
            if (teque.size()%2==1) {
                ++middle;
            }
        } else if (strcmp(str,"push_front")==0) {
            teque.push_front(v);
            if (teque.size()%2) 
               --middle;
        } else if (strcmp(str,"push_middle")==0) {
            //auto it = teque.begin();
            //cout << "I:" << teque.size()+1 / 2 << endl;
            //advance(it, (teque.size()+1) / 2); // Move iterator to the middle
            //printf("M1: %d \n",*middle);
            teque.insert(middle,v);
            //printf("M2: %d \n",*middle);
            
            if (teque.size()%2==0) 
              --middle;
            //printf("M3: %d \n",*middle);
        } else {                        // assume get
            auto it = teque.begin();
            advance(it, v);
            printf("%d\n",*it);
            //cout << *it << endl;
        }

    }
}
