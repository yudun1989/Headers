//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface TBShopEffectService : NSObject
{
    NSDictionary *_effectStrategyDic;
}

@property(retain, nonatomic) NSDictionary *effectStrategyDic; // @synthesize effectStrategyDic=_effectStrategyDic;
- (void).cxx_destruct;
- (void)effectOnView:(id)arg1 withEffects:(id)arg2;
- (void)effectOnView:(id)arg1 withEffect:(id)arg2;
- (id)findEffectViewOnView:(id)arg1 forEffect:(id)arg2;

@end

