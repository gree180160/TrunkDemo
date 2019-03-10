//
//  ViewController.m
//  OCBlock
//
//  Created by 17041197 on 2019/1/3.
//  Copyright © 2019 sn. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
@property (nonatomic, copy) void(^oneBlock)(void);
@property (nonatomic, copy) void(^addObjectBlock)(NSObject *obj);

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self func1];
    self.oneBlock();
    
    [self func2];
    self.addObjectBlock([[NSObject alloc]init]);
    self.addObjectBlock([[NSObject alloc]init]);
    self.addObjectBlock([[NSObject alloc]init]);
    
    [self func3];
}

- (void)func1 {
    int number = 1;
    self.oneBlock = ^(){NSLog(@"number is :%d", number);};
    number = 2;
}

- (void)func2 {
    NSMutableArray *mulArr = [[NSMutableArray alloc]init];
    self.addObjectBlock = ^(NSObject *obj){[mulArr addObject:obj]; NSLog(@"arr count is :%ld", mulArr.count);};
    
}

- (void)func3 {
    __block int number = 100;
    void (^block3)(void) = ^() {NSLog(@"func3 number is :%d",number); number = 200;};
    number = 300;
    block3();
    NSLog(@"after all number is :%d", number);
}

@end
