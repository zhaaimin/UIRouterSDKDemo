//
//  UBTRouterManager.h
//  UBTUIRouterTool
//
//  Created by zhazha on 2019/4/29.
//  Copyright © 2019 zhazha. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UBTRouterViewController.h"


@interface UBTRouterManager : NSObject

/*!
 * @brief 使用push的方式进入到一个新的页面
 *
 * @discussion 当不需要携带参数带新的控制器的时候使用改方法
 *
 * @param target 当前绑定的控制器，一般传self
 * @param key    需要呈现的新的控制器
 *
 * @return 返回一个值标识当前是否push成功
 */
+ (BOOL)pushWithTarget:(id)target
                   key:(NSString *)key;

/*!
 * @brief 使用push的方式进入到一个新的页面，同时携带相关参数
 *
 * @discussion 当需要向下传递参数给新的控制器的时候使用改方法，传递的参数可以是任意类型，如果当前需要传多个参数，那么可以使用一个集合即可
 *
 * @param target 当前绑定的控制器，一般传self
 * @param key    配置的新的页面所配置的key
 * @param params 向下传递的数据
 *
 * @return 返回一个值标识当前是否push成功
 */
+ (BOOL)pushWithTarget:(id)target
                   key:(NSString *)key
            withParams:(id)params;

/*!
 * @brief 使用push的方式进入到一个新的页面
 *
 * @discussion 当需要携带参数带新的控制器的时候使用改方法，传递的参数可以是任意类型，如果当前需要传多个参数，那么可以使用一个集合即可。回调方法传回新的控制器向上传递的数据，如果需要向上传递数据，使用该方法
 *
 * @param target 当前绑定的控制器，一般传self
 * @param key    配置的新的页面所配置的key
 * @param params 向下传递的数据
 * @param hanler 回调向上传递的参数
 *
 * @return 返回一个值标识当前是否push成功
 */
+ (BOOL)pushWithTarget:(id)target
                   key:(NSString *)key
            withParams:(id)params
               handler:(UBTRouterBlock)hanler;

/*!
 * @brief 使用present的方式进入到一个新的页面
 *
 * @discussion 当不需要携带参数带新的控制器的时候使用改方法
 *
 * @param target 当前绑定的控制器，一般传self
 * @param key    需要呈现的新的控制器
 * @param navigationName 导航栏
 *
 * @return 返回一个值标识当前是否present成功
 */
+ (BOOL)presentWithTarget:(id)target
                      key:(NSString *)key
           navigationName:(NSString *)navigationName;

/*!
 * @brief 使用present的方式进入到一个新的页面，同时携带相关参数
 *
 * @discussion 当需要向下传递参数给新的控制器的时候使用改方法，传递的参数可以是任意类型，如果当前需要传多个参数，那么可以使用一个集合即可
 *
 * @param target 当前绑定的控制器，一般传self
 * @param key    配置的新的页面所配置的key
 * @param params 向下传递的数据
 * @param navigationName 导航栏
 *
 * @return 返回一个值标识当前是否present成功
 */
+ (BOOL)presentWithTarget:(id)target
                      key:(NSString *)key
               withParams:(id)params
           navigationName:(NSString *)navigationName;

/*!
 * @brief 使用present的方式进入到一个新的页面
 *
 * @discussion 当需要携带参数带新的控制器的时候使用改方法，传递的参数可以是任意类型，如果当前需要传多个参数，那么可以使用一个集合即可。回调方法传回新的控制器向上传递的数据，如果需要向上传递数据，使用该方法
 *
 * @param target 当前绑定的控制器，一般传self
 * @param key    配置的新的页面所配置的key
 * @param params 向下传递的数据
 * @param hanler 回调向上传递的参数
 * @param navigationName 导航栏
 *
 * @return 返回一个值标识当前是否present成功
 */
+ (BOOL)presentWithTarget:(id)target
                      key:(NSString *)key
               withParams:(id)params
           navigationName:(NSString *)navigationName
                  handler:(UBTRouterBlock)hanler;

/*!
 * @brief 使用push的方式进入到一个新的页面
 *
 * @discussion 当不需要携带参数带新的控制器的时候使用改方法
 *
 * @param target 当前绑定的控制器，一般传self
 * @param className 需要呈现的新的控制器
 *
 * @return 返回一个值标识当前是否push成功
 */
+ (BOOL)pushWithTarget:(id)target
           toClassName:(NSString *)className;

/*!
 * @brief 使用push的方式进入到一个新的页面，同时携带相关参数
 *
 * @discussion 当需要向下传递参数给新的控制器的时候使用改方法，传递的参数可以是任意类型，如果当前需要传多个参数，那么可以使用一个集合即可
 *
 * @param target 当前绑定的控制器，一般传self
 * @param className 需要呈现的新的控制器
 * @param params 向下传递的数据
 *
 * @return 返回一个值标识当前是否push成功
 */
+ (BOOL)pushWithTarget:(id)target
           toClassName:(NSString *)className
            withParams:(id)params;

/*!
 * @brief 使用push的方式进入到一个新的页面
 *
 * @discussion 当需要携带参数带新的控制器的时候使用改方法，传递的参数可以是任意类型，如果当前需要传多个参数，那么可以使用一个集合即可。回调方法传回新的控制器向上传递的数据，r如果需要向上传递数据，使用该方法
 *
 * @param target 当前绑定的控制器，一般传self
 * @param className 需要呈现的新的控制器
 * @param params 向下传递的数据
 * @param hanler 回调向上传递的参数
 *
 * @return 返回一个值标识当前是否push成功
 */
+ (BOOL)pushWithTarget:(id)target
           toClassName:(NSString *)className
            withParams:(id)params
               handler:(UBTRouterBlock)hanler;

/*!
 * @brief 使用present的方式进入到一个新的页面
 *
 * @discussion 当不需要携带参数带新的控制器的时候使用改方法
 *
 * @param target 当前绑定的控制器，一般传self
 * @param className 需要呈现的新的控制器
 * @param navigationName 导航栏
 *
 * @return 返回一个值标识当前是否present成功
 */
+ (BOOL)presentWithTarget:(id)target
              toClassName:(NSString *)className
           navigationName:(NSString *)navigationName;

/*!
 * @brief 使用present的方式进入到一个新的页面，同时携带相关参数
 *
 * @discussion 当需要向下传递参数给新的控制器的时候使用改方法，传递的参数可以是任意类型，如果当前需要传多个参数，那么可以使用一个集合即可
 *
 * @param target 当前绑定的控制器，一般传self
 * @param className 需要呈现的新的控制器
 * @param params 向下传递的数据
 * @param navigationName 导航栏
 *
 * @return 返回一个值标识当前是否present成功
 */
+ (BOOL)presentWithTarget:(id)target
              toClassName:(NSString *)className
               withParams:(id)params
           navigationName:(NSString *)navigationName;

/*!
 * @brief 使用present的方式进入到一个新的页面
 *
 * @discussion 当需要携带参数带新的控制器的时候使用改方法，传递的参数可以是任意类型，如果当前需要传多个参数，那么可以使用一个集合即可。回调方法传回新的控制器向上传递的数据，r如果需要向上传递数据，使用该方法
 *
 * @param target 当前绑定的控制器，一般传self
 * @param className 需要呈现的新的控制器
 * @param params 向下传递的数据
 * @param navigationName 导航栏
 * @param hanler 回调向上传递的参数
 *
 * @return 返回一个值标识当前是否present成功
 */
+ (BOOL)presentWithTarget:(id)target
              toClassName:(NSString *)className
               withParams:(id)params
           navigationName:(NSString *)navigationName
                  handler:(UBTRouterBlock)hanler;

@end

