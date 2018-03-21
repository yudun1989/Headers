//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/AvatarServiceDelegate-Protocol.h>
#import <QQMainProject/TUStageRenderer-Protocol.h>

@class NSString, TUKeyNameModel, UIImage, UIImageView, UILabel;

@interface QQAVAvatarView : UIView <AvatarServiceDelegate, TUStageRenderer>
{
    UILabel *_nameLabel;
    UIImageView *_avatar;
    UIImageView *_avatarShadow;
    UIView *_avatarMasterMark;
    UILabel *_avatarMasterLabel;
    UIView *_vImgContainer;
    UIImageView *_vImages[4];
    struct CGSize _indicatorSize;
    long long _statusSaved;
    double _spacing;
    _Bool _enableKVOAvatar;
    _Bool _isFlipped;
    _Bool _isShown;
    UIImage *_imgToShow;
    _Bool _isSelf;
    _Bool _isInMaskView;
    _Bool _isBigPic;
    _Bool _isCommotion;
    _Bool _isShowName;
    _Bool _isMaster;
    TUKeyNameModel *_knm;
}

@property(readonly, retain, nonatomic) UIImageView *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) _Bool enableKVOAvatar; // @synthesize enableKVOAvatar=_enableKVOAvatar;
@property(nonatomic) _Bool isMaster; // @synthesize isMaster=_isMaster;
@property(nonatomic) _Bool isShowName; // @synthesize isShowName=_isShowName;
@property(nonatomic) _Bool isCommotion; // @synthesize isCommotion=_isCommotion;
@property(retain, nonatomic) TUKeyNameModel *knm; // @synthesize knm=_knm;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)updateImage:(id)arg1;
- (void)reloadImage;
- (void)loadDefaultImage:(id)arg1;
- (void)didShown;
- (void)flip:(id)arg1 name:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setNameStyle:(id)arg1 spacing:(double)arg2 fontsize:(double)arg3;
- (void)updateStatus:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateAccessibility;
- (void)setSelfNameWhite;
- (void)setSelfNameColorBlue;
- (void)setIsMaster:(_Bool)arg1 isInMaskView:(_Bool)arg2;
- (void)setAvatarNeedUpdate;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)relayoutContent;
- (struct CGRect)rectForIndicator;
- (struct CGRect)rectForSomeBodySpeaking;
- (struct CGRect)rectForStatus;
- (void)relayoutMasterMark;
- (void)setShadowImageHidden;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

