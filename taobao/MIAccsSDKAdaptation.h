//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, TBAccsManager;

@interface MIAccsSDKAdaptation : NSObject
{
    TBAccsManager *_defaultAccsManager;
    NSData *_deviceToken;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSData *deviceToken; // @synthesize deviceToken=_deviceToken;
- (void).cxx_destruct;
- (void)notificationUnbindPushCenter:(id)arg1;
- (void)unbindPushCenter;
- (void)notificationBindPushCenter:(id)arg1;
- (void)bindPushCenter;
- (void)bindApp;
- (void)bindAppWithAppleToken:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2;
- (void)startAccs;
- (id)init;

@end

