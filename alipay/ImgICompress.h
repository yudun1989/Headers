//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ImgICompress : NSObject
{
}

+ (_Bool)isToDetectBarCode:(long long)arg1 height:(long long)arg2;
+ (long long)GetMaxWH;
+ (_Bool)isEnoughMemToDecodeImg:(long long)arg1 height:(long long)arg2;
+ (_Bool)checkiosDevice:(id)arg1;
+ (id)AutoImgComPressForHeadImg:(id)arg1 Quality:(long long)arg2;
+ (id)AutoImgComPress2:(id)arg1 Quality:(long long)arg2;
+ (id)AutoImgComPress:(id)arg1 Quality:(long long)arg2;
+ (id)scaleAndRotateImage:(id)arg1 andMax:(long long)arg2;
+ (id)scaleImage:(id)arg1 toScale:(float)arg2;
+ (long long)fileSizeAtPath:(id)arg1;
+ (id)GetComPressImgExFast:(id)arg1 Quality:(long long)arg2 LowQuality:(long long)arg3;
+ (id)GetComPressImgEx:(id)arg1 Quality:(long long)arg2;
+ (id)GetComPressImg:(id)arg1 Quality:(long long)arg2;
+ (long long)IsSuperWidthOrHeight:(long long)arg1 height:(long long)arg2;

@end

