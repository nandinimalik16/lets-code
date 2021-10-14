/*Securities buying

Harry has just started investing in stock markets. There are a variety of securities that he can buy, but he is a bit confused about buying the securities because he has a limited amount of money. The prices of the various securities are given for N days and security_value[k] denotes the price of the security on the kth day. There is one more rule, Harry can buy at most k number of securities on the kth day. As mentioned earlier, Harry has a limited amount of money with him to buy these securities and this amount is denoted by z. Can you guide Harry in finding the maximum number of securities that he can buy?
Constraints:

All the security prices given in the security_value array are positive integers.

    1<=security_value[k]<=50
    10<=length of array security_value<=50

Input Format:

    The first line contains an integer z denoting the limited amount which Harry has with him.
    The second line contains an array named security_value consisting of the prices of various securities on N different days.

Output Format:

An integer denoting maximum number of securities which Harry can buy with that limited amount(which is denoted by z).
Do not print Debug Statements while submitting the solution.*/
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <queue>
#include <sstream>
#include <typeinfo>
#include <bits/stdc++.h>
using namespace std;
 

 
int main(){
 
int z;
cin>>z;
vector<int> input_data;
string buffer;
int data;
getline(cin, buffer);
getline(cin, buffer);
istringstream iss(buffer);
 
 
while (iss >> data)
    input_data.push_back(data);
 
int n= input_data.size();
 
 
 
 vector<pair<int,int>> vect;
 for(int i=0;i<n;i++)
 {
    vect.push_back(make_pair(input_data[i],i+1));
 
 }
 sort(vect.begin(),vect.end());
 int i=0,num=0;
 while(z>0)
 {
    if(vect[i].first>z)
    {
    break;
    }
    int k=vect[i].first*vect[i].second;
    if(k<=z)
    {
        num+=vect[i].second;
        z=z-k;
    }
    else
    {
        int l=z/vect[i].first;
        num+=l;
        z-=l*vect[i].first;
    }
    i++;
    }
        
 
 

cout << num;
 
 
 
}
 
 
