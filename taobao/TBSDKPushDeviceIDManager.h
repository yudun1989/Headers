//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSRecursiveLock, NSString;

@interface TBSDKPushDeviceIDManager : NSObject
{
    NSRecursiveLock *_lock;
    NSString *_deviceID;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (id)getDateKey;
- (id)checkCreateAndRegisterDeviceID;
- (id)createAndRegisterDeviceID;
- (id)init;

@end

