//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol TBSVideoInteractiveViewHelperDelegate <NSObject>
- (void)reportVideo:(NSString *)arg1;
- (void)showGoodListFrom:(NSString *)arg1;
- (NSNumber *)likeBtnClicked:(NSNumber *)arg1;
- (void)shareBtnClickedFrom:(NSString *)arg1;
- (void)goShopItemBtmClickedFrom:(NSString *)arg1;

@optional
- (void)sendDanmakuBtnClicked;
@end

