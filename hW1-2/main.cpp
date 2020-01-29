#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

class linked_list
{
public:
    node *head,*tail;
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node()
    {
        int n;
        cout<<"Enter value: "<<endl;
        cin>>n;
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
  

    
    
    
    };
void positivebolen(node *list){
    while (list!=NULL) {
        int data=list->data;
        for(int i=1;i<=data;i++){
            if (data%i==0) {
                cout<<i<<" ";
            }
        }
        cout<<endl;
        list=list->next;
    }
}

int recursiveSequential( node *list, int size, int value ) {

    if( size == 0 ) {return 0;}
    if( value == list->data ) {return 1;}
    if(list->next == NULL){return -1;}
  return recursiveSequential( list->next, size , value );
    
}
int main()
{
    linked_list a;
    int numberOfList,val;
        cout << "Enter number of list: "<< endl;
        cin >>numberOfList;
    for(int i=0;i<numberOfList;i++){
        a.add_node();
        }
    cout<<"Enter searching value : "<<endl;
    cin>>val;
    int deger=recursiveSequential(a.head, numberOfList, val);
    if( deger == 1){
        cout<<"içinde var"<<endl;
        positivebolen(a.head);
    }
    else{
        cout<<"yok"<<endl;
    }
    
    
    return 0;

}

