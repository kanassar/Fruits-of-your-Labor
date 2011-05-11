//
//  AmigoAPI.h
//  Amigotchi
//
//  Created by Kareem Nassar on 4/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ASIHTTPRequest.h"
#import "ASIFormDataRequest.h"
#import "ASINetworkQueue.h"
#import "AmigoUser.h"

@interface AmigoAPI : NSObject {
    
    
}

@property (nonatomic, readwrite, retain) ASINetworkQueue      *queue;
@property (nonatomic, readwrite, retain) AmigoUser            *user;


-(void)login:(NSString*)access_token;


//helpers
- (id)parseJsonResponse:(NSString *)responseString;

@end
