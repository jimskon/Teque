#include <stdio.h>
#include <cstring>
#include <deque>
using namespace std;

void display(deque<int> l) {
  for (auto x: l) {
    printf(" %d",x);
  }
}

void insert_middle(deque<int> &teque, int n) {
  auto it = teque.begin();
  advance(it, (teque.size()+1) / 2);
  teque.insert(it,n);
}
  
void fastscan(int &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    int c;

    number = 0;

    // extract current character from buffer
    c = getchar_unlocked();
    if (c=='-')
    {
        // number is negative
        negative = true;

        // extract the next character from the buffer
        c = getchar_unlocked();
    }

    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar_unlocked())
        number = number *10 + c - 48;

    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}

void faststring(char &str[20])
{
  char c='x';
  for (int i=0; (c!=' '); c=getchar_unlocked())
    str[i++]=c;
  str[i]=0;
}
int main()
{
    int n;
    deque<int> teque;
    char str[20];
    int v;

    scanf("%d", &n);
    fastscan(&n);
    for (int i=0; i<n; i++) {
        //display(teque);
        //printf(" S: %lu\n",teque.size() );
        faststring(&s);
        fastscan(&v);
        //scanf("%s %d", str, &v);
        //printf("ADD %d, %lu\n",v,teque.size());
        if (strcmp(str,"push_back")==0) {
            teque.push_back(v);
        } else if (strcmp(str,"push_front")==0) {
            teque.push_front(v);
        } else if (strcmp(str,"push_middle")==0) {
            insert_middle(teque,v);
        } else {                        // assume get
            auto it = teque.begin();
            advance(it, v);
            printf("%d\n",*it);
        }

    }
}
