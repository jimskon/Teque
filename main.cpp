que#include <stdio.h>
#include <cstring>
#include <list>
using namespace std;

void display(deque<int> l) {
  for (auto x: l) {
    printf(" %d",x);
  }
}

void insert_middle(deque<int> teque, int n) {
  auto it = numbers.begin();
  advance(it, (teque.size()+1) / 2);
  teque.insert(it,n);
}
  

int main()
{
    int n;
    deque<int> teque;
    char str[20];
    int v;

    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        //display(teque);
        //printf(" S: %lu, M: %d\n",teque.size(),*middle);
        //scanf("%s %d", str, &v);
        //printf("ADD %d, %lu\n",v,teque.size());
        if (strcmp(str,"push_back")==0) {
            teque.push_back(v);
        } else if (strcmp(str,"push_front")==0) {
            teque.push_front(v);
        } else if (strcmp(str,"push_middle")==0) {
            insert_middle(teque,v)
        } else {                        // assume get
            auto it = teque.begin();
            advance(it, v);
            printf("%d\n",*it);
        }

    }
}
