//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GSAppCenter : NSObject
{
}

+ (id)appCenter;
- (void)markUserHasChosenMode;
- (id)listStatus;
- (void)requestDefaultRules:(CDUnknownBlockType)arg1;
- (void)handleWhiteRules;
- (void)handleBlackRulesWith:(CDUnknownBlockType)arg1;
- (void)resetUserUpgradeFlag;
- (_Bool)needToDowngradeToNormalMode;
- (void)loginFinish:(id)arg1;
- (void)fatchStageFromOpenPlatform:(id)arg1;
- (id)init;

@end

