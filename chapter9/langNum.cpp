#include <iostream>
#include <string>

using namespace std;

string eng = "";
string eng1 = "";

void tens (int i){
    if (i==9){
        eng+= " ninety ";
    }
    if (i==8){
        eng+= " eighty ";
    }
    if (i==7){
        eng+= " seventy ";
    }
    if (i==6){
        eng+= " sixty ";
    }
    if (i==5){
        eng+= " fifty ";
    }
    if (i==4){
        eng+= " forty ";
    }
    if (i==3){
        eng+= " thirty ";
    }
    if (i==2){
        eng+= " twenty ";
    }
}
void tens1 (int i){
    if (i==9){
        eng1+= " ninety ";
    }
    if (i==8){
        eng1+= " eighty ";
    }
    if (i==7){
        eng1+= " seventy ";
    }
    if (i==6){
        eng1+= " sixty ";
    }
    if (i==5){
        eng1+= " fifty ";
    }
    if (i==4){
        eng1+= " forty ";
    }
    if (i==3){
        eng1+= " thirty ";
    }
    if (i==2){
        eng1+= " twenty ";
    }
}




//Handles numbers from 0-19
void ones (int i){
    if (i==19){
        eng+= " nineteen ";
    }
    if (i==18){
        eng+= " eighteen ";
    }
    if (i==17){
        eng+= " seventeen ";
    }
    if (i==16){
        eng+= " sixteen ";
    }
    if (i==15){
        eng+= " fifteen ";
    }
    if (i==14){
        eng+= " fourteen ";
    }
    if (i==13){
        eng+= " thirteen ";
    }
    if (i==12){
        eng+= " twelve ";
    }
    if (i==11){
        eng+= " eleven ";
    }
    if (i==10){
        eng+= " ten ";
    }
    if (i==9){
        eng+= " nine ";
    }
    if (i==8){
        eng+= " eight ";
    }
    if (i==7){
        eng+= " seven ";
    }
    if (i==6){
        eng+= " six ";
    }
    if (i==5){
        eng+= " five ";
    }
    if (i==4){
        eng+= " four ";
    }
    if (i==3){
        eng+= " three ";
    }
    if (i==2){
        eng+= " two ";
    }
    if (i==1){
        eng+= " one ";
    }
}
void ones1 (int i){
    if (i==19){
        eng1+= " nineteen ";
    }
    if (i==18){
        eng1+= " eighteen ";
    }
    if (i==17){
        eng1+= " seventeen ";
    }
    if (i==16){
        eng1+= " sixteen ";
    }
    if (i==15){
        eng1+= " fifteen ";
    }
    if (i==14){
        eng1+= " fourteen ";
    }
    if (i==13){
        eng1+= " thirteen ";
    }
    if (i==12){
        eng1+= " twelve ";
    }
    if (i==11){
        eng1+= " eleven ";
    }
    if (i==10){
        eng1+= " ten ";
    }
    if (i==9){
        eng1+= " nine ";
    }
    if (i==8){
        eng1+= " eight ";
    }
    if (i==7){
        eng+= " seven ";
    }
    if (i==6){
        eng1+= " six ";
    }
    if (i==5){
        eng1+= " five ";
    }
    if (i==4){
        eng1+= " four ";
    }
    if (i==3){
        eng1+= " three ";
    }
    if (i==2){
        eng1+= " two ";
    }
    if (i==1){
        eng1+= " one ";
    }
}

void part (int chunk, int digits){
    cout << "\n chunk" << chunk;
    if (digits<=2&&chunk<=19){
        ones(chunk);
    }
    else if (digits<=2&&chunk>=20){
        tens(chunk/10);
        part(chunk%10, --digits);
    }
    else if (digits==3) {
        ones(chunk/100);
        eng+=" hundred ";
        part(chunk%100, --digits);
    }
    else if (digits==4){
        ones1(chunk/1000);
        eng1+=" thousand ";
        part(chunk%10, --digits);
    }
    else if (digits==5){
        tens1(chunk/10);
        ones1(chunk%10);
        part(chunk%10, --digits);
    }
    else{
        ones(chunk/100000);
        eng1+=" hundred ";
        part(chunk%100, --digits);
    }
}


//determines the number of digits of the number entered
int numDigits(int num){
    int i=6;
    int digits=1;
    while (i>0){
        //cout<<"number of digits " <<digits<<"\n";
        //cout<<"number is : " << num << "\n";
        //cin.get();
        if (num/10>0){
            ++digits;
            num=num/10;
             --i;
        }
        else{
            break;
        }

    }
    return digits;
}


int main(){
    int num;


    cout<< "Enter your number: ";
    cin>> num;

    int digits = numDigits(num);

    cout<<"\n number" << num;

    part(num, digits);
    if(digits<5)
        cout << eng;
    else
        cout << eng1+" "+eng;

}




