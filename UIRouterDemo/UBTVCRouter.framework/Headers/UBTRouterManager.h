//
//  UBTRouterManager.h
//  UBTUIRouterTool
//
//  Created by zhazha on 2019/4/29.
//  Copyright © 2019 zhazha. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import <objc/runtime.h>
#import <objc/message.h>

static id (*custom_msgSend)(id, SEL, ...) = (id (*)(id, SEL, ...))objc_msgSend;

@interface UBTRouterManager : NSObject

/*!
 * @brief 获取一个UBTRouterManager对象
 *
 * @discussion 实际上返回的对象是className所对应的类的相关对象
 *
 * @param className 需要获取的对象所对应的类名
 * @param error 错误信息
 *
 * @return 返回一个UBTRouterManager对象
 */

+ (UBTRouterManager *)instanceWithClassName:(NSString *)className
                                      error:(NSError **)error;

/*!
 * @brief 使用push的方式进入到一个新的页面
 *
 * @discussion 当不需要携带参数带新的控制器的时候使用改方法
 *
 * @param target 当前绑定的控制器，一般传self
 * @param key    需要呈现的新的控制器
 *
 * @return 返回一个UBTRouterManager对象
 */
+ (UBTRouterManager *)pushWithTarget:(id)target
                                 key:(NSString *)key;

/*!
 * @brief 使用push的方式进入到一个新的页面
 *
 * @discussion 当不需要携带参数带新的控制器的时候使用改方法
 *
 * @param target 当前绑定的控制器，一般传self
 * @param className 需要呈现的新的控制器
 *
 * @return 返回一个UBTRouterManager对象
 */
+ (UBTRouterManager *)pushWithTarget:(id)target
                         toClassName:(NSString *)className;

/*!
 * @brief 使用present的方式进入到一个新的页面
 *
 * @discussion 当不需要携带参数带新的控制器的时候使用改方法
 *
 * @param target 当前绑定的控制器，一般传self
 * @param key    需要呈现的新的控制器
 * @param navigationName 导航栏
 *
 * @return 返回一个UBTRouterManager对象
 */
+ (UBTRouterManager *)presentWithTarget:(id)target
                                    key:(NSString *)key
                         navigationName:(NSString *)navigationName;



/*!
 * @brief 使用present的方式进入到一个新的页面
 *
 * @discussion 当不需要携带参数带新的控制器的时候使用改方法
 *
 * @param target 当前绑定的控制器，一般传self
 * @param className 需要呈现的新的控制器
 * @param navigationName 导航栏
 *
 * @return 返回一个UBTRouterManager对象
 */
+ (UBTRouterManager *)presentWithTarget:(id)target
                            toClassName:(NSString *)className
                         navigationName:(NSString *)navigationName;

/*!
 * @brief 当前
 *
 * @discussion 当不需要携带参数带新的控制器的时候使用改方法
 *
 * @param target 当前绑定的控制器，一般传self
 * @param className 需要呈现的新的控制器
 * @param frame 子视图的size
 *
 * @return 返回一个UBTRouterManager对象
 */
+ (UBTRouterManager *)addChildViewControllerWithTarget:(id)target
                                             className:(NSString *)className
                                                 frame:(CGRect)frame;


@end

