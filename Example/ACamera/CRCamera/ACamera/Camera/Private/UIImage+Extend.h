//
//  UIImage+Extend.h
//  BankCard
//
//  Created by XAYQ-FanXL on 16/7/8.
//  Copyright © 2016年 AN. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CRCameraScanObjct;
@interface UIImage (Extend)

+ (UIImage *)getImageStream:(CVImageBufferRef)imageBuffer;
+ (UIImage *)getSubImage:(CGRect)rect inImage:(UIImage*)image;

- (CRCameraScanObjct *)getIDCard;
- (CRCameraScanObjct *)getBankCard;
- (CRCameraScanObjct *)getQRCode;

@end
