//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface APVALogger : NSObject
{
}

+ (void)logStartRequest:(id)arg1;
+ (void)logRecordError:(id)arg1;
+ (void)logRecordTooShort;
+ (void)logClickTooMuch;
+ (void)logJump:(id)arg1 type:(id)arg2 appName:(id)arg3;
+ (void)logRecordCancel;
+ (void)logHelpButtonClicked;
+ (void)logCloseButtonClicked;
+ (void)logRecordButtonReleased;
+ (void)logRecordButtonClicked;
+ (void)logEnterVoiceAssist:(id)arg1;

@end
