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

typedef void (^NewItemCompletionBlock)(NSError *error);

@interface DataSource : NSObject

+(instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSMutableArray *mediaItems;

-(void) deleteMediaItem:(Media *)item;

-(void) requestNewItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
-(void) requestOldItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;

-(void) removeMediaItemsAtIndex:(NSInteger)index;

@end
