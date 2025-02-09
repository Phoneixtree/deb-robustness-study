/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is true */

typedef unsigned long size_t;
typedef long __off_t;
typedef long __off64_t;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef void _IO_lock_t;
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   void *__pad3 ;
   void *__pad4 ;
   size_t __pad5 ;
   int _mode ;
   char _unused2[(15UL * sizeof(int ) - 4UL * sizeof(void *)) - sizeof(size_t )] ;
};
typedef int bool;
#pragma merger("0","/tmp/cil-C6YVQbeH.i","")
#pragma merger("0","/tmp/cil-JY7GYS94.i","")
extern struct _IO_FILE *stdout ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
int Cur_Vertical_Sep  ;
bool High_Confidence  ;
bool Two_of_Three_Reports_Valid  ;
int Own_Tracked_Alt  ;
int Own_Tracked_Alt_Rate  ;
int Other_Tracked_Alt  ;
int Alt_Layer_Value  ;
int Positive_RA_Alt_Thresh[4]  ;
int Up_Separation  ;
int Down_Separation  ;
int Other_RAC  ;
int Other_Capability  ;
int Climb_Inhibit  ;
void initialize(void) 
{ 


   

                                  
                                  
                                  
                                  
         
 

}
int ALIM(void) 
{ 


   

  return (Positive_RA_Alt_Thresh[Alt_Layer_Value]);
 

}
int Inhibit_Biased_Climb(void) 
{ 
  int tmp ;

  {
                      
                              
         {
    tmp = Up_Separation;
  }
  return (tmp);
}
}
bool Own_Below_Threat(void) ;
bool Own_Above_Threat(void) ;
bool Non_Crossing_Biased_Climb(void) 
{ 
                        
  bool result ;
           
  int tmp___0 ;
               
  int tmp___2 ;
  int tmp___3 ;
               
               
               

  {
   
                               
                                           
   
                        {
    {
    tmp___0 = Own_Below_Threat();
    }
                 {
       
                                   
       
                    

        {
        tmp___2 = ALIM();
        }
                                        {
          tmp___3 = 0;
        }       
                      
         
               
                    
       
    }       
                  
     
    result = tmp___3;
  }       
     
                                 
     
                  
                                    
         
                         
         
                                       
                      
                
                      
         
              
                    
       
            
                  
     
                     
   
  return (result);
}
}
bool Non_Crossing_Biased_Descend(void) 
{ 
                        
  bool result ;
           
               
               
               
               
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;

  {
   
                               
                                           
   
                         
     
                                 
     
                  
                                    
         
                         
         
                                         
                      
                
                      
         
              
                    
       
            
                  
     
                     
         {
     
                                 
     
                 {
      {
      tmp___4 = Own_Above_Threat();
      }
                   {
        {
        tmp___5 = ALIM();
        }
                                      {
          tmp___6 = 1;
        }       
                      
         
      }       
                    
       
    }       
                  
     
    result = tmp___6;
  }
  return (result);
}
}
bool Own_Below_Threat(void) 
{ 


   

  return (Own_Tracked_Alt < Other_Tracked_Alt);
 

}
bool Own_Above_Threat(void) 
{ 


   

  return (Other_Tracked_Alt < Own_Tracked_Alt);
 

}
int alt_sep_test(void) 
{ 
  bool enabled ;
  bool tcas_equipped ;
                         
                       
  bool need_downward_RA ;
  int alt_sep ;
  int tmp ;
               
                
                
               
                
  bool tmp___5 ;
  int tmp___6 ;

  {
  if (High_Confidence) {
    if (Own_Tracked_Alt_Rate <= 600) {
                                   
                
              
                
       
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  enabled = tmp;
  tcas_equipped = Other_Capability == 1;
                                   
                         
                  
            
                  
     
          
                
   
                             
              
  if (enabled) {
                        
                             
                    
              
                    
       
              //Added block
            
     if (! tcas_equipped) {
              
       
                                            
       
                    
         
                                     
         
                      
                      
                
                      
         
              
                    
       
       
                               
                                              
       
                   {
        {
        tmp___5 = Own_Above_Threat();
        }
        if (tmp___5) {
          tmp___6 = 1;
        } else {
                      
        }
      }       
                    
       
      need_downward_RA = tmp___6;
                           
                               
                      
                
                  
         
             { //Added block
          
                           
                    
                 //Added block
      if (need_downward_RA) {
        alt_sep = 2;
      } else {
                    
      }
       

      }
    }
     

  }
  return (alt_sep);
}
}
extern int exit() ;
extern int atoi() ;
int main(int argc , char **argv ) 
{ 
  int tmp ;

  {
                  
     

                                                                                                             
                                                                                                                                         
                                                                                                                                    
                                                                                                                           
                                                                                                                      
            
     

   
   

               
                                       
  High_Confidence = atoi(*(argv + 2));
                                                 
  Own_Tracked_Alt = atoi(*(argv + 4));
  Own_Tracked_Alt_Rate = atoi(*(argv + 5));
  Other_Tracked_Alt = atoi(*(argv + 6));
                                      
                                    
                                      
                                 
  Other_Capability = atoi(*(argv + 11));
                                     
  tmp = alt_sep_test();
  fprintf((FILE * __restrict  )stdout, (char const   * __restrict  )"%d\n", tmp);
          
   

}
}
