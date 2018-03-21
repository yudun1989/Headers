//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, QQGroupRobotMemsAvatarView, QQVideoAnimationView, UIButton, UIImage, UIImageView;
@protocol QQGroupRobotAnimationViewDelegate;

@interface QQGroupRobotAnimationView : UIView
{
    UIImage *_iconImg;
    int _xo;
    NSString *_resID;
    NSArray *_memUins;
    UIImageView *_starImgView;
    QQVideoAnimationView *_animationView;
    UIButton *_closeBtn;
    QQGroupRobotMemsAvatarView *_memsAvatarView;
    id <QQGroupRobotAnimationViewDelegate> _delegate;
}

@property(nonatomic) id <QQGroupRobotAnimationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)willEnterBackGround;
- (void)dealloc;
- (void)stopAnimation;
- (void)playAnimation:(CDUnknownBlockType)arg1;
- (void)closeBtnClick:(id)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithResID:(id)arg1 withMemUin:(id)arg2;

// Remaining properties
@property(retain, nonatomic) QQVideoAnimationView *animationView; // @dynamic animationView;
@property(retain, nonatomic) UIButton *closeBtn; // @dynamic closeBtn;
@property(retain, nonatomic) UIImage *iconImg; // @dynamic iconImg;
@property(retain, nonatomic) NSArray *memUins; // @dynamic memUins;
@property(retain, nonatomic) QQGroupRobotMemsAvatarView *memsAvatarView; // @dynamic memsAvatarView;
@property(retain, nonatomic) NSString *resID; // @dynamic resID;
@property(retain, nonatomic) UIImageView *starImgView; // @dynamic starImgView;

@end

