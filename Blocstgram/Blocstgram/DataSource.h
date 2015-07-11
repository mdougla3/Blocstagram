//
//  DataSource.h
//  Blocstgram
//
//  Created by McCay Barnes on 7/6/15.
//  Copyright (c) 2015 McCay Barnes. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class Media;

@interface DataSource : NSObject

+(instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSMutableArray *mediaItems;

-(void) deleteMediaItem:(Media *)item;

-(void) removeMediaItemsAtIndex:(NSInteger)index;
-(void) moveMediaItemToTop:(Media *)item indexPath:(NSIndexPath *)index;

@end
