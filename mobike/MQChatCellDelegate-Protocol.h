//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UITableViewCell;

@protocol MQChatCellDelegate <NSObject>
- (void)didTapMessageInCell:(UITableViewCell *)arg1;
- (void)didSelectMessageInCell:(UITableViewCell *)arg1 messageContent:(NSString *)arg2 selectedContent:(NSString *)arg3;
- (void)resendMessageInCell:(UITableViewCell *)arg1 resendData:(NSDictionary *)arg2;
- (void)showToastViewInCell:(UITableViewCell *)arg1 toastText:(NSString *)arg2;
@end

