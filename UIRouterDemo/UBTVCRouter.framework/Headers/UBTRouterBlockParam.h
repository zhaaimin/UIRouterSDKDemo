//
//  UBTRouterBlockParam.h
//  UBTUIRouterTool
//
//  Created by zhazha on 2019/4/29.
//  Copyright © 2019 zhazha. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UBTRouterBlockParam;

typedef void(^UBTRouterBlock)(UBTRouterBlockParam *routerBlockParam);

NS_ASSUME_NONNULL_BEGIN

@interface UBTRouterBlockParam : NSObject

@property (nonatomic, strong) NSError *error;

//回调传递的数据
@property (nonatomic,       ) id object;

//当涉及到多个回调的时候，该参数用来区分当前回调
@property (nonatomic,       ) NSInteger type;

@end

NS_ASSUME_NONNULL_END
