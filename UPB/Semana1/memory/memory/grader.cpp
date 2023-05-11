#include <stdio.h>
#include <stdlib.h>
#include <map>

using namespace std;

static char card[51];
static int up[2], is_up[51], candy[25], candies, moves;

char lol(int C){
   int c0, c1;
   if (C < 1 || C > 50 || is_up[C]) {
      exit(92);
   }
   is_up[C] = 1;
   up[moves%2] = C;
   moves++;
   if (moves%2 == 0) {
      c0 = card[ up[0] ] - 'A';
      c1 = card[ up[1] ] - 'A';
      if (c0==c1 && !candy[c0]) {
         candy[c0] = 1;
         ++candies;
      }
      is_up[ up[0] ] = is_up[ up[1] ] = 0;
   }
   return card[C];
}

void play()
{
   char a,b;
   int c0;
   map<char,int> mp;
   map<char, pair<int,int>> mpp;
   for(int i=1; i<=50; i++)
   {
      a = lol(i);
      if(!mp[a])
      mp[a]=i;
      else
      mpp[a] = make_pair(mp[a], i);
   }
   for(int i='A'; i<='Y'; i++)
   {
      c0 = i - 'A';
      if(!candy[c0])
      {
         // b =  i;
         // printf("Char: %c\n", b);
         a = lol(mpp[i].first);
         b = lol(mpp[i].second);
      }
   }
}

void pg(){
   int i;
   for (i=1;i<=50;i++) {
      card[i] = getchar();
      // printf("Char: %c", card[i]);
   }
   moves = candies = 0;
   play();
   if (candies != 25) {
      exit(91);
   }
}

int main(){
   pg();
   printf("OK %d\n",moves);
   return 0;
}
