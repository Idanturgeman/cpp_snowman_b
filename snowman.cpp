#include <string>
#include <stdexcept>
using namespace std;

#include "snowman.hpp"
 namespace ariel {
     string snowman(int number){
         string number_str = to_string(number);
         
         if(number_str.size() != NUM)
         {//check valid number of snowman
             throw invalid_argument("Invalid code \'" + number_str + "\'");
         }
         
         char index = '0';  //specific number of one part of the body of snowman
         for(int i = 0; i < NUM; i++)
         {
            index = number_str[i];
             if(index < '1' || index > '4')
             {
                 throw invalid_argument("Invalid code \'" + number_str + "\'");
             }
         }
         string head = head_tmp;
         int i = 0; //index to go through all parts of the body of snowman

         index = number_str[i++];
         string snowman_hat = hat.at(index - '1');
         index = number_str[i++];
         head[3] = nose.at(index - '1');
         index = number_str[i++];
         head[2] = eyes.at(index - '1');
         index = number_str[i++];
         head[4] = eyes.at(index - '1');
         char left = ' '; 
         char right = ' ';
         index = number_str[i++];
         if(index == '2')
         {  
             head[0] = '\\';
         }
         else
         {
             left = Larm.at(index - '1');
         }
         index = number_str[i++];
         if(index == '2')
         {    
             head[head.size() - 2] = '/';
         }
         else
         {
             right = Rarm.at(index - '1');
         }
         index = number_str[i++];
         string torso = body.at(index - '1');
         torso[0] = left;
         torso[torso.size() - 2] = right;
         index = number_str[i++];
         string Snowman = snowman_hat + head + torso + base.at(index - '1');
         return Snowman;
     }
 }