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



void part (int chunk, int digits){
    cout << "\n chunk" << chunk;
    if (digits<=2&&chunk<=19){
        ones(chunk);
    }
    else if (digits<=2&&chunk>=20){
        tens(chunk/10);
        part(chunk%10, --digits);
    }
    else {
        ones(chunk/100);
        eng+=" hundred ";
        part(chunk%100, --digits);
    }
}

//returns the number of digits
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

    int chunk1 =(num/1000)%1000;
    int chunk1Digits = numDigits(chunk1);





    int chunk = num%1000;
    int chunkDigits = numDigits(chunk);


    cout<<"\n number" << num;


        part(chunk1, chunk1Digits);
    if (digits>3)
        eng+= " thousand ";


  part(chunk, chunkDigits);
    cout << eng;

}
