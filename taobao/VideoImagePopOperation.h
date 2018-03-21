//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BootImagePopOperation.h"

@class NSTimer, NSURL, TBMPBPlayerView, UIButton, UIImage, UIImageGIFView, UIImageView, UILabel;

@interface VideoImagePopOperation : BootImagePopOperation
{
    _Bool _isStartPlay;
    UIImage *_bgImage;
    NSURL *_videoURL;
    double _timeLeft;
    UIButton *_jumpButton;
    UILabel *_timeLeftLabel;
    UIImageView *_bootLogoImageView;
    UIImageGIFView *_bootImageView;
    TBMPBPlayerView *_videoView;
    NSTimer *_bootTimer;
}

@property(retain, nonatomic) NSTimer *bootTimer; // @synthesize bootTimer=_bootTimer;
@property(retain, nonatomic) TBMPBPlayerView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) UIImageGIFView *bootImageView; // @synthesize bootImageView=_bootImageView;
@property(retain, nonatomic) UIImageView *bootLogoImageView; // @synthesize bootLogoImageView=_bootLogoImageView;
@property(retain, nonatomic) UILabel *timeLeftLabel; // @synthesize timeLeftLabel=_timeLeftLabel;
@property(retain, nonatomic) UIButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(nonatomic) double timeLeft; // @synthesize timeLeft=_timeLeft;
@property(nonatomic) _Bool isStartPlay; // @synthesize isStartPlay=_isStartPlay;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage=_bgImage;
- (void).cxx_destruct;
- (id)computeLaunchImageName;
- (void)hideBootImageView:(id)arg1;
- (void)bootImageButtonClicked:(id)arg1;
- (void)refreshTimeLeftCounter;
- (void)jumpButtonDidClicked:(id)arg1;
- (_Bool)show;
- (void)dealloc;
- (id)init:(id)arg1 brandInfo:(id)arg2 image:(id)arg3 localVideoPath:(id)arg4 isColdStart:(_Bool)arg5;

@end

