//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "FeedBackMessageCellProtocol-Protocol.h"

@class NSString, UIImageView, UILabel, UIView;

@interface FeedBackMessageClientImageCell : UITableViewCell <FeedBackMessageCellProtocol>
{
    UIImageView *_backgroundImageView;
    UIImageView *_avatar;
    UILabel *_messageLabel;
    UILabel *_timeLabel;
    UIImageView *_feedbackImageView;
    UIView *_contentContainerView;
}

@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(nonatomic) __weak UIImageView *feedbackImageView; // @synthesize feedbackImageView=_feedbackImageView;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(nonatomic) __weak UIImageView *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)refreshWithMessageModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)buildSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

