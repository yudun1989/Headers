//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWEAttributedLinkLabel, AWELiveBaseMessage, CAShapeLayer, UIImageView;

@interface AWELiveMessageListCellView : UITableViewCell
{
    AWELiveBaseMessage *_message;
    AWEAttributedLinkLabel *_messageLabel;
    CAShapeLayer *_messageShapeLayer;
    UIImageView *_avatarImageView;
}

+ (struct CGRect)sizeForData:(id)arg1 cellWidth:(double)arg2 attributedString:(id *)arg3;
+ (id)_defaultImage;
+ (id)getCellIdentifier:(id)arg1;
+ (_Bool)shouldShowAvatar:(id)arg1;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) CAShapeLayer *messageShapeLayer; // @synthesize messageShapeLayer=_messageShapeLayer;
@property(retain, nonatomic) AWEAttributedLinkLabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) AWELiveBaseMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)refreshWithMessage:(id)arg1;
- (void)layoutSubviews;
- (void)refreshAvatar;
- (void)openProfileCard;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
