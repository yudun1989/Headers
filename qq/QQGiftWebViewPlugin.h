//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewPluginBase.h>

@interface QQGiftWebViewPlugin : QQWebViewPluginBase
{
    _Bool _isWerewolf;
    _Bool _isNearbyVideoGift;
}

@property(nonatomic) _Bool isNearbyVideoGift; // @synthesize isNearbyVideoGift=_isNearbyVideoGift;
@property(nonatomic) _Bool isWerewolf; // @synthesize isWerewolf=_isWerewolf;
- (void)dealloc;
- (_Bool)handleEvent:(int)arg1 userInfo:(id)arg2;
- (_Bool)handleJsBridgeRequest_NearbyTroopsPlugin_giftAnimation:(id)arg1;
- (void)setWebViewOwner:(id)arg1;

@end

