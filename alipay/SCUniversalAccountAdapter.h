//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "aluUIAppearanceDelegate-Protocol.h"

@class NSString;

@interface SCUniversalAccountAdapter : NSObject <aluUIAppearanceDelegate>
{
}

+ (id)sharedInstance;
- (id)userInfoFromLoginResult:(id)arg1 taobaoLoginId:(id)arg2 loginType:(unsigned long long)arg3;
- (id)walletLoginResultFromUniversalAccountJsonStr:(id)arg1;
- (_Bool)handleLoginResult:(id)arg1 loginView:(id)arg2 extraInfo:(id)arg3;
- (void)tryCleanDataForTidMergeAsync;
- (void)loseAutoLoginEnabledAndLoginState:(id)arg1;
- (void)loseAutoLoginEnabled:(id)arg1;
- (void)loseLoginState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

