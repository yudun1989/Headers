//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TTCommentWriteView;

@protocol TTCommentManagerProtocol <NSObject>
@property(nonatomic) __weak TTCommentWriteView *commentWriteView;
@property(retain, nonatomic) NSString *serviceID;
- (void)commentViewCancelPublish;
- (void)commentViewDismiss;
- (void)commentViewShow;
- (void)commentViewClickPublishButton;

@optional
- (void)commentViewClickRepostButton;
@end

