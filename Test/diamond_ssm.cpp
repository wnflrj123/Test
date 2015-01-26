//
//  diamond_ssm.cpp
//  Test
//
//  Created by 서듈 on 2014. 11. 26..
//  Copyright (c) 2014년 서듈. All rights reserved.
//

#include <stdio.h>

int main(){
    
    int tc;     // Test cases
    
    scanf("%d",&tc);
    
    while(tc--) {
        int m;
        int i, j;
        scanf("%d",&m);
        
//        if(m%2==0){
            for(i=0; i<m; i++){
                for(j=0; j<m-i; j++)
                    printf("+");
                
            }
//        }else{
//            
//        }
        
        
//    }

        return 0;
        
        
        
        
    }}