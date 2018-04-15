//
//  YBImageBrowserProgressBar.h
//  YBImageBrowserDemo
//
//  Created by 杨少 on 2018/4/11.
//  Copyright © 2018年 杨波. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YBImageBrowserProgressBar : UIView

//0.0 - 1.0
@property (nonatomic, assign) CGFloat progress;

- (void)showLoadFailedGraphicsWithText:(NSString *)text;

@end