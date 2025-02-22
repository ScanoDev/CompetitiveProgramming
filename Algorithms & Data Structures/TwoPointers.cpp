#include <bits/stdc++.h>
using namespace std;

//Entendamos Two pointers con el problema de
//encontrar dos numeros que sumen un target

//Two sum se maneja con dos punteros, comumente
//se utilzia apra no suar dos for anidados
//así los dos punteros se mueven a la misma o diferentes velocidades
//Estos punteros son left y right


//aqui el vector debe estar ordenado!!!!
bool findPairWithSum(vector<int>& nums, int target){
    int left = 0;
    int right = nums.size()-1;

    while(left < right){
        int sum = nums[left] + nums[right];

        if(sum == target){
            cout << "Pares encontrados: " << nums[left] << ", " << nums[right] << endl;
            return true;
        } else if(sum < target){
            left++;
        } else{
            right--;
        }
    }

    cout << "No se encontraron pares con la suma objetivo";
}


int main(){
    vector<int> nums = {1,2,3,4,5,6};
    int target = 9;
    findPairWithSum(nums, target);
    return 0;
}