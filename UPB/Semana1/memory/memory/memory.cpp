#include "grader.h"
#include "memory.h"
#include <stdio.h>
#include <stdlib.h>
#include <map>

using namespace std;

void play() {
   char a,b;
   int c0;
   map<char,int> mp;
   map<char, pair<int,int>> mpp;
   for(int i=1; i<=50; i++)
   {
      a = faceup(i);
      if(!mp[a])
      mp[a]=i;
      else
      mpp[a] = make_pair(mp[a], i);
   }
   for(int i='A'; i<='Y'; i++)
   {
      a = faceup(mpp[i].first);
      b = faceup(mpp[i].second);
   }
}
