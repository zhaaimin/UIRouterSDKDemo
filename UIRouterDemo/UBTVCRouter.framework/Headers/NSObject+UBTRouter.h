//
//  NSObject+UBTRouter.h
//  UIRouterDemo
//
//  Created by zhazha on 2019/5/21.
//  Copyright © 2019 zhazha. All rights reserved.
//

#import <Foundation/Foundation.h>

#define SafeSetValue(object,value,key) if(object) { object.setValueForKey(value, key); }
#define SafeGetValue(object,key) if(object) { getValueForKey(key); }

@interface NSObject (UBTRouter)

/*!
 * @brief 设置属性值
 *
 * @discussion 采用key,value的方式。需要两个入参 Sample vc.setValueForKey(@"我是渣渣",@"testString");
 *
 * @return 返回一个NSObject对象，充分利用链式编程的优势
 */
- (NSObject * (^)(id value, id key))setValueForKey;

/*!
 * @brief 设置属性值
 *
 * @discussion 通过传入的key（属性的名称）的方式来获取相关的值 Sample vc.getValueForKey(@"testString");
 *
 * @return 返回一个id对象
 */
- (id (^)(id key))getValueForKey;

/*!
 * @brief 方法调用
 *
 * @discussion 当调用一个方法的时候可以统一使用此方法来调用，只需要传入相关方法名，和参数来实现方法的动态转发
 *
 *  Sample Code:
 
    UBTRouterBlock block = ^(UBTRouterBlockParam *routerBlockParam) {
       NSLog(@"callFunctionWithSelectorName routerBlockTest回调=%@",routerBlockParam.object);
    };
    [self.routerVC callFunctionWithSelectorName:@"test:nd:completion:" withObjects:@[@"1234",@"456",block]];
 *
 * @param selectorName 方法名称
 * @param objects 参数
 *
 * @return 返回一个id对象
 */
- (id)callFunctionWithSelectorName:(NSString *)selectorName withObjects:(NSArray *)objects;

@end

