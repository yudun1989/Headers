//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRCommonUserStructModel, FRThreadFooterDiggManager, NSDictionary;

@protocol FRThreadFooterDiggDelegate <NSObject>
- (NSDictionary *)fr_diggManagerTrackDic:(FRThreadFooterDiggManager *)arg1;
- (void)fr_diggManagerScrollToDiggRegion:(FRThreadFooterDiggManager *)arg1;
- (long long)fr_diggManagerOriginDiggCount:(FRThreadFooterDiggManager *)arg1;
- (void)fr_diggManager:(FRThreadFooterDiggManager *)arg1 emptyViewTappedType:(long long)arg2;
- (void)fr_diggManager:(FRThreadFooterDiggManager *)arg1 avatarTappedWithDiggUsertModel:(FRCommonUserStructModel *)arg2;

@optional
- (void)fr_diggManager:(FRThreadFooterDiggManager *)arg1 scrollWithOffset:(struct CGPoint)arg2;
@end

