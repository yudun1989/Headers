//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "CAAnimationDelegate-Protocol.h"
#import "DWPlayerLifecycleProtocol-Protocol.h"

@class DWInstance, NSString, TBDWVideoCellModel, UIButton, UIImageView, UIView;
@protocol TBDWTNodViewActionProtocol, TBDWVideoTableViewCellDelegate;

@interface TBDWVideoTableViewCell : UITableViewCell <CAAnimationDelegate, DWPlayerLifecycleProtocol>
{
    UIView *_maskView;
    DWInstance *_videoInstance;
    id <TBDWVideoTableViewCellDelegate> _delegate;
    UIImageView *_backgroudImageView;
    UIView *_descriptionView;
    TBDWVideoCellModel *_model;
    UIButton *_playButton;
    id <TBDWTNodViewActionProtocol> _actionDelegate;
    NSString *_from;
    long long _maskReal;
    long long _maskOpetation;
    long long _maskWant;
    double _lastVideoTime;
}

+ (id)identifier;
@property(nonatomic) double lastVideoTime; // @synthesize lastVideoTime=_lastVideoTime;
@property(nonatomic) long long maskWant; // @synthesize maskWant=_maskWant;
@property(nonatomic) long long maskOpetation; // @synthesize maskOpetation=_maskOpetation;
@property(nonatomic) long long maskReal; // @synthesize maskReal=_maskReal;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(nonatomic) __weak id <TBDWTNodViewActionProtocol> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) TBDWVideoCellModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UIImageView *backgroudImageView; // @synthesize backgroudImageView=_backgroudImageView;
@property(nonatomic) __weak id <TBDWVideoTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DWInstance *videoInstance; // @synthesize videoInstance=_videoInstance;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void).cxx_destruct;
- (void)onVideoPlay;
- (void)onVideoNormalScreen;
- (void)onVideoComplete;
- (void)onVideoTimeChanged:(double)arg1;
- (void)onVideoTapToPause;
- (void)maskViewShow;
- (void)maskViewHide;
- (void)playButtonClicked:(id)arg1;
- (void)tapMaskView;
- (void)stopVideoIsCompleted:(_Bool)arg1;
- (void)playVideo;
- (void)setupInstance;
- (void)setupWithVideoCellModel:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

