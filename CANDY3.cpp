//#include<iostream>
//using namespace std;
//
//
//int length(char *a) {
//    int i=0;
//    while(a[i])
//        i++;
//    return i;
//}
//
//void reverse(char *a) {
//    int len = length(a);
//    
//    int i=0,j=len-1;
//    while(i<=j){
//        char temp = a[i];
//        a[i] = a[j];
//        a[j] = temp;
//        i++;j--;
//    }
//}
//
//bool divide(char *input, int num) {
//    int carry= 0,i=0,temp;
//    while(input[i]){
//        temp = (int)(input[i]-'0');
//        input[i] = (char)(((carry*10 + (int)(input[i]-'0'))/num)+'0');
//        carry = (carry*10+temp)%num;
//        i++;
//    }
//    if(carry){
//        return false;
//    } else {
//        return true;
//    }
//}
//
//void sum(char *first, char *second) {
//    int i=0,carry=0;
//    char result[200];
//    while(first[i] && second[i]) {
//        result[i] = (char)((((int)(first[i]-'0')+(int)(second[i]-'0')+carry)%10)+'0');
//        carry = ((int)(first[i]-'0')+(int)(second[i]-'0')+carry)/10;
//        i++;
//    }
//    while(first[i]){
//        result[i] = (char)((((int)(first[i]-'0')+carry)%10)+'0');
//        carry = ((int)(first[i]-'0')+carry)/10;
//        i++;
//    }
//    while(second[i]){
//        result[i] = (char)((((int)(second[i]-'0')+carry)%10)+'0');
//        carry = ((int)(second[i]-'0')+carry)/10;
//        i++;
//    }
//    if(carry){
//        result[i]=(char)(carry+'0');
//        i++;
//    }
//    result[i] = '\0';
//    reverse(result);
//    i=0;
//    while(result[i]) {
//        second[i] = result[i];
//        i++;
//    }
//}
//
//int main() {
//    
//    int t,num,i=0;
//    cin >> t;
//    while(t--) {
//        cin >> num;
//        char **input = new char*[num];
//        for(i = 0;i<num;i++){
//            input[i] = new char[200];
//        }
//        i=0;
//        while(i<num) {
//            cin >> input[i];
//            i++;
//        }
//        
//        for(int i = 1;i<num;i++){
//            reverse(input[i-1]);
//            reverse(input[i]);
//            
//            sum(input[i-1],input[i]);
//        }
//        
//        if(divide(input[num-1], num)){
//            cout << "YES\n";
//        }else {
//            cout << "NO\n";
//        }
//    }
//}
