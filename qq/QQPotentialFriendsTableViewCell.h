//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableString, NSString, QQAvatarView, QQRecommendedFriend, RichStateOneLineFastView, UIImageView, UILabel, UIView;

@interface QQPotentialFriendsTableViewCell : UITableViewCell
{
    QQAvatarView *_headerImageView;
    UILabel *_nameLabel;
    UIImageView *_sexAndAgeView;
    UIImageView *_sexView;
    UILabel *_ageLabel;
    UILabel *_mutualFriendLabel;
    RichStateOneLineFastView *_signatureLabel;
    UIImageView *_zoneImageView;
    UIView *_addButton;
    UIView *_backgroundView;
    NSString *_addButtonTitle;
    NSMutableString *_mutualFriendLabelText;
    QQRecommendedFriend *_friend;
    CDUnknownBlockType _addPotentialFriendButtonTapedCallBack;
}

- (void).cxx_destruct;
- (void)addButtonTaped:(id)arg1;
- (void)setAddPotentialFriendButtonTapedCallBack:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) QQRecommendedFriend *friend;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)createAddButtonWithTitle:(id)arg1;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

