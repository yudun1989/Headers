//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSArray;

@protocol QQPAPhotoEditDelegate <NSObject>

@optional
- (NSArray *)getQQActivityViewTitles;
- (void)paShareWithSinaWeibo:(int)arg1;
- (void)paShareWithWeChatCircle:(int)arg1;
- (void)paShareWithWeChatFriend:(int)arg1;
- (void)paShareWithQZone:(int)arg1;
- (void)paShareWithFriend:(int)arg1;
@end

