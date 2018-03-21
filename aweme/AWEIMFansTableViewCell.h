//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "AWEUserMessage-Protocol.h"

@class AWEIMNotificationModel, CAShapeLayer, NSString, UIButton, UIImageView, UILabel, UIView;

@interface AWEIMFansTableViewCell : UITableViewCell <AWEUserMessage>
{
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_tipLabel;
    UILabel *_timeLabel;
    UIButton *_followBtn;
    UIView *_sepView;
    CAShapeLayer *_dotLayer;
    AWEIMNotificationModel *_model;
}

+ (id)identifier;
@property(retain, nonatomic) AWEIMNotificationModel *model; // @synthesize model=_model;
@property(retain, nonatomic) CAShapeLayer *dotLayer; // @synthesize dotLayer=_dotLayer;
@property(retain, nonatomic) UIView *sepView; // @synthesize sepView=_sepView;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setIsUnreadView:(_Bool)arg1;
- (void)_refreshFollowBtnUI;
- (void)_refreshUI;
- (void)followBtnClicked:(id)arg1;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)resetUnreadView;
- (void)configWithModel:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

