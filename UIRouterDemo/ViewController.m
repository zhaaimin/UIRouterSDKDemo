//
//  ViewController.m
//  UBTUIRouterTool
//
//  Created by zhazha on 2019/4/29.
//  Copyright © 2019 zhazha. All rights reserved.
//

#import "ViewController.h"
#import <UBTVCRouter/UBTVCRouter.h>

#import "UBTModel.h"

static NSString *First = @"Phone";
static NSString *Second = @"SB";
static NSString *Third = @"Third";

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (IBAction)keyPushAction:(id)sender {
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
}

- (IBAction)namePushAction:(id)sender {
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
}

- (IBAction)presentAction:(id)sender {
    UIImage *image = [[UIImage alloc] init];
    UIViewController *testVC = [[UIViewController alloc] init];
    UBTModel *model = [[UBTModel alloc] init];
    model.name = @"chacha";
    
    NSDictionary *params = @{@"string":@"参数一", @"image":image, @"vc":testVC, @"model":model};
    [UBTRouterManager presentWithTarget:self
                                    key:First
                             withParams:params
                         navigationName:@"UINavigationController"
                                handler:^(UBTRouterBlockParam *routerBlockParam) {
        
                                    NSLog(@"回调回来的数据:%@",routerBlockParam.object);
    }];
}

@end
