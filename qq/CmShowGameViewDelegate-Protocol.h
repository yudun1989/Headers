//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class CmShowGameView, NSDictionary;

@protocol CmShowGameViewDelegate <NSObject>

@optional
- (void)cmShowGameViewOpenFriendSelectedVCWith:(NSDictionary *)arg1 selectType:(int)arg2;
- (void)cmShowGameViewOpenWebViewWithoutUrl:(CmShowGameView *)arg1 param:(NSDictionary *)arg2;
- (void)cmShowGameViewClose:(CmShowGameView *)arg1;
- (void)cmShowGameViewPackUp:(CmShowGameView *)arg1;
@end

