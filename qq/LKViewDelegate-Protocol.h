//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSDictionary, UIView;

@protocol LKViewDelegate <NSObject>
- (void)handleView:(UIView *)arg1 longPressAction:(long long)arg2 withParam:(NSDictionary *)arg3;
- (void)handleView:(UIView *)arg1 touchPoint:(struct CGPoint)arg2 touchBegan:(_Bool)arg3;
- (void)handleView:(UIView *)arg1 touchAction:(long long)arg2 withParam:(NSDictionary *)arg3;
@end

