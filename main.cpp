#include <iostream>
#include <vector>

using namespace std ;
#define a 6 ;
#define b 4 ;
#define c 2 ;
#define d 0 ;

int main() {

  cout<<endl;

  cout<<"ENTER THE DATE FOR WHICH YOU WANT TO KNOW DAY :-  "<<endl;

  cout<<endl;

  cout<<"ENTER THE YEAR IN THE RANGE OF 1599 TO 2300."<<endl;

  cout << "(ENTER DATE IN THIS FORMAT DD/MM/YYYY)"<<endl;
  
  int num ,f,g,h=0,leapyear;
  
  int x ;

  vector<string>v;

  string date ;
  cout<<endl;

  cin >> date ;

  string temp;

  for( int i = 0 ; i <date.size();i++){

    if ( date[i]=='/')
    {
      v.push_back(temp);
      temp="";
    }
    else
    {
      temp= temp + date[i];
    }
  }
  v.push_back(temp);

  int dd = stoi(v[0]);

  int mm = stoi(v[1]);

  int yyyy= stoi(v[2]);

  if ( (yyyy % 400 == 0 ) || (yyyy % 4 == 0 && yyyy % 100 != 0))
  {

  if ( (dd >=1 && 31>=dd) && (mm == 1 || mm== 3 || mm== 5 || mm== 7 || mm== 8 || mm== 10 || mm== 12 ) && (yyyy>=1600 && 2399 >= yyyy) )
  {
  
  int jan[2]={0},mar[1]={0},may[1]={0} ,jul[1]={0},aug[1]={0},oct[1]={0},dec[1]={0};
  
 if ( mm== 1 )
 {
    jan[0] = mm;
    jan[0] = 6 ;
  } 
  else if ( mm == 3 )
  {
    mar[0] =mm ;
    mar[0] = 3 ;   
  } 
  else if ( mm == 5 )
  {
    may[0]=mm;
    may[0]= 1 ;  
  }
  else if ( mm == 7 )
  {
    jul[0] = mm;
    jul[0] = 6 ;   
  }
  else if ( mm == 8 )
  {
    aug[0]=mm ;
    aug[0] = 2 ;  
  }
  else if ( mm == 10 )
  {
    oct[0]=mm;
    oct[0] = 0 ;  
  }
  else if ( mm == 12 )
  {
    dec[0]=mm;
    dec[0] = 5 ; 
  }
  
  if ( (yyyy >= 1600 && yyyy <1699) || (yyyy >= 2000 && yyyy < 2099) ){

    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;

    h = g*10+f ;

    x = 6 ;

    leapyear= h/4;
      
  }
  else if ((yyyy >= 1700 && yyyy <1799) || (yyyy >= 2100 && yyyy < 2199) ){

    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;
  
    h = g*10+f ;

    x = 4 ;

    leapyear= h/4;
          
  }
  else if ((yyyy >= 1800 && yyyy <1899) || (yyyy >= 2200 && yyyy < 2299) ){
    
    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;
  
    h = g*10+f ;

    x = 2 ;

    leapyear= h/4;
    
  }
  else if ((yyyy >= 1900 && yyyy <1999) || (yyyy >= 2200 && yyyy < 2299) ){
    
    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;

    h = g*10+f ;

    x = 0 ;

    leapyear= h/4;
    
  }
  int total =  (dd + jan[0]+mar[0]+may[0]+jul[0]+aug[0]+oct[0]+dec[0] + x + h + leapyear )%7;
   cout<<endl ;

  if ( total == 0 ){
    cout << " Day is Sunday" ;
  }
  else if ( total ==1){
    cout<< "Day is Monday" ;
  }
  else if ( total ==2){
    cout<< "Day is Tuesday" ;
  }
  else if ( total ==3){
    cout<< "Day is Wednesday" ;
  }
  else if ( total ==4){
    cout<< "Day is Thursday" ;
  }
  else if ( total ==5){
    cout<< "Day is Friday" ;
  } 
  else if ( total ==6){
    cout<< "Day is Saturday" ;
  } 
  }
   else if ( (dd >=1 && 30>=dd) && (mm == 4 || mm== 6 || mm== 9 || mm== 11 ) && (yyyy>=1600 && 2399 >= yyyy)) {
    int apr[1]={0},jun[1]={0},sep[1]={0},nov[1]={0};
  
 if ( mm== 4 ){
    apr[0]=mm ;
    apr[0] = 6 ;   
  } 
  else if ( mm == 6 ){
    jun[0]= mm;
    jun[0]= 3 ;  
  }
  else if ( mm == 9 ){
    sep[0]=mm;
    sep[0]= 5 ;
    
  }
  else if ( mm == 11 ){
    nov[0]=mm ;
    nov[0]= 3 ;  
  }

   
  if ( (yyyy >= 1600 && yyyy <1699) || (yyyy >= 2000 && yyyy < 2099) ){

    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;

    h = g*10+f ;

    x = 6 ;

    leapyear= h/4;
      
  } 
  else if ((yyyy >= 1700 && yyyy <1799) || (yyyy >= 2100 && yyyy < 2199) ){

    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;
  
    h = g*10+f ;

    x = 4 ;
      
    leapyear= h/4;
     
  }
  else if ((yyyy >= 1800 && yyyy <1899) || (yyyy >= 2200 && yyyy < 2299) ){
    
    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;
  
    h = g*10+f ;

    x = 2 ;

    leapyear= h/4;
    
  }
  else if ((yyyy >= 1900 && yyyy <1999) || (yyyy >= 2200 && yyyy < 2299) ){
    
    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;

    h = g*10+f ;

    x = 0 ;
      
    leapyear= h/4;
    
  }

  int total =  (dd + apr[0]+jun[0]+sep[0]+nov[0]+ x + h + leapyear )%7;
  cout<<endl ;

  if ( total == 0 ){
    cout << " Day is Sunday" ;
  } 
  else if ( total ==1){
    cout<< "Day is Monday" ;
  }
  else if ( total ==2){
    cout<< "Day is Tuesday" ;
  } 
  else if ( total ==3){
    cout<< "Day is Wednesday" ;
  } 
  else if ( total ==4){
    cout<< "Day is Thursday" ;
  }
  else if ( total ==5){
    cout<< "Day is Friday" ;
  }
  else if ( total ==6){
    cout<< "Day is Saturday" ;
  } 
  }
  else if ( (mm =2) && (dd >=1 && 29>= dd ) && (yyyy>=1600 && 2399 >= yyyy)){

  int feb[2]={0};
  
  if ( mm == 2 ){ 
    feb[0] =2 ;
  }
    
  if ( (yyyy >= 1600 && yyyy <1699) || (yyyy >= 2000 && yyyy < 2099) ){

    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;

    h = g*10+f ;

    x = 6 ;

    leapyear= h/4;
      
  }
  else if ((yyyy >= 1700 && yyyy <1799) || (yyyy >= 2100 && yyyy < 2199) ){

    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;
  
    h = g*10+f ;

    x = 4 ;
      
    leapyear= h/4;
     
  }
  else if ((yyyy >= 1800 && yyyy <1899) || (yyyy >= 2200 && yyyy < 2299) ){
    
    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;
  
    h = g*10+f ;

    x = 2 ;

    leapyear= h/4;
    
  }
  else if ((yyyy >= 1900 && yyyy <1999) || (yyyy >= 2200 && yyyy < 2299) ){
    
    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;

    h = g*10+f ;

    x = 0 ;
      
    leapyear= h/4;
    
  }
  int total =  (dd +feb[0] + x + h + leapyear )%7;
  cout<<endl ;

  if ( total == 0 ){
    cout << " Day is Sunday" ;
  }
  else if ( total ==1){
    cout<< "Day is Monday" ;
  }
  else if ( total ==2){
    cout<< "Day is Tuesday" ;
  }
  else if ( total ==3){
    cout<< "Day is Wednesday" ;
  } 
  else if ( total ==4){
    cout<< "Day is Thursday" ;
  } 
  else if ( total ==5){
    cout<< "Day is Friday" ;
  } 
  else if ( total ==6){
    cout<< "Day is Saturday" ;
  } 
  }


  else{
    cout<<endl;
    cout<<"Invalid Date Format"<<endl;
  }
} 


 else {
  
  if ( (dd >=1 && 31>=dd) && (mm == 1 || mm== 3 || mm== 5 || mm== 7 || mm== 8 || mm== 10 || mm== 12 ) && (yyyy>=1600 && 2399 >= yyyy) ){

  int jan[2]={0},mar[1]={0},may[1]={0} ,jul[1]={0},aug[1]={0},oct[1]={0},dec[1]={0};
  
  if ( mm== 1 ){
    jan[0] = mm;
    jan[0] = 0 ;
  } 
   else if ( mm == 3 ){
    mar[0] =mm ;
    mar[0] = 3 ;   
  } 
   else if ( mm == 5 ){
    may[0]=mm;
    may[0]= 1 ;  
  }
  else if ( mm == 7 ){
    jul[0] = mm;
    jul[0] = 6 ;  
  }
  else if ( mm == 8 ){
    aug[0]=mm ;
    aug[0] = 2 ;   
  }
  else if ( mm == 10 ){
    oct[0]=mm;
    oct[0] = 0 ;  
  }
  else if ( mm == 12 ){
    dec[0]=mm;
    dec[0] = 5 ;  
  }
  
  if ( (yyyy >= 1600 && yyyy <1699) || (yyyy >= 2000 && yyyy < 2099) ){

    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;

    h = g*10+f ;

    x = 6 ;

    leapyear= h/4;
    
    
  } 
  else if ((yyyy >= 1700 && yyyy <1799) || (yyyy >= 2100 && yyyy < 2199) ){

    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;
  
    h = g*10+f ;

    x = 4 ;

    leapyear= h/4;
        
  }
  else if ((yyyy >= 1800 && yyyy <1899) || (yyyy >= 2200 && yyyy < 2299) ){
    
    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;
  
    h = g*10+f ;

    x = 2 ;

    leapyear= h/4;
   
  }
  else if ((yyyy >= 1900 && yyyy <1999) || (yyyy >= 2200 && yyyy < 2299) ){
    
    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;

    h = g*10+f ;

    x = 0 ;

    leapyear= h/4;
    
  }
  int total =  (dd + jan[0]+mar[0]+may[0]+jul[0]+aug[0]+oct[0]+dec[0] + x + h + leapyear )%7;
  cout<<endl ;

  if ( total == 0 ){
    cout << " Day is Sunday" ;
  }
  else if ( total ==1){
    cout<< "Day is Monday" ;
  }
  else if ( total ==2){
    cout<< "Day is Tuesday" ;
  } 
  else if ( total ==3){
    cout<< "Day is Wednesday" ;
  }
  else if ( total ==4){
    cout<< "Day is Thursday" ;
  } 
  else if ( total ==5){
    cout<< "Day is Friday" ;
  }
   else if ( total ==6){
    cout<< "Day is Saturday" ;
  } 

   else if ( (dd >=1 && 30>=dd) && (mm == 4 || mm== 6 || mm== 9 || mm== 11 ) && (yyyy>=1600 && 2399 >= yyyy)) {

  int apr[1]={0},jun[1]={0},sep[1]={0},nov[1]={0};
  
  if ( mm== 4 ){
    apr[0]=mm ;
    apr[0] = 6 ;   
  } 
  else if ( mm == 6 ){
    jun[0]= mm;
    jun[0]= 3 ;   
  }
  else if ( mm == 9 ){
    sep[0]=mm;
    sep[0]= 5 ;   
  }
  else if ( mm == 11 ){
    nov[0]=mm ;
    nov[0]= 3 ;  
  }

   
  if ( (yyyy >= 1600 && yyyy <1699) || (yyyy >= 2000 && yyyy < 2099) ){

    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;

    h = g*10+f ;

    x = 6 ;

    leapyear= h/4;
       
  } 
  else if ((yyyy >= 1700 && yyyy <1799) || (yyyy >= 2100 && yyyy < 2199) ){

    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;
  
    h = g*10+f ;

    x = 4 ;
      
    leapyear= h/4;
     
  }
  else if ((yyyy >= 1800 && yyyy <1899) || (yyyy >= 2200 && yyyy < 2299) ){
    
    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;
  
    h = g*10+f ;

    x = 2 ;

    leapyear= h/4;
    
  }
  else if ((yyyy >= 1900 && yyyy <1999) || (yyyy >= 2200 && yyyy < 2299) ){
    
    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;

    h = g*10+f ;

    x = 0 ;
      
    leapyear= h/4;
    
  }
  int total =  (dd + apr[0]+jun[0]+sep[0]+nov[0]+ x + h + leapyear )%7;
   cout<<endl ;

  if ( total == 0 ){
    cout << " Day is Sunday" ;
  } 
  else if ( total ==1){
    cout<< "Day is Monday" ;
  } 
  else if ( total ==2){
    cout<< "Day is Tuesday" ;
  }
  else if ( total ==3){
    cout<< "Day is Wednesday" ;
  } 
  else if ( total ==4){
    cout<< "Day is Thursday" ;
  } 
  else if ( total ==5){
    cout<< "Day is Friday" ;
  } 
  else if ( total ==6){
    cout<< "Day is Saturday" ;
  } 
  }
  else if ( (mm =2) && (dd >=1 && 28>= dd ) && (yyyy>=1600 && 2399 >= yyyy)){

    int feb[2]={0};
  
   if ( mm == 2 ){ 
    feb[0] =3 ;
  }
   
  if ( (yyyy >= 1600 && yyyy <1699) || (yyyy >= 2000 && yyyy < 2099) ){

    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;

    h = g*10+f ;

    x = 6 ;

    leapyear= h/4;
       
  } 
  else if ((yyyy >= 1700 && yyyy <1799) || (yyyy >= 2100 && yyyy < 2199) ){

    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;
  
    h = g*10+f ;

    x = 4 ;
      
    leapyear= h/4;
     
  }
  else if ((yyyy >= 1800 && yyyy <1899) || (yyyy >= 2200 && yyyy < 2299) ){
    
    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;
  
    h = g*10+f ;

    x = 2 ;

    leapyear= h/4;
    
  }
  else if ((yyyy >= 1900 && yyyy <1999) || (yyyy >= 2200 && yyyy < 2299) ){
    
    f = yyyy %10;

    yyyy = yyyy/10;

    g = yyyy %10;

    h = g*10+f ;

    x = 0 ;
      
    leapyear= h/4;
    
  }
  int total =  (dd +feb[0] + x + h + leapyear )%7;
  cout<<endl ;

  if ( total == 0 ){
    cout << " Day is Sunday" ;
  } 
  else if ( total ==1){
    cout<< "Day is Monday" ;
  } 
  else if ( total ==2){
    cout<< "Day is Tuesday" ;
  }
   else if ( total ==3){
    cout<< "Day is Wednesday" ;
  } 
  else if ( total ==4){
    cout<< "Day is Thursday" ;
  } 
  else if ( total ==5){
    cout<< "Day is Friday" ;
  }
   else if ( total ==6){
    cout<< "Day is Saturday" ;
  } 
  } 
  
} else {
  cout<<endl;
  cout<<"Invalid Date Format ";
}
}
}
