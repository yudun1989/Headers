//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (KSRedPacket)
+ (_Bool)ks_redPacketSynchronized;
+ (void)ks_redPacketSyncTimeWithServerDate:(id)arg1;
+ (id)ks_redPacketServerDate;
+ (void)ks_redPacketSyncTime;
- (id)ks_redPacketDateComponentsWithMinuteMargin:(long long)arg1;
- (id)ks_redPacketOpenTimeWithMinuteMargin:(long long)arg1;
@end

