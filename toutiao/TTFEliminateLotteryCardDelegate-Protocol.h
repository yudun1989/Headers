//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TTFEliminateLotteryCard;

@protocol TTFEliminateLotteryCardDelegate <NSObject>
- (void)eliminateLotteryCard:(TTFEliminateLotteryCard *)arg1 didShareToDest:(unsigned long long)arg2;
- (void)eliminateLotteryCard:(TTFEliminateLotteryCard *)arg1 didClickInviteButton:(id)arg2;
- (void)eliminateLotteryCard:(TTFEliminateLotteryCard *)arg1 didClickCloseButton:(id)arg2;
@end

