#include <iostream>
#include <stack>
using namespace std;

int main (void){
    long N;
    std :: cin >> N;
    stack<long> arr;
    stack<long> stack1;
    stack<long> stack2;
    stack<long> stack3;
    stack<long> stack4;
    stack1.push(0);
    stack2.push(0);
    stack3.push(0);
    stack4.push(0);
    long arrk[4];

    int jm=0;
    if(N==1){
        long val;
        cin >> val;
        cout<<"YES";
        }
    else{
    for (long i =0; i<N ; i++){
        long val;
        std :: cin >> val;
        if(stack1.empty()||stack1.top()<val){
            stack1.push(val);
        }
        else if (stack2.empty()||stack2.top()<val){
            stack2.push(val);
        }
        else if (stack3.empty()||stack3.top()<val){
            stack3.push(val);
        }
        else if (stack4.empty()||stack4.top()<val){
            stack4.push(val);
        }
        else {
            cout << "NO";
            jm=1;
            break;
        }
    }
    if(jm==0){
    
    for (long i =0; i<N; i++){
              for (long k=0;k<4;k++){
                arrk[k] =0;
            }
            if ( !stack1.empty() )
            {
                  arrk[0]= stack1.top();
            }
            if ( !stack2.empty() )
            {
                 arrk[1]= stack2.top();
            }
            if ( !stack3.empty() )
            {
                 arrk[2]= stack3.top();
            }
            if ( !stack4.empty() )
            {
                 arrk[3]= stack4.top();
            }

            long a;
            long max =0;
            for (long j=0; j<4;j++){
                if(arrk[j] > max) max =arrk[j];
            }

            arr.push(max); 
            if ( !stack1.empty() )
            {
                if(max== stack1.top()){
                    stack1.pop();
                }
            }
            if ( !stack2.empty() )
            {
                if(max== stack2.top()){
                    stack2.pop();
                }
            }
            if ( !stack3.empty() )
            {
                if(max== stack3.top()){
                    stack3.pop();
                }
            }
            if ( !stack4.empty() )
            {
                if(max== stack4.top()){
                    stack4.pop();
                }
            }
    }


        long a;

        for (long i=0; i<N;i++){
            if (i==0){
                a = arr.top();
                arr.pop();
                
            }
            else {
                if(a > arr.top()){
                    cout << "NO";
                    break;
                }
                else {
                    if(i==N-1){
                    cout << "YES";
                    break;
                    }
                    else {
                        a = arr.top();
                        arr.pop();
                    }
                }
            }   
        }
    }
    }

    return 0;



    }

