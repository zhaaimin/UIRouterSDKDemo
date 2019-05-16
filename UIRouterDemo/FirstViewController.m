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
    
    NSDictionary *params = [self getParams];
   
    NSLog(@"====%@",params);
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
     
     UBTRouterBlockParam *value = [UBTRouterBlockParam new];
     value.object = @"我已经死了";
     self.routerBlock(value);
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    [self.navigationController dismissViewControllerAnimated:YES completion:nil];
}

@end
