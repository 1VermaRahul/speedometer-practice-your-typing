#include<bits/stdc++.h>
#include<ctime>
#include<fstream>
using namespace std;

int main(){
	system("clear");
	cout<<"=============================Welcome in speedometer...==========================\n";
	cout<<"\n============To know your typing speed please write following content.==========\n";
	cout<<"\n\t\tthis should be continues (without pressing Enter).\n";
	int cnt=0;
	a:string s="",line;
	if(cnt>0){
		cout<<"\n\t\tLevel upgraded do you want to continue...<y/n>\n\n";
		char ch1;
		cin>>ch1;
		if(ch1=='y'){
					system("clear");
			cout<<"\n\t\tcongratulation for evolution...\n\n";
		}else
		exit;
	}else
	cout<<"\n\tSorry you should get at least 60% \aaccuracy to clear the level\n\n";
	if(cnt==0){
		ifstream file ("level1.txt");
		if(file.is_open()){
		while(getline(file,line)){
			cout<<line<<endl;
			s+=line;
		}
		file.close();
		}else
		cout<<"Unable to open file";
	}else if(cnt==1){
		ifstream file ("level2.txt");
		if(file.is_open()){
		while(getline(file,line)){
			cout<<line<<endl;
			s+=line;
		}
		file.close();
		}else
		cout<<"Unable to open file";
	}else if(cnt==2){
		ifstream file ("level3.txt");
		if(file.is_open()){
		while(getline(file,line)){
			cout<<line<<endl;
			s+=line;
		}
		file.close();
		}else
		cout<<"Unable to open file";
	}else if(cnt==3){
		ifstream file ("level4.txt");
		if(file.is_open()){
		while(getline(file,line)){
			cout<<line<<endl;
			s+=line;
		}
		file.close();
		}else
		cout<<"Unable to open file";
	}
	else if(cnt==4){
		cout<<"Congrats !! you have cleared all levels";
		exit;
	}
	
	cout<<"\n\t\tIf you want to start please press y else press n\n";
	char ch;
	cin>>ch;
	cin.ignore();
	if(ch=='y'){
		cout<<"\t\t\tSTART\n";
		string temp;
		clock_t begin=clock();
		getline(cin,temp);
		clock_t end=clock();
		double elapsed_sec = double(end-begin)/CLOCKS_PER_SEC;
		double speed=temp.size() * elapsed_sec;
		int c=0;
		for(int i=0;i<s.size();i++){
			if(temp[i]!=s[i])
				c++;
		}
		double acc=double(s.size()-c)/s.size() * 100;
		cout<<"\nAccureccy is "<<acc<<"%\n";
		cout<<"\nYour speed is "<<speed<<" characters/second\n";
		cout<<endl<<endl;
		if(acc>60)
		cnt++;
		goto a;
	}else
		return 0;
}
