//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSWithdrawBind-Protocol.h"

@class NSString;

@interface KSWithdrawAlipayBind : NSObject <KSWithdrawBind>
{
}

- (id)_bindTaskWithMobileToken:(id)arg1 oauthParam:(id)arg2;
- (id)_oauthTaskWithInfo:(id)arg1;
- (id)_fetchOauthInfoTask;
- (void)bindWithMobileToken:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

