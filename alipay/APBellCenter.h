//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface APBellCenter : NSObject
{
}

+ (void)playSystemVibrate;
+ (void)playSystemBell;
+ (void)playSystemAlert;
+ (_Bool)isVibrationEnabled;
+ (_Bool)isSoundEnabled;
+ (void)closeVibration;
+ (void)openVibration;
+ (void)closeSound;
+ (void)openSound;

@end

