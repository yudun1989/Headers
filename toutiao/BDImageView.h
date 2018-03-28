//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "BDAnimatedImagePlayerDelegate-Protocol.h"

@class BDAnimatedImagePlayer, BDImage, NSNumber, NSString, UIImage;
@protocol BDPlayGIFStrategy;

@interface BDImageView : UIImageView <BDAnimatedImagePlayerDelegate>
{
    _Bool _updateState;
    NSNumber *_curIndex;
    BDAnimatedImagePlayer *_player;
    _Bool _animateEnable;
    _Bool _infinityLoop;
    _Bool _frameCacheAutomatically;
    _Bool _cacheAllFrame;
    _Bool _autoPlayAnimatedImage;
    _Bool _isImageURLChanged;
    UIImage *_currentImage;
    BDImage *_animateImage;
    NSString *_currentWebURL;
    id <BDPlayGIFStrategy> _imageStrategy;
}

@property(retain, nonatomic) id <BDPlayGIFStrategy> imageStrategy; // @synthesize imageStrategy=_imageStrategy;
@property(nonatomic) _Bool isImageURLChanged; // @synthesize isImageURLChanged=_isImageURLChanged;
@property(retain, nonatomic) NSString *currentWebURL; // @synthesize currentWebURL=_currentWebURL;
@property(retain, nonatomic) BDImage *animateImage; // @synthesize animateImage=_animateImage;
@property(retain, nonatomic) BDAnimatedImagePlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UIImage *currentImage; // @synthesize currentImage=_currentImage;
@property(nonatomic) _Bool autoPlayAnimatedImage; // @synthesize autoPlayAnimatedImage=_autoPlayAnimatedImage;
@property(nonatomic) _Bool cacheAllFrame; // @synthesize cacheAllFrame=_cacheAllFrame;
@property(nonatomic) _Bool frameCacheAutomatically; // @synthesize frameCacheAutomatically=_frameCacheAutomatically;
@property(nonatomic) _Bool infinityLoop; // @synthesize infinityLoop=_infinityLoop;
@property(nonatomic, getter=isAnimateEnable) _Bool animateEnable; // @synthesize animateEnable=_animateEnable;
- (void).cxx_destruct;
- (void)imagePlayer:(id)arg1 didUpdateImage:(id)arg2 index:(unsigned long long)arg3;
- (void)_tryPlayAnimateImage;
@property(nonatomic) unsigned long long currentAnimatedImageIndex;
- (void)stopAnimation;
- (void)startAnimation;
- (void)pauseAnimation;
- (void)setHighlighted:(_Bool)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (_Bool)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (id)image;
- (void)callSuperSetImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 new:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

