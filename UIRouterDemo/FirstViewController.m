//
//  FirstViewController.m
//  UBTUIRouterTool
//
//  Created by zhazha on 2019/4/29.
//  Copyright © 2019 zhazha. All rights reserved.
//

#import "FirstViewController.h"

@interface FirstViewController ()

@end

@implementation FirstViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor redColor];
    
   
    NSLog(@"属性self.testString==%@",self.testString);
    
    NSLog(@"属性self.model==%@",self.model.name);
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
}

- (void)test:(NSString*)d nd:(NSString*)str2 completion:(UBTRouterBlock)completion {
    NSLog(@"%s 参数1= %@ 参数2=%@", __FUNCTION__, d, str2);
    UBTRouterBlockParam *value = [UBTRouterBlockParam new];
    value.object = @"test";
    completion(value);
}

- (NSString *)testFunction:(NSString *)param1 param2:(nonnull NSString *)param2 {
    NSLog(@"%s    param1=%@, param2=%@", __FUNCTION__, param1,param2);
    
    return @"呼叫我干嘛";
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    if (self.routerBlockTest) {
        UBTRouterBlockParam *value = [UBTRouterBlockParam new];
        value.object = @"我已经死了";
        self.routerBlockTest(value);
    }
    [self.navigationController dismissViewControllerAnimated:YES completion:nil];
}

@end
