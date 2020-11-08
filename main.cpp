#include<bits/stdc++.h>
#include<fstream>
#include<string>
using namespace std;

class question{
public:
    string que,ans;
    string op1,op2,op3,choice;
    question* nextque;
    question* prevque;

    question(){
        que=ans=op1=op2=op3=choice="";
        prevque=nextque=NULL;
    }
};

question* jumpque(int,question*);
void displayQ();
void displaytable(int,string);
void view(question*);
int evaluate(question*);



question* append(question* head,question* node){
     question*temp=head;
    if(head==NULL){
        head=node;
        return head;
        //head->nextque=NULL;
    }
    else{
        while(temp->nextque!=NULL)
        {
         temp =temp->nextque;
        }

        temp->nextque=node;
        node->prevque =temp;

        return head;
    }
    return head;
}


int main(){

    int score=0;
    string Name;
    cout<<" \t\t****************************************************************\n";
    cout<<" \t\t                                                                \n";
    cout<<" \t\t                                                                \n";
    cout<<" \t\t                                                                \n";
    cout<<" \t\t              -----------------------------                     \n";
    cout<<" \t\t                  **WELCOME TO FDS QUIZ**                       \n";
    cout<<" \t\t          CHECK YOUR KNOWLEDGE ON DATA STRUCTURE                \n";
    cout<<" \t\t              -----------------------------                     \n";
    cout<<" \t\t                                                                \n";
    cout<<" \t\t                                                                \n";
    cout<<" \t\t                                                                \n";
    cout<<" \t\t                                                   - ABR TRIO   \n";
    cout<<" \t\t*************************************************************** \n";

    cout<<"\n\n\t\tPress Enter to start with Quiz\n\n";

    cin.get();


    cout<<"Please Enter your name->\t";
    getline(cin,Name);
    cout<<"\n\n";

    int choice1;
    while(true){
        cout<<"Are you ready for the Quiz!!\n";
        cout<<"1. yess  \(@^0^@)/\n";
        cout<<"2. Not now, maybe later  (´。＿。｀)\n";
        cin>>choice1;

        if(choice1==2){
            cout<<"Thank you for your time!\n";
            return 0;
        }
        else if(choice1!=1){
            cout<<"Please enter your choice according to the given menu\n";
            continue;
        }
        break;
    }

    int choice2;
    cout<<"Please Enter the difficulty type of questions\n";
    cout<<"\n\n1. Easy\n";
    cout<<"2. Hard\n";
    cin>>choice2;

    string q ,a,op1,op2,op3;
    question* head=NULL;

    ifstream take;
    if(choice2==1)
    {
        take.open("QNAeasy_file.txt");
    }
    else{
        take.open("QNAhard_file.txt");
    }
    while(take.eof()==0){

        question* qeasy =new question();
        getline(take,q);
        getline(take,a);
        getline(take,op1);
        getline(take,op2);
        getline(take,op3);
        qeasy->que =q;
        qeasy->ans =a;
        qeasy->op1 =op1;
        qeasy->op2 =op2;
        qeasy->op3 =op3;
        head =append(head,qeasy);

    }

   take.close();
   cout<<endl<<"\n---------------------------------------------"<<endl;
   view(head);
   score = evaluate(head);
   cout<<score<<endl;
   displaytable(score,Name);
   return 0;

}


void displayQ(question* node){
     int guess;
     question* temp=node;
     cout<<endl<<temp->que<<endl;
     cout<<"1. "<<temp->op1<<endl;
     cout<<"2. "<<temp->op2<<endl;
     cout<<"3. "<<temp->op3<<endl<<endl;
     cout<<"Enter ans number->\t";
     cin>>guess;

        if(guess==1 ){
            temp->choice = temp->op1;
        }
        else if(guess==2 ){
            temp->choice = temp->op2;
        }
        else if(guess==3 ){
            temp->choice = temp->op3;
        }
        else{
            cout<<"\n**Please enter option number which is provided**\n\n";
        }

}


void view(question* queeasy1){
    question* temp = queeasy1;
    int choice4;

    while(true){
        system("CLS");
        displayQ(temp);
        while(true){
            cout<<"\nDisplay next question or previous question\n";
            cout<<"1. NEXT\n";
            cout<<"2. PREVIOUS\n";
            cout<<"3. JUMP TO ANOTHER QUESTION\n";
            cout<<"4. submit";
            cin>>choice4;

            if(choice4 == 1){
                if(temp->nextque ==NULL){
                cout<<"This is Last Question";
                }
                else
                temp = temp->nextque;
                break;
            }
            else if(choice4==2){

               if(temp->prevque ==NULL){
                cout<<"This is Fist Question";
                }
                else
                temp = temp->prevque;
                break;
            }

            else if(choice4==3){
                int choice3;
                cout<<"Enter the question you want to visit(from 1 - 10)>>"<<endl;
                cin>>choice3;
                temp =jumpque(choice3,queeasy1);
                 break;
            }

            else if(choice4==4){
            char c;
            cout<<"***ARE YOU SURE YOU WANT TO SUBMIT(y or n)?*****"<<endl;
            cin>>c;
            if(c=='y'|| c== 'Y'){
              cout<<"****Successfully Submitted****"<<endl;
              return;
            }
             break;
            }
            else{
                cout<<"Please enter correct option\n";
            }
        }
    }
}
question* jumpque(int queno,question* diff){
    question* temp = diff;
    queno--;
    while(queno--){
        temp = temp->nextque;
    }
    return temp;
}


int  evaluate(question* head){
  int marks=0;
  question* temp=head;

  do{
      if(temp->ans.compare(temp->choice)==0){
        marks+=1;
      }
      temp=temp->nextque;
  }while(temp!=NULL);

  return marks;
}


void displaytable(int score,string name){
    cout<<"\n";
    cout<<"\t\t******************************************************************\n";
    cout<<"\t\t                                                                  \n";
    cout<<"\t\t                                                                  \n";
    cout<<"\t\t             "<<name<<" you scored "<<score<<" points             \n";
    cout<<"\t\t                                                                  \n";
    cout<<"\t\t                                                                  \n";
    cout<<"\t\t                  HOPE YOU LIKE OUR QUIZ!!                        \n";
    cout<<"\t\t                                                                  \n";
    cout<<"\t\t                         ヾ(^▽^*)))                                \n";
    cout<<"\t\t******************************************************************\n";
    cout<<'\n';
}
