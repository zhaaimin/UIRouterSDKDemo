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
//#import "FirstViewController.h"
//#import "SecondViewController.h"
static NSString *First = @"Phone";
static NSString *Second = @"SB";
static NSString *Third = @"Third";

@interface ViewController ()

@property (nonatomic, strong) UBTRouterManager *routerVC;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (IBAction)keyPushAction:(id)sender {
    self.routerVC = [UBTRouterManager pushWithTarget:self key:Second];
}

- (IBAction)namePushAction:(id)sender {
    self.routerVC = [UBTRouterManager pushWithTarget:self toClassName:@"FirstViewController"];
    UBTRouterBlock block = ^(UBTRouterBlockParam *routerBlockParam) {
        NSLog(@"namePushAction routerBlockTest回调=%@",routerBlockParam.object);
    };
    
    self.routerVC.setValueForKey(block, @"routerBlockTest");
}

- (IBAction)presentAction:(id)sender {
    self.routerVC = [UBTRouterManager presentWithTarget:self key:First navigationName:@"UINavigationController"];
    UBTRouterBlock block = ^(UBTRouterBlockParam *routerBlockParam) {
        NSLog(@"presentAction routerBlockTest回调=%@",routerBlockParam.object);
    };
    
    SafeSetValue(self.routerVC, block, @"routerBlockTest")
}

- (IBAction)addAction:(id)sender {
    UBTModel *model = [[UBTModel alloc] init];
    model.name = @"chacha";
    UBTRouterManager *vc = [UBTRouterManager addChildViewControllerWithTarget:self
                                                                    className:@"FirstViewController"
                                                                        frame:CGRectMake(0, 500, 375, 200)];
    
    vc.setValueForKey(@"我是渣渣",@"testString")
    .setValueForKey(model,@"model")
    .setValueForKey(@"123",@"tfffdf");
    
    NSLog(@"获取到的属性值=%@",vc.getValueForKey(@"testString"));

    UBTRouterBlock block = ^(UBTRouterBlockParam *routerBlockParam) {
        NSLog(@"routerBlockTest回调=%@",routerBlockParam.object);
    };
    
    vc.setValueForKey(block, @"routerBlockTest");
    
    UIViewController *tVC = (UIViewController *)vc;
    [self addChildViewController:tVC];
    
    tVC.view.frame = CGRectMake(0, 500, 375, 200);
    [self.view addSubview:tVC.view];
    
    self.routerVC = tVC;
}

- (IBAction)testResultAction:(id)sender {
//    [self.routerVC test:@"参数一" nd:@"参数二" completion:^(UBTRouterBlockParam *routerBlockParam) {
//        NSLog(@"testResultAction回调=%@",routerBlockParam.object);
//    }];
//    
    UBTRouterBlock block = ^(UBTRouterBlockParam *routerBlockParam) {
        NSLog(@"callFunctionWithSelectorName routerBlockTest回调=%@",routerBlockParam.object);
    };
    [self.routerVC callFunctionWithSelectorName:@"test:nd:completion:" withObjects:@[@"1234",@"456",block]];
}

@end
