//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>
#include <deque>

using namespace std;
deque<int> line;

int main()
{
    int s;
    int i, j, cnt=1;
    
    cin >> s;
    for(i=1;i<=s;i++){
        char inputm, inputd;
        int n;
        cin >> inputm >> inputd;
        if(inputm=='A'){
            if(inputd=='L')
                line.push_front(cnt++);
            else
                line.push_back(cnt++);
        }
        if(inputm=='D'){
            cin >> n;
            if(inputd=='L')
                for(j=1;j<=n;j++)
                    line.pop_front();
            else
                for(j=1;j<=n;j++)
                    line.pop_back();
        }
    }
        
    for (deque<int>::iterator it=line.begin(); it!=line.end(); ++it)
        std::cout << *it << endl;
    
    return 0;
}
