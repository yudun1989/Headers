//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, CropCover;
@protocol CropViewDelegate;

@interface CropView : UIView
{
    CropCover *_cover;
    struct CGRect _cropRect;
    double _ratio;
    struct CGSize _imageSize;
    struct CGSize _cropImgSize;
    int _xo;
    CADisplayLink *_displayLink;
    double _alpha;
    double _duration;
    _Bool _isNewType;
    id <CropViewDelegate> _delegate;
    double _coverAlpha;
}

@property(nonatomic) _Bool isNewType; // @synthesize isNewType=_isNewType;
@property(nonatomic) double coverAlpha; // @synthesize coverAlpha=_coverAlpha;
@property(retain, nonatomic) CropCover *cover; // @synthesize cover=_cover;
@property(nonatomic) id <CropViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) struct CGSize cropImgSize; // @dynamic cropImgSize;
@property(readonly, nonatomic) struct CGRect cropRect; // @dynamic cropRect;
@property(nonatomic) double ratio; // @dynamic ratio;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)resetCropState;
- (void)changeAlpha:(id)arg1;
- (void)playCropAnimation;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) struct CGSize imageSize; // @dynamic imageSize;
- (void)setFrame:(struct CGRect)arg1;
- (void)initialize;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
