

sbit P3_2 = 0xB2;   
sbit P1 = 0x80;
sbit P2 = 0x81;
sbit P3 = 0x82;
sbit P4 = 0x83;
void main(){
   
   while(1){
   	if (P3_2 == 0){

   P1 = 1;
   P2 = 1;
   P3 = 1;
   P4 = 1;
   }
    else 
	P1 = 0;
	P2 = 0;
	P3 = 0;
    P4 = 0;
  };
} 

