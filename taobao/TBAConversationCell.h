//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TBAMessage, UIButton, UIImageView, UILabel, UITextView, UIView;

@interface TBAConversationCell : UITableViewCell
{
    UILabel *_userInputTextField;
    UIImageView *_dressImage;
    TBAMessage *_message;
    UIView *_feedList;
    UIButton *_actionCard;
    UILabel *_titleLB;
    UIImageView *_feedCover;
    UITextView *_contentTV;
    UILabel *_editLB;
}

@property(retain, nonatomic) UILabel *editLB; // @synthesize editLB=_editLB;
- (void).cxx_destruct;
- (void)resetEditMark:(id)arg1;
- (id)relatedContainer;
- (void)onActionCardClick:(id)arg1;
- (id)feedGenaration:(id)arg1;
- (void)onFeedClick:(id)arg1;
- (void)updateCell:(id)arg1 index:(long long)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

