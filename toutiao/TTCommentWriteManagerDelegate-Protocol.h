//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, TTCommentWriteManager, TTCommentWriteView;

@protocol TTCommentWriteManagerDelegate <NSObject>

@optional
- (_Bool)commentView:(TTCommentWriteView *)arg1 shouldCommitWithCommentWriteManager:(TTCommentWriteManager *)arg2;
- (void)commentView:(TTCommentWriteView *)arg1 sucessWithCommentWriteManager:(TTCommentWriteManager *)arg2 responsedData:(NSDictionary *)arg3;
- (void)commentView:(TTCommentWriteView *)arg1 cancelledWithCommentWriteManager:(TTCommentWriteManager *)arg2;
@end

