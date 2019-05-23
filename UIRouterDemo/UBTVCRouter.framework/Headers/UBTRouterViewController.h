//
//  UBTRouterViewController.h
//  UBTUIRouterTool
//
//  Created by zhazha on 2019/4/29.
//  Copyright © 2019 zhazha. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UBTRouterBlockParam.h"
#import <objc/message.h>

//static id (*custom_msgSend)(id, SEL, ...) = (id (*)(id, SEL, ...))objc_msgSend;

NS_ASSUME_NONNULL_BEGIN

@interface UBTRouterViewController : UIViewController

- (void)configureParams:(id)params;

- (id)getParams;

- (void)configureRouterBlock:(UBTRouterBlock)routerBlock;

- (UBTRouterViewController * (^)(UBTRouterBlockParam *))routerBlock;

- (id)callFunctionWithSelectorName:(NSString *)selectorName withObjects:(id)objects;

- (id)getValueWithPropertyName:(NSString *)propertyName;

@end

NS_ASSUME_NONNULL_END
