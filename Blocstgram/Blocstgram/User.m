//
//  User.m
//  Blocstgram
//
//  Created by McCay Barnes on 7/6/15.
//  Copyright (c) 2015 McCay Barnes. All rights reserved.
//

#import "User.h"

@implementation User

-(instancetype) initWithDictionary:(NSDictionary *)userDictionary {
    self = [super init];
    
    if (self) {
        self.idNumber = userDictionary[@"id"];
        self.userName = userDictionary[@"username"];
        self.fullname = userDictionary[@"full_name"];
        
        NSString *profileURLString = userDictionary[@"profile_picture"];
        NSURL *profileURL = [NSURL URLWithString:profileURLString];
        
        if (profileURL) {
            self.profilePictureURL = profileURL;
        }
    }
    return self;
}

# pragma mark - NSCoding

-(void) encodeWithCoder:(NSCoder *)aCoder {
    [aCoder encodeObject:self.idNumber forKey:NSStringFromSelector(@selector(idNumber))];
    [aCoder encodeObject:self.userName forKey:NSStringFromSelector(@selector(userName))];
    [aCoder encodeObject:self.fullname forKey:NSStringFromSelector(@selector(fullname))];
    [aCoder encodeObject:self.profilePicture forKey:NSStringFromSelector(@selector(profilePicture))];
    [aCoder encodeObject:self.profilePictureURL forKey:NSStringFromSelector(@selector(profilePictureURL))];
}

-(instancetype) initWithCoder:(NSCoder *)aDecoder {
    self = [super init];
    
    if (self) {
        self.idNumber = [aDecoder decodeObjectForKey:NSStringFromSelector(@selector(idNumber))];
        self.userName = [aDecoder decodeObjectForKey:NSStringFromSelector(@selector(userName))];
        self.fullname = [aDecoder decodeObjectForKey:NSStringFromSelector(@selector(fullname))];
        self.profilePicture = [aDecoder decodeObjectForKey:NSStringFromSelector(@selector(profilePicture))];
        self.profilePictureURL = [aDecoder decodeObjectForKey:NSStringFromSelector(@selector(profilePictureURL))];
    }
    return self;
}

@end
