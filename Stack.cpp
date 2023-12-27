#include<iostream>
using namespace std;

const int N=1e5;
struct stac
{
    int arr[N];
    int end=-1;

void push(int x){
    arr[++end]=x;
    return ;
}
int size(){
    if(end<0){
        return 0;
    }
    else{
        return  end+1;
    }
}
bool isEmpty(){
    return end>=0;
}

void pop(){
    if(end<0){
        cout << "stack is empty" << endl;
        return ;
    }
    else{
        end--;
        return ;
    }
}

int peek(){
    if(end<0){
        return 0;
    }
    else{
        return arr[end];
    }
}
};

int main(){
    int t;
    cin >> t;
    stac temp;
    while(t--){
        string str;
        cin >> str;
        if(str=="push"){
            int x;
            cin >> x;
            temp.push(x);
        }
        else if(str=="pop"){
            temp.pop();
        }
        else if(str=="peek"){
            if(temp.peek()==0){
                cout << "-1" << endl;
            } 
            else{
                cout << temp.peek() << endl;
            }
        }
        else if(str=="size"){
            cout << temp.size() << endl;
        }
        else if(str=="isempty"){
            cout << !temp.isEmpty() << endl;
        }
    }
}