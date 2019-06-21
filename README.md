# UIRouterSDKDemo
为控制器解耦提供解决方法，对于面向组件化开发提供一个基础的解决方案，控制器之间不需要引入相应的控制器文件

# Requirements

使用的时候需要引入#import <UBTVCRouter/UBTVCRouter.h>头文件

如果有需要跳转的控制器继承自UBTRouterViewController，UBTRouterViewController中已经设定了一定类似Block属性值，直接调用即可，无需额外的声明

如果采用配置的方式，需要有一个配置文件UBTRouterManagerVCConfigure.plist

具体使用方式可参考Demo

Framework中含有Category文件，所以在工程配置Other Linker Flags中配置一个-ObjC项
# Usage

方式一：映射的方式
    
    self.routerVC = [UBTRouterManager pushWithTarget:self key:Second];
    
方式二：传入类名的方式
     
     self.routerVC = [UBTRouterManager pushWithTarget:self toClassName:@"FirstViewController"];

 属性赋值：
 
 采用函数编程的方式给属性赋值：
 
     object.setValueForKey(@"我是渣渣",@"testString")
     .setValueForKey(model,@"model")
     
 需要判断object对象是否为nil，获采用另外的方式进行调用：
     
     UBTRouterBlock block = ^(UBTRouterBlockParam *routerBlockParam) {
         NSLog(@"presentAction routerBlockTest回调=%@",routerBlockParam.object);
     };
     
     SafeSetValue(self.routerVC, block, @"routerBlockTest")

 方法调用：
 
     UBTRouterBlock block = ^(UBTRouterBlockParam *routerBlockParam) {
         NSLog(@"callFunctionWithSelectorName routerBlockTest回调=%@",routerBlockParam.object);
     };
     [self.routerVC callFunctionWithSelectorName:@"test:nd:completion:" withObjects:@[@"1234",@"456",block]];
     
 除了采用统一的方法调用之外，可以定义一个Category来声明方法，此方案的缺点，需要针对于每一个所需要的方法都重新在Category中声明一遍

