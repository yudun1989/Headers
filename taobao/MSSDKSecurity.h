//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MSSDKSecurity : NSObject
{
}

+ (id)sharedInstance;
- (void)queryAccountRiskWithRiskData:(id)arg1 accountRisk:(id)arg2 installStatus:(unsigned long long)arg3 callbakc:(CDUnknownBlockType)arg4;
- (void)queryTaobaoAccountRiskWithCallbackInternal:(CDUnknownBlockType)arg1;
- (void)queryTaobaoAccountRiskWithCallback:(CDUnknownBlockType)arg1;
- (void)reportRiskData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)checkRisk:(unsigned long long)arg1 username:(id)arg2 userId:(id)arg3 interval:(double)arg4 callback:(CDUnknownBlockType)arg5;

@end

