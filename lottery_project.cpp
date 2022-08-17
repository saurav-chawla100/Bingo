#include<bits/stdc++.h>
using namespace std;
int main(){
	int selected_student[25];
	int num ; 
	for(int i=0;i<25;i++){
		num = rand()%100;
		//removing duplicate rollnumber
		for(int j=0;j<i;j++){
			if(num==selected_student[j]){
				num = rand()%100;
			}
		}
		selected_student[i] = num;
	}
    

    sort(selected_student,selected_student+25);
    
    cout<<"Selected Students Are : "<<endl;
	for(int i=0;i<25;i++){
		cout<<selected_student[i]<<endl;
	}
	cout<<"Congratuations The Selection Students Will Get One Free Course "<<endl;
}