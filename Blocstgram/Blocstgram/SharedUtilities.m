//
//  SharedUtilities.m
//  Blocstgram
//
//  Created by McCay Barnes on 7/16/15.
//  Copyright (c) 2015 McCay Barnes. All rights reserved.
//

#import "SharedUtilities.h"
#import "Media.h"

@implementation SharedUtilities


+ (UIActivityViewController *) sharedMediaItem:(Media *)media {
    NSMutableArray *itemsToShare = [NSMutableArray array];
    
    if (media.caption.length > 0) {
        [itemsToShare addObject:media.caption];
    }
    
    if (media.image) {
        [itemsToShare addObject:media.image];
    }
    
    if (itemsToShare.count > 0) {
        UIActivityViewController *activityVC = [[UIActivityViewController alloc] initWithActivityItems:itemsToShare applicationActivities:nil];
        
        return activityVC;
    }
    return nil;
}


@end
