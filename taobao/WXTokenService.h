//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXContextBindingObject.h"

#import "IWXTokenService-Protocol.h"

@class NSString;

@interface WXTokenService : WXContextBindingObject <IWXTokenService>
{
    NSString *ssoToken;
}

@property(copy, nonatomic) NSString *ssoToken; // @synthesize ssoToken;
- (void).cxx_destruct;
- (_Bool)isNeedRequestSSOToken;
- (void)fetchTokenWithType:(int)arg1 data:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)fetchTokenWithType:(int)arg1 data:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

