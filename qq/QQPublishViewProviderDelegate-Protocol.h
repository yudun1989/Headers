//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol QQPublishViewProviderDelegate <NSObject>
- (int)getCurrentPostType;
- (void)showShortVideoCompositeFailPromptAlertView;
- (void)changeVideoCellState:(unsigned long long)arg1;
- (void)updatePublishViewWithContent:(NSDictionary *)arg1;
- (void)updatePublishInfo:(NSDictionary *)arg1;
- (void)didSelectAItem:(NSDictionary *)arg1;
- (void)topicShow:(NSString *)arg1;
- (void)workToDoBeforeDismissAndDismissSelf;
- (void)publishDone:(int)arg1 errorMsg:(NSString *)arg2;
@end

