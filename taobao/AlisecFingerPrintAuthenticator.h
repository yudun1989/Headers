//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AlisecFingerPrintAuthenticator : NSObject
{
}

+ (id)getFingerprintsHash;
+ (id)generateModel;
+ (void)verify:(id)arg1 callback:(CDUnknownBlockType)arg2 context:(id)arg3;
+ (void)verify:(id)arg1 reasonTitle:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (_Bool)isWellKnownTouchIdDeviceSince201505:(id)arg1;
+ (_Bool)doesLocalDeviceSupportTouchId;
+ (int)checkTouchIDStatus;
+ (_Bool)isTouchIDAvailable;

@end

