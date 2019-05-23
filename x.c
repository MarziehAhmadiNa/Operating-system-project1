/* faeze soalti - 9427493 */
/* marziye ahmadi - 9420903 */

__asm__(".code16\n");
/*jump boot code entry*/
__asm__("jmpl $0x0000, $main\n");

void main() {
     __asm__ __volatile__("movb $0x09 ,%ah\n");  /*Functio9*/
     __asm__ __volatile__("movb $03,%al\n");     /*Heart Ascii*/
     __asm__ __volatile__("movw $0005,%bx\n");   /*Page0 , Color5*/
     __asm__ __volatile__("movw $0x00D,%cx");    /*14 Caracters*/
     __asm__ __volatile__("int  $0x10\n");       /*Interrupt 10->Bios*/

     __asm__ __volatile__("movb $'H' , %al\n");  /*Print Letter H Onto Screen*/
     __asm__ __volatile__("movb $0x0e, %ah\n"); /*function number = 0Eh : Display Character*/
     __asm__ __volatile__("int  $0x10\n"); /*call int 10h, BIOS video service*/

     __asm__ __volatile__("movb $'e' , %al\n");  /*Print Letter e Onto Screen*/
     __asm__ __volatile__("movb $0x0e, %ah\n");
     __asm__ __volatile__("int  $0x10\n");

    
     __asm__ __volatile__("movb $'l' , %al\n");  /*Print Letter l Onto Screen*/
     __asm__ __volatile__("movb $0x0e, %ah\n");
     __asm__ __volatile__("int  $0x10\n");

    
     __asm__ __volatile__("movb $'l' , %al\n");  /*Print Letter l Onto Screen*/
     __asm__ __volatile__("movb $0x0e, %ah\n");
     __asm__ __volatile__("int  $0x10\n");

     
     __asm__ __volatile__("movb $'o' , %al\n");  /*Print Letter o Onto Screen*/
     __asm__ __volatile__("movb $0x0e, %ah\n");
     __asm__ __volatile__("int  $0x10\n");

    
     __asm__ __volatile__("movb $',' , %al\n");  /*Print Letter , Onto Screen*/
     __asm__ __volatile__("movb $0x0e, %ah\n");
     __asm__ __volatile__("int  $0x10\n");

     
     __asm__ __volatile__("movb $' ' , %al\n");  /*Print Letter ' ' Onto Screen*/
     __asm__ __volatile__("movb $0x0e, %ah\n");
     __asm__ __volatile__("int  $0x10\n");

  
     __asm__ __volatile__("movb $'W' , %al\n");  /*Print Letter W Onto Screen*/
     __asm__ __volatile__("movb $0x0e, %ah\n");
     __asm__ __volatile__("int  $0x10\n");

    
     __asm__ __volatile__("movb $'o' , %al\n");  /*Print Letter o Onto Screen*/
     __asm__ __volatile__("movb $0x0e, %ah\n");
     __asm__ __volatile__("int  $0x10\n");

    
     __asm__ __volatile__("movb $'r' , %al\n");  /*Print Letter r Onto Screen*/
     __asm__ __volatile__("movb $0x0e, %ah\n");
     __asm__ __volatile__("int  $0x10\n");

    
     __asm__ __volatile__("movb $'l' , %al\n");  /*Print Letter l Onto Screen*/
     __asm__ __volatile__("movb $0x0e, %ah\n");
     __asm__ __volatile__("int  $0x10\n");

     
     __asm__ __volatile__("movb $'d' , %al\n");  /*Print Letter d Onto Screen*/
     __asm__ __volatile__("movb $0x0e, %ah\n");
     __asm__ __volatile__("int  $0x10\n");
}

