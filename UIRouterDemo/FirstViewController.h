//
//  FirstViewController.h
//  UBTUIRouterTool
//
//  Created by zhazha on 2019/4/29.
//  Copyright © 2019 zhazha. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "UBTModel.h"

#import <UBTVCRouter/UBTVCRouter.h>


NS_ASSUME_NONNULL_BEGIN

@interface FirstViewController : UIViewController

@property (nonatomic, copy) NSString *testString;

@property (nonatomic, copy) NSArray *testArr;

@property (nonatomic, strong) UBTModel *model;

//@property (nonatomic, copy) void (^routerBlockTest)(void);

@property (nonatomic, copy) UBTRouterBlock routerBlockTest;

- (void)test:(NSString*)d nd:(NSString*)str2 completion:(UBTRouterBlock)completion;

- (NSString *)testFunction:(NSString *)param1 param2:(NSString *)param2;


@end

NS_ASSUME_NONNULL_END
