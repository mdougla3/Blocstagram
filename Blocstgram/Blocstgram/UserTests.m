//
//  UserTests.m
//  Blocstgram
//
//  Created by McCay Barnes on 7/26/15.
//  Copyright (c) 2015 McCay Barnes. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <XCTest/XCTest.h>
#import "User.h"
#import "Media.h"
#import "ComposeCommentView.h"
#import "MediaTableViewCell.h"

@interface UserTests : XCTestCase

@end

@implementation UserTests

- (void)testThatInitializationWorks
{
    NSDictionary *sourceDictionary = @{@"id": @"8675309",
                                       @"username" : @"d'oh",
                                       @"full_name" : @"Homer Simpson",
                                       @"profile_picture" : @"http://www.example.com/example.jpg"};
    User *testUser = [[User alloc] initWithDictionary:sourceDictionary];
    
    XCTAssertEqualObjects(testUser.idNumber, sourceDictionary[@"id"], @"The ID number should be equal");
    XCTAssertEqualObjects(testUser.userName, sourceDictionary[@"username"], @"The username should be equal");
    XCTAssertEqualObjects(testUser.fullname, sourceDictionary[@"full_name"], @"The full name should be equal");
    XCTAssertEqualObjects(testUser.profilePictureURL, [NSURL URLWithString:sourceDictionary[@"profile_picture"]], @"The profile picture should be equal");
}

-(void)testThatMediaInitWorks {
    NSDictionary *sourceDictionary = @{@"id" : @"8901234", @"caption" : @"The sky is blue"};
    Media *testMedia = [[Media alloc] initWithDictionary:sourceDictionary];
    
    XCTAssertEqualObjects(testMedia.idNumber, sourceDictionary[@"id"], @"The ID is the same");
    XCTAssertEqualObjects(testMedia.caption, sourceDictionary[@"caption"], @"Equal captions");
}

-(void)testThatComposeCommentWorks {
    ComposeCommentView *composeComment = [[ComposeCommentView alloc] init];
    [composeComment setText:@"Blah blah"];
    
    XCTAssertTrue(composeComment.isWritingComment == YES);
    
    [composeComment setText:nil];
    
    XCTAssertTrue(composeComment.isWritingComment == NO);

}

-(void)testMediaCellHeights {
    MediaTableViewCell *mtvCell = [[MediaTableViewCell alloc] init];
    UITraitCollection *traitcollection = [[UITraitCollection alloc] init];
    Media *testMedia = [[Media alloc] init];
    
    mtvCell.mediaItem.image = [UIImage imageNamed:@"1.jpg"];
    
    XCTAssertTrue([MediaTableViewCell heightForMediaItem:testMedia width:testMedia.image.size.width traitCollection:traitcollection] == 2112);
    
    
}

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testExample {
    // This is an example of a functional test case.
    XCTAssert(YES, @"Pass");
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end
