#include <bits/stdc++.h>
using namespace std;

class question{
public:
    string que,ans;
    string op1,op2,op3;
    question* nextque;
    question* prevque;

    question(){
        que="",ans="";
        prevque=nextque=NULL;
    }
};

void jumpque(int,question*,int);
void displaytable(int,string);
void listque();
void vieweasy(question*,int);
void viewhard(question*,int);

// Global variable
string Name;

int main(){

    int score=0;

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
    cin>>Name;
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
  
// for easy questions    
    question* queeasy1 = new question();
    question* queeasy2 = new question();
    question* queeasy3 = new question();
    question* queeasy4 = new question();
    question* queeasy5 = new question();
    question* queeasy6 = new question();
    question* queeasy7 = new question();
    question* queeasy8 = new question();
    question* queeasy9 = new question();
    question* queeasy10 = new question();

    queeasy1->que = "";
    queeasy1->op1 = "";
    queeasy1->op2 = "";
    queeasy1->op3 = "";
    queeasy1->ans = "";
    queeasy1->nextque = queeasy2;
    queeasy1->prevque = NULL;

    queeasy2->que = "";
    queeasy2->op1 = "";
    queeasy2->op2 = "";
    queeasy2->op3 = "";
    queeasy2->ans = "";
    queeasy2->nextque = queeasy3;
    queeasy2->prevque = queeasy1;

    queeasy3->que = "";
    queeasy3->op1 = "";
    queeasy3->op2 = "";
    queeasy3->op3 = "";
    queeasy3->ans = "";
    queeasy3->nextque = queeasy4;
    queeasy3->prevque = queeasy2;

    queeasy4->que = "";
    queeasy4->op1 = "";
    queeasy4->op2 = "";
    queeasy4->op3 = "";
    queeasy4->ans = "";
    queeasy4->nextque = queeasy5;
    queeasy4->prevque = queeasy3;

    queeasy5->que = "";
    queeasy5->op1 = "";
    queeasy5->op2 = "";
    queeasy5->op3 = "";
    queeasy5->ans = "";
    queeasy5->nextque = queeasy6;
    queeasy5->prevque = queeasy4;

    queeasy6->que = "";
    queeasy6->op1 = "";
    queeasy6->op2 = "";
    queeasy6->op3 = "";
    queeasy6->ans = "";
    queeasy6->nextque = queeasy7;
    queeasy6->prevque = queeasy5;

    queeasy7->que = "";
    queeasy7->op1 = "";
    queeasy7->op2 = "";
    queeasy7->op3 = "";
    queeasy7->ans = "";
    queeasy7->nextque = queeasy8;
    queeasy7->prevque = queeasy6;

    queeasy8->que = "";
    queeasy8->op1 = "";
    queeasy8->op2 = "";
    queeasy8->op3 = "";
    queeasy8->ans = "";
    queeasy8->nextque = queeasy9;
    queeasy8->prevque = queeasy7;

    queeasy9->que = "";
    queeasy9->op1 = "";
    queeasy9->op2 = "";
    queeasy9->op3 = "";
    queeasy9->ans = "";
    queeasy9->nextque = queeasy10;
    queeasy9->prevque = queeasy8;

    queeasy10->que = "";
    queeasy10->op1 = "";
    queeasy10->op2 = "";
    queeasy10->op3 = "";
    queeasy10->ans = "";
    queeasy10->nextque = NULL;
    queeasy10->prevque = queeasy9;




// for hard questions
    question* quehard1 = new question();
    question* quehard2 = new question();
    question* quehard3 = new question();
    question* quehard4 = new question();
    question* quehard5 = new question();
    question* quehard6 = new question();
    question* quehard7 = new question();
    question* quehard8 = new question();
    question* quehard9 = new question();
    question* quehard10 = new question();


    quehard1->que = "";
    quehard1->op1 = "";
    quehard1->op2 = "";
    quehard1->op3 = "";
    quehard1->ans = "";
    quehard1->nextque = quehard2;
    quehard1->prevque = NULL;
    
    quehard2->que = "";
    quehard2->op1 = "";
    quehard2->op2 = "";
    quehard2->op3 = "";
    quehard2->ans = "";
    quehard2->nextque = quehard3;
    quehard2->prevque = quehard1;

    
    quehard3->que = "";
    quehard3->op1 = "";
    quehard3->op2 = "";
    quehard3->op3 = "";
    quehard3->ans = "";
    quehard3->nextque = quehard4;
    quehard3->prevque = quehard2;

    quehard4->que = "";
    quehard4->op1 = "";
    quehard4->op2 = "";
    quehard4->op3 = "";
    quehard4->ans = "";
    quehard4->nextque = quehard5;
    quehard4->prevque = quehard3;

    quehard5->que = "";
    quehard5->op1 = "";
    quehard5->op2 = "";
    quehard5->op3 = "";
    quehard5->ans = "";
    quehard5->nextque = quehard6;
    quehard5->prevque = quehard4;

    quehard6->que = "";
    quehard6->op1 = "";
    quehard6->op2 = "";
    quehard6->op3 = "";
    quehard6->ans = "";
    quehard6->nextque = quehard7;
    quehard6->prevque = quehard5;

    quehard7->que = "";
    quehard7->op1 = "";
    quehard7->op2 = "";
    quehard7->op3 = "";
    quehard7->ans = "";
    quehard7->nextque = quehard8;
    quehard7->prevque = quehard6;

    quehard8->que = "";
    quehard8->op1 = "";
    quehard8->op2 = "";
    quehard8->op3 = "";
    quehard8->ans = "";
    quehard8->nextque = quehard9;
    quehard8->prevque = quehard7;

    quehard9->que = "";
    quehard9->op1 = "";
    quehard9->op2 = "";
    quehard9->op3 = "";
    quehard9->ans = "";
    quehard9->nextque = quehard10;
    quehard9->prevque = quehard8;

    quehard10->que = "";
    quehard10->op1 = "";
    quehard10->op2 = "";
    quehard10->op3 = "";
    quehard10->ans = "";
    quehard1->nextque = NULL;
    quehard1->prevque = quehard10;

   

    if(choice2 == 1){
        vieweasy(queeasy1,score);
                                            
    }
    else if(choice2 == 2){
        viewhard(quehard1,score);
    }
    return 0;
}

void vieweasy(question* queeasy1,int score){  // make menu for both forward iterating, previous iterating, random
    question* temp = queeasy1;
    int guess,choice4;

// for displaying easy question and their options
    while(true){
        cout<<"** "<<temp->que<<'\n';
        cout<<"1. "<<temp->op1<<'\n';
        cout<<"2. "<<temp->op2<<'\n';
        cout<<"3. "<<temp->op3<<"\n\n";

        cout<<"Enter your option number->\t";
        cin>>guess;

        if(guess==1 && temp->ans == temp->op1){
            cout<<"Yay!! Your answer is correct\n";
            cout<<"You scored 10 points\n\n";
            score+=10;
        }
        else if(guess==2 && temp->ans == temp->op2){
            cout<<"Yay!! Your answer is correct\n";
            cout<<"You scored 10 points\n\n";
            score+=10;
        }
        else if(guess==3 && temp->ans == temp->op3){
            cout<<"Yay!! Your answer is correct\n";
            cout<<"You scored 10 points\n\n";
            score+=10;
        }
        else{
            cout<<"\n**Please enter option number which is provided**\n\n";
        }
        
        if(temp->nextque == NULL){
            cout<<"\t\t**Quiz Ended**\n\n";
            displaytable(score,Name);
            break;
        }

// for selecting next question or previous questoin.
        while(true){
            cout<<"\nDisplay next question or previous question\n";
            cout<<"1. NEXT\n";
            cout<<"2. PREVIOUS\n";
            cout<<"3. JUMP TO ANOTHER QUESTION\n";
            cin>>choice4;

            if(choice4 == 1){
                temp = temp->nextque;
                break;
            }
            else if(choice4==2 && temp->prevque==NULL){
                cout<<"THIS IS 1st QUESTION. PLEASE TAKE NEXT QUESTION\n";
                temp = temp->nextque;
                break;
            }
            else if(choice4==2){
                temp = temp->prevque;
                break;
            }

            else if(choice4==3){
                int choice3;
                cout<<"Enter the question you want to visit(from 1 - 10)\n";
                cin>>choice3;
                jumpque(choice3,queeasy1,score);
            }
            else{
                cout<<"Please enter correct option\n";
            }
        }
    }      
}

void jumpque(int queno,question* diff,int score){
    question* temp = diff;
    queno--;
    while(queno--){
        temp = temp->nextque;
    }

    while(true){
        int guess;

        cout<<"** "<<temp->que<<'\n';
        cout<<"1. "<<temp->op1<<'\n';
        cout<<"2. "<<temp->op2<<'\n';
        cout<<"3. "<<temp->op3<<"\n\n";

        cout<<"Enter your option number->\t";
        cin>>guess;

        if(guess==1 && temp->ans == temp->op1){
            cout<<"Yay!! Your answer is correct\n";
            cout<<"You scored 10 points\n\n";
            score+=10;
        }
        else if(guess==2 && temp->ans == temp->op2){
            cout<<"Yay!! Your answer is correct\n";
            cout<<"You scored 10 points\n\n";
            score+=10;
        }
        else if(guess==3 && temp->ans == temp->op3){
            cout<<"Yay!! Your answer is correct\n";
            cout<<"You scored 10 points\n\n";
            score+=10;
        }
        else{
            cout<<"\n**Please enter option number which is provided**\n\n";
        }
    }
}


void viewhard(question* quehard1,int score){  // make menu for both forward iterating, previous iterating, random
    question* temp = quehard1;
    int guess,choice4;

// for displaying hard question and their options
    while(true){
        cout<<"** "<<temp->que<<'\n';
        cout<<"1. "<<temp->op1<<'\n';
        cout<<"2. "<<temp->op2<<'\n';
        cout<<"3. "<<temp->op3<<"\n\n";

        cout<<"Enter your option number->\t";
        cin>>guess;

        if(guess==1 && temp->ans == temp->op1){
            cout<<"Yay!! Your answer is correct\n";
            cout<<"You scored 10 points\n\n";
            score+=10;
        }
        else if(guess==2 && temp->ans == temp->op2){
            cout<<"Yay!! Your answer is correct\n";
            cout<<"You scored 10 points\n\n";
            score+=10;
        }
        else if(guess==3 && temp->ans == temp->op3){
            cout<<"Yay!! Your answer is correct\n";
            cout<<"You scored 10 points\n\n";
            score+=10;
        }
        else{
            cout<<"\n**Please enter option number which is provided**\n\n";
        }
        
        if(temp->nextque == NULL){  // last question.;
            cout<<"\t\t**Quiz Ended**\n\n";
            displaytable(score,Name);
            break;
        }

// for selecting next question or previous questoin.
        while(true){
            cout<<"\nDisplay next question or previous question\n";
            cout<<"1. NEXT\n";
            cout<<"2. PREVIOUS\n";
            cout<<"3. JUMP TO ANOTHER QUESTION\n";
            cin>>choice4;

            if(choice4 == 1){
                temp = temp->nextque;
                break;
            }
            else if(choice4==2 && temp->prevque==NULL){
                cout<<"THIS IS 1st QUESTION. PLEASE TAKE NEXT QUESTION\n";
                temp = temp->nextque;
                break;
            }
            else if(choice4==2){
                temp = temp->prevque;
                break;
            }
            else if(choice4==3){
                int choice3;
                cout<<"Enter the question you want to visit(from 1 - 10)\n";
                cin>>choice3;
                jumpque(choice3,quehard1,score);
            }
            else{
                cout<<"Please enter correct option\n";
            }
        }
    }      
}


void displaytable(int score,string name){
    cout<<"\n";
    cout<<"\t\t******************************************************************\n";
    cout<<"\t\t                                                                  \n";
    cout<<"\t\t                "<<name<<" you scored"<<score<<" points           \n";
    cout<<"\t\t                                                                  \n";
    cout<<"\t\t                                                                  \n";
    cout<<"\t\t                                                                  \n";
    cout<<"\t\t                                                                  \n";
    cout<<"\t\t                                                                  \n";
    cout<<"\t\t                  HOPE YOU LIKE OUR QUIZ!!                        \n";
    cout<<"\t\t                                                                  \n";
    cout<<"\t\t                        PLAY AGAIN!!                              \n";
    cout<<"\t\t                         ヾ(^▽^*)))                                \n";
    cout<<"\t\t******************************************************************\n";
    cout<<'\n';
}
