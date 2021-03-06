//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QQAvatarView, QQRecommendedFriend, RichStateOneLineFastView, UIButton, UIImageView, UILabel;
@protocol CardViewDelegate;

@interface CardView : UIView
{
    double F_LeftMargin;
    UIButton *_btnBgClick;
    QQAvatarView *_headerImageView;
    UIButton *_addButton;
    UILabel *_title;
    UILabel *_nameLabel;
    UILabel *_mutualFriendLabel;
    UILabel *_addState;
    UIImageView *_sexAndAgeView;
    UIImageView *_sexView;
    UILabel *_ageLabel;
    RichStateOneLineFastView *_signatureLabel;
    id <CardViewDelegate> _delegate;
    QQRecommendedFriend *_dataFriend;
}

@property(retain, nonatomic) QQRecommendedFriend *dataFriend; // @synthesize dataFriend=_dataFriend;
@property(nonatomic) __weak id <CardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reloadAppearance;
- (void)updateColor;
- (void)headerImageViewTaped:(id)arg1;
- (void)addButtonTaped:(id)arg1;
- (void)removeButtonTaped:(id)arg1;
- (id)createAddButtonWithTitle:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

