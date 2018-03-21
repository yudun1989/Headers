//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FalconIDCardDetect : NSObject
{
}

+ (_Bool)IsBackResultEmptyFal;
+ (_Bool)IsFrontResultEmptyFal;
+ (id)GetResultFal;
+ (long long)GetCardTypeFal;
+ (_Bool)DoImageBCRFal;
+ (id)convertBitmapRGBA8ToUIImage:(char *)arg1 withWidth:(int)arg2 withHeight:(int)arg3;
+ (int)GetExpLevelFal;
+ (_Bool)IsPhotoValidNewFalEx:(char *)arg1 width:(long long)arg2 height:(long long)arg3 rect:(struct CGRect)arg4;
+ (_Bool)IsTempPhotoValidNewFalEx:(char *)arg1 width:(long long)arg2 height:(long long)arg3 rect:(struct CGRect)arg4;
+ (void)SetAlgParaFal:(int)arg1 ExposureThreshold:(int)arg2;
+ (_Bool)IsVideoValidFal:(char *)arg1 width:(long long)arg2 height:(long long)arg3;
+ (_Bool)InitOcrFalWithPath:(id)arg1;
+ (long long)IsPhotoValidZMEx:(char *)arg1 width:(long long)arg2 height:(long long)arg3 ndesiretype:(long long)arg4;
+ (long long)IsPhotoValidZM:(char *)arg1 width:(long long)arg2 height:(long long)arg3 ndesiretype:(long long)arg4;
+ (_Bool)IsVideoValidZM:(char *)arg1 width:(long long)arg2 height:(long long)arg3 ndesiretype:(long long)arg4;
+ (_Bool)InitLocalOcrZM;
+ (int)getLargeImg;
+ (int)getBlur;
+ (int)isColorImg;
+ (id)checkIDCardCommon:(char *)arg1 width:(long long)arg2 height:(long long)arg3;
+ (id)checkIDCardZJB:(char *)arg1 width:(long long)arg2 height:(long long)arg3 isPortrait:(_Bool)arg4;
+ (_Bool)ReleaseOcrZJB;
+ (id)checkIDCardZJB966:(char *)arg1 width:(long long)arg2 height:(long long)arg3 isPortrait:(_Bool)arg4;
+ (_Bool)InitOcrZJB966:(char *)arg1;
+ (_Bool)InitOcrZJB:(float)arg1 verso_side_sharpness:(float)arg2 face_side_stability:(float)arg3 verso_side_stability:(float)arg4;
+ (struct CIdcardCheck *)getIDCardEngineZJB;
+ (struct IdCardEngine *)getIDCardEngine;

@end

