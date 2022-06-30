#include<studio.h>
#include<unistd.h>
/**                                                                                                                                     
 * main - Entry point  
 *
 * Description: "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 *                                                                                                                                      
 * *Return: Always 0 (success)                                                                                                          
 */      
int main(void)
{
  
 /**                                                                                                                                    
   * Return something otherwise return 0                                                                                               
   */ 
  
   write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
   return (1);
}
