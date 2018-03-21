//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QQAvatarView, QQCondFitUserModel, UIImageView, UILabel;

@interface QQCondFitUserView : UIView
{
    UILabel *_nicknameLabel;
    UILabel *_uinLabel;
    UIImageView *_sexView;
    UILabel *_sexAgeLabel;
    UILabel *_locationLabel;
    UIImageView *_sexAndAgeView;
    _Bool _handleTouch;
    UIImageView *_iconView;
    QQCondFitUserModel *_model;
    QQAvatarView *_headImgView;
    _Bool _forSearchOpt;
    _Bool _highlighted;
}

@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool forSearchOpt; // @synthesize forSearchOpt=_forSearchOpt;
- (void).cxx_destruct;
- (void)highlightNick:(id)arg1 forLable:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setData:(id)arg1;
- (void)layoutSubviews;
- (void)initData;
- (id)initWithFlagForSearchOpt;
- (id)init;

@end

