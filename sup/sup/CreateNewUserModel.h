//
//  CreateNewUserModel.h
//  sup
//
//  Created by Sam Finegold on 3/22/15.
//  Copyright (c) 2015 Sam Finegold. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CreateNewUserModel : NSObject
+(CreateNewUserModel*)getSharedInstance;
-(void)addUser: (NSString*) name : (NSString*) email : (NSNumber*) user_id;
@end
