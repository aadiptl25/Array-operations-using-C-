#include<bits/stdc++.h>
using namespace std;
class arrayops{
    private:
        int arr[5];
        signed int l, u;
    public:
        arrayops(){
            l = -1;
            u = -1;
        }
        void addBegin(){
            if(u>=4){
                cout << endl << "The array is full!";
            }
            else{
                int ele = 0;
                cout<<"Enter the element you want to add at the beginning -> ";
                cin >> ele;
                if(l==-1 and u==-1){
                    l++;
                    u++;
                    arr[l] = ele;
                }
                else{
                    for(int i=u;i>=l;i--){
                        arr[i+1] = arr[i];
                    }
                    arr[l] = ele;
                    u++;
                }
            }
        }
        void addEnd(){
            if(u>=4){
                cout<<endl << "The array is full!" << endl;
            }
            else{
                if(l==-1 and u==-1){
                    l++;
                    u++;
                }
                else{
                    u++;
                }
                cout << "Enter element with lower location -> "<<l <<" and upper location -> "<<u << " --> ";
                cin >> arr[u];
            }
        }
        void addLoc(){
            int loc,ele;
            cout << "Enter the location wherein you want to add an element -> ";
            cin >> loc;
            if(u>=4){
                cout << "Array is full " << endl;
            }
            else if(l==-1 and u==-1){
                if(loc==0){
                    cout << "Enter the element -> ";
                    cin >> arr[loc];
                    cout << endl;
                    l++;
                    u++;
                }
                else{
                    cout << "Invalid location, try again." << endl;
                }
            }
            else{
                if(l<=loc<=u){
                    cout << "Enter the element -> ";
                    cin >> ele;
                    for(int i=u;i>=loc;i--){
                        arr[i+1] = arr[i];
                    }
                    arr[loc] = ele;
                    u++;
                    cout << endl;
                }
            }
            
        }
        void display(){
            if(l==-1 and u==-1){
                cout << "The array is empty!";
            }
            else{
                cout << "The array is:- ";
                for (int i=l; i<=u;i++){
                    cout << arr[i] <<" ";
                }
            }
            cout << endl;
        }
        void exit(){
            cout << "Thank you for using our program!" << endl;
            cout <<endl<< "The final array is:- ";
            if(l==-1 and u==-1){
                cout << "empty" << endl << endl;
            }
            else{
                for (int i=l; i<=u;i++){
                    cout << arr[i] <<" ";
                }
                cout << endl;
            }
        }
        void searchLoc(){
            int loc;
            
            
            if(l==-1 and u==-1){
                cout << endl << "The array is empty!" << endl;
            }
            else{
                cout << "Enter the location you want to search -> "; 
                cin >> loc;
                if(l<=loc<=u){
                
                    cout << endl<< "The element with index " << loc << " is -> " << arr[loc] << endl;
                }
                else{
                    cout << endl << "Invalid Location, try again." << endl;
                }
            }
        }
        void searchEle(){
            if(l==-1 and u==-1){
                cout << endl << "The array is empty!" << endl;
            }
            else{
                int ele;
                cout <<endl <<"Enter the element you want to search -> ";
                cin >> ele;
                int cnt=0;
                for(int i=l;i<=u;i++){
                    if(arr[i]==ele){
                        cout << endl<< "The element " << ele << " is at location " << i << endl;
                        cnt++;
                    }
                }
                if(cnt==0){
                    cout << endl <<"The element is not found in the array." << endl;
                }
            }
        }
        void updLoc(){
            int loc;
            
            if(l==-1 and u==-1){
                cout << endl << "The array is empty!" << endl;
            }
            else {
                cout << "Enter the location at which you want to update the value -> ";
                cin >> loc;
                if(l<=loc<=u){
                    cout << "Enter the new value -> ";
                    cin >> arr[loc];
                }
                else{
                    cout << endl << "Invalid Location, try again." << endl;
                }
            }
        }
        void updEle(){
            if(l==-1 and u==-1){
                cout << endl << "The array is empty!" << endl;
            }
            else{
                int ele,updele;
                cout << endl <<"Enter the value you want to update -> ";
                cin >> ele;
                cout << endl <<"Enter the updated value -> ";
                cin >> updele;
                int cnt=0;
                for(int i=l;i<=u;i++){
                    if(arr[i]==ele){
                        arr[i] = updele;
                        cnt++;
                    }
                }
                if(cnt==0){
                    cout << endl <<"The element is not found in the array." << endl;
                }
            }
        }
        void delEnd(){
            if(l==-1 and u==-1){
                cout << endl << "The array is empty!" << endl;
            }
            else if(l==0 and u==0){
                cout << "Deleted the element " << arr[u] << " from end";
                l--;u--;
            }
            else{
                cout << "Deleted the element -> " << arr[u] << " from end";
                u--;
            }
        }
        void delBegin(){
            if(l==-1 and u==-1){
                cout << endl << "The array is empty!" << endl;
            }
            else if(l==0 and u==0){
                cout << "Deleted the element " << arr[l] << " from beginning";
                l--;u--;
            }
            else{
                cout << "Deleted the element " << arr[l] << " from beginning";
                for(int i = l; i<u; i++){
                    arr[i]=arr[i+1];
                }
                u--;
            }
        }
        void delLoc(){
            if(l==-1 and u==-1){
                cout << endl << "The array is empty!" << endl;
            }
            else {
                int loc;
                cout<<endl << "Enter the location in the array from which you want to delete the value -> ";
                cin >> loc;
                if(l==0 and u==0 and loc==0){
                    cout<<endl << "Deleted the element " << arr[loc] << " from location -> "<<loc;
                    l--;u--;
                }
                else{
                    cout<<endl << "Deleted the element " << arr[loc] << " from location -> " << loc;
                    for(int i = loc; i<=u; i++){
                        arr[i]=arr[i+1];
                    }
                    u--;
                }
            }
        }
        void delEle(){
            if(l==-1 and u==-1){
                cout << endl << "The array is empty!" << endl;
            }
            else {
                int ele;
                cout<<endl << "Enter the data value that you want to delete -> ";
                cin >> ele;
                if(l==0 and u==0 and arr[u]==ele){
                    cout<<endl << "Deleted the element " << ele << " from location -> "<<ele;
                    l--;u--;
                }
                else{
                    int cnt=0;
                    for(int i=l;i<=u;i++){
                        if(arr[i]==ele){
                            for(int j=i;j<u;j++){
                                arr[j]=arr[j+1];
                            }
                            u--;
                        }
                    }
                    if(cnt==0){
                        cout << endl << "The value is not found in the array.";
                    }
                }
            }
        }
};

int main(){
    arrayops A;
    int ch=0;
    do{
        cout <<endl<< "Enter 1 for add at beginning" << endl;
        cout << "Enter 2 for add at end" << endl;
        cout << "Enter 3 for add at given location" << endl;
        cout << "Enter 4 to search at a location" << endl;
        cout << "Enter 5 to search an element" << endl;
        cout << "Enter 6 to update at a location" << endl;
        cout << "Enter 7 to update an element" << endl;
        cout << "Enter 8 to delete at the end" << endl;
        cout << "Enter 9 to delete at the beginning" << endl;
        cout << "Enter 10 to delete from a given location" << endl;
        cout << "Enter 11 to delete a particular element" << endl;
        cout << "Enter 12 to display the array" << endl;
        cout << "Enter 0 to exit" << endl;
        cout << endl << "Enter your option -> ";
        cin >> ch;
        cout << endl;
        if(ch==1){
            A.addBegin();
        }
        else if(ch==2){
            A.addEnd();
        }
        else if(ch==3){
            A.addLoc();
        }
        else if(ch==4){
            A.searchLoc();
        }
        else if(ch==5){
            A.searchEle();
        }
        else if(ch==6){
            A.updLoc();
        }
        else if(ch==7){
            A.updEle();
        }
        else if(ch==8){
            A.delEnd();
        }
        else if(ch==9){
            A.delBegin();
        }
        else if(ch==10){
            A.delLoc();
        }
        else if(ch==11){
            A.delEle();
        }
        else if(ch==12){
            A.display();
        }
        else if(ch==0){
            A.exit();
        }
        else{
            cout << "Enter a valid operation !" << endl;
        }
    }while(ch!=0);
    return 0;
}
