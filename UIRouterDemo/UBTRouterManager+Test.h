//
//  UBTRouterManager+Test.h
//  UIRouterDemo
//
//  Created by zhazha on 2019/5/18.
//  Copyright © 2019 zhazha. All rights reserved.
//

#import "UBTRouterManager.h"
#import "UBTRouterBlockParam.h"

NS_ASSUME_NONNULL_BEGIN

@interface UBTRouterManager (Test)

- (void)test:(NSString*)d nd:(NSString*)str2 completion:(UBTRouterBlock)completion;

- (NSString *)testFunction1:(NSString *)param1 param2:(nonnull NSString *)param2;
@end

NS_ASSUME_NONNULL_END
