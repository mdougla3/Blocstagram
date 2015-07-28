//
//  SharedUtilities.h
//  Blocstgram
//
//  Created by McCay Barnes on 7/16/15.
//  Copyright (c) 2015 McCay Barnes. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class Media;

@interface SharedUtilities : NSObject

+ (UIActivityViewController *) sharedMediaItem:(Media *)media;

@end
