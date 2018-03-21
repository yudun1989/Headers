//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSTableViewCell.h"

@class KSFollowEachOtherView, KSFunsFollowUser, NSNumber, UIButton, UIImageView, UILabel;
@protocol KSFunsFollowCellDelegate;

@interface KSFunsFollowCell : KSTableViewCell
{
    _Bool _fullLineStyle;
    int _funsOrFollow;
    KSFunsFollowUser *_funsFollowUser;
    unsigned long long _cellStatus;
    UIImageView *_userHeaderView;
    UIImageView *_vIcon;
    UILabel *_userNameLabel;
    UILabel *_userWordsLabel;
    UILabel *_sourceLabel;
    UIImageView *_sourceIcon;
    UIButton *_followBtn;
    UIButton *_rightButton;
    UIImageView *_line;
    NSNumber *_ownerId;
    UIButton *_blackListButton;
    UIButton *_deleteButton;
    KSFollowEachOtherView *_followEachOtherView;
}

@property(retain, nonatomic) KSFollowEachOtherView *followEachOtherView; // @synthesize followEachOtherView=_followEachOtherView;
@property(nonatomic) _Bool fullLineStyle; // @synthesize fullLineStyle=_fullLineStyle;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIButton *blackListButton; // @synthesize blackListButton=_blackListButton;
@property(nonatomic) int funsOrFollow; // @synthesize funsOrFollow=_funsOrFollow;
@property(retain, nonatomic) NSNumber *ownerId; // @synthesize ownerId=_ownerId;
@property(retain, nonatomic) UIImageView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UIImageView *sourceIcon; // @synthesize sourceIcon=_sourceIcon;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) UILabel *userWordsLabel; // @synthesize userWordsLabel=_userWordsLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *vIcon; // @synthesize vIcon=_vIcon;
@property(retain, nonatomic) UIImageView *userHeaderView; // @synthesize userHeaderView=_userHeaderView;
@property(nonatomic) unsigned long long cellStatus; // @synthesize cellStatus=_cellStatus;
@property(retain, nonatomic) KSFunsFollowUser *funsFollowUser; // @synthesize funsFollowUser=_funsFollowUser;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didTapRightButton:(id)arg1;
- (void)didTapFollowButton:(id)arg1;
- (id)cellRightUtilityButtons;
- (void)didReceiveFollowNotification:(id)arg1;
- (void)lazyLayout;
- (void)drawWithFunsFollowUser:(id)arg1 ownerId:(id)arg2 funsOrFollow:(int)arg3 fullLineStyle:(_Bool)arg4 cellStatus:(unsigned long long)arg5 showFollowEachOther:(_Bool)arg6;
- (void)drawWithFunsFollowUser:(id)arg1 ownerId:(id)arg2 funsOrFollow:(int)arg3 fullLineStyle:(_Bool)arg4;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(nonatomic) __weak id <KSFunsFollowCellDelegate> delegate; // @dynamic delegate;

@end

