# UIRouterSDKDemo
控制器解耦，当A控制器跳转到B控制器的时候无需引入B，SDK满足向下传值和向上传值的双向传值

# Requirements

使用的时候需要引入#import <UBTVCRouter/UBTVCRouter.h>头文件

所有需要跳转的控制器必须继承自UBTRouterViewController

如果采用配置的方式，需要有一个配置文件UBTRouterManagerVCConfigure.plist

具体使用方式可参考Demo

# Usage

方式一：映射的方式
    
    UIImage *image = [[UIImage alloc] init];
    UIViewController *testVC = [[UIViewController alloc] init];
    UBTModel *model = [[UBTModel alloc] init];
    model.name = @"chacha";

    NSDictionary *params = @{@"string":@"参数一", @"image":image, @"vc":testVC, @"model":model};

    [UBTRouterManager pushWithTarget:self
                                 key:Second
                          withParams:params
                             handler:^(UBTRouterBlockParam *routerBlockParam) {

                                 NSLog(@"回调回来的数据:%@",routerBlockParam.object);
    }];
    
方式二：传入类名的方式
     
     UIImage *image = [[UIImage alloc] init];
     UIViewController *testVC = [[UIViewController alloc] init];
     UBTModel *model = [[UBTModel alloc] init];
     model.name = @"chacha";
     
     NSDictionary *params = @{@"string":@"参数一", @"image":image, @"vc":testVC, @"model":model};
     
     [UBTRouterManager pushWithTarget:self
                          toClassName:@"FirstViewController"
                           withParams:params
                              handler:^(UBTRouterBlockParam *routerBlockParam) {
     
                                  NSLog(@"回调回来的数据:%@",routerBlockParam.object);
     }];

