//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class BubbleAnimationSubWidthInfo, NSArray, NSMutableDictionary, NSString, UIColor, UIFont;

@interface BubbleAnimationInfo : QQModel
{
    long long _type;
    long long _fps;
    long long _cycleCount;
    struct CGRect _rect;
    NSArray *_keywords;
    NSArray *_imageNames;
    NSArray *_prexImageNames;
    NSString *_resourcePath;
    NSString *_packName;
    NSString *_secondPackName;
    NSString *_align;
    _Bool _alpha;
    BubbleAnimationSubWidthInfo *_widthAnimationSubInfo;
    NSString *_animationName;
    NSArray *_animationImages;
    NSArray *_animationStaticImages;
    NSArray *_animationMovingImages;
    NSArray *_animationTurnBackImages;
    NSArray *_animationSet;
    NSArray *_animationFrameImages;
    NSArray *_animationMixImages;
    NSArray *_animationMixMirrorImages;
    float _paddingTop;
    float _paddingLeft;
    float _paddingBottom;
    float _paddingRight;
    NSMutableDictionary *_animationImagesDic;
    _Bool _disappear;
    _Bool _mirror;
    NSString *_text_align;
    UIColor *_text_color;
    UIFont *_text_font;
    long long _maxCount;
    _Bool _passiveRotate;
    int _bubbleAnimationType;
    int _passiveType;
    unsigned long long _repeat;
    NSArray *_animationRawVoicePrintImages;
    NSArray *_animationVoicePrintImages;
    NSArray *_cutPostions;
    double _curCutPos;
    NSString *_startAlign;
    NSString *_endAlign;
    struct CGPoint _zoomPoint;
    struct CGRect _startRect;
    struct CGRect _endRect;
}

@property(nonatomic) struct CGRect endRect; // @synthesize endRect=_endRect;
@property(retain, nonatomic) NSString *endAlign; // @synthesize endAlign=_endAlign;
@property(nonatomic) struct CGRect startRect; // @synthesize startRect=_startRect;
@property(retain, nonatomic) NSString *startAlign; // @synthesize startAlign=_startAlign;
@property(nonatomic) _Bool passiveRotate; // @synthesize passiveRotate=_passiveRotate;
@property(nonatomic) int passiveType; // @synthesize passiveType=_passiveType;
@property(nonatomic) double curCutPos; // @synthesize curCutPos=_curCutPos;
@property(retain, nonatomic) NSArray *cutPostions; // @synthesize cutPostions=_cutPostions;
@property(retain, nonatomic) NSArray *animationVoicePrintImages; // @synthesize animationVoicePrintImages=_animationVoicePrintImages;
@property(retain, nonatomic) NSArray *animationRawVoicePrintImages; // @synthesize animationRawVoicePrintImages=_animationRawVoicePrintImages;
@property(nonatomic) unsigned long long repeat; // @synthesize repeat=_repeat;
@property(nonatomic) struct CGPoint zoomPoint; // @synthesize zoomPoint=_zoomPoint;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(retain, nonatomic) UIFont *text_font; // @synthesize text_font=_text_font;
@property(retain, nonatomic) UIColor *text_color; // @synthesize text_color=_text_color;
@property(copy, nonatomic) NSString *text_align; // @synthesize text_align=_text_align;
@property(nonatomic) _Bool mirror; // @synthesize mirror=_mirror;
@property(nonatomic) _Bool disappear; // @synthesize disappear=_disappear;
@property(retain, nonatomic) NSMutableDictionary *animationImagesDic; // @synthesize animationImagesDic=_animationImagesDic;
@property(nonatomic) float paddingRight; // @synthesize paddingRight=_paddingRight;
@property(nonatomic) float paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(nonatomic) float paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property(nonatomic) float paddingTop; // @synthesize paddingTop=_paddingTop;
@property(retain, nonatomic) NSArray *animationFrameImages; // @synthesize animationFrameImages=_animationFrameImages;
@property(retain, nonatomic) NSArray *animationSet; // @synthesize animationSet=_animationSet;
@property(retain, nonatomic) NSArray *animationMixMirrorImages; // @synthesize animationMixMirrorImages=_animationMixMirrorImages;
@property(retain, nonatomic) NSArray *animationMixImages; // @synthesize animationMixImages=_animationMixImages;
@property(retain, nonatomic) NSArray *animationTurnBackImages; // @synthesize animationTurnBackImages=_animationTurnBackImages;
@property(retain, nonatomic) NSArray *animationMovingImages; // @synthesize animationMovingImages=_animationMovingImages;
@property(retain, nonatomic) NSArray *animationStaticImages; // @synthesize animationStaticImages=_animationStaticImages;
@property(retain, nonatomic) NSArray *animationImages; // @synthesize animationImages=_animationImages;
@property(copy, nonatomic) NSString *animationName; // @synthesize animationName=_animationName;
@property(retain, nonatomic) BubbleAnimationSubWidthInfo *widthAnimationSubInfo; // @synthesize widthAnimationSubInfo=_widthAnimationSubInfo;
@property(retain, nonatomic) NSString *align; // @synthesize align=_align;
@property(retain, nonatomic) NSString *secondPackName; // @synthesize secondPackName=_secondPackName;
@property(retain, nonatomic) NSString *packName; // @synthesize packName=_packName;
@property(nonatomic) int bubbleAnimationType; // @synthesize bubbleAnimationType=_bubbleAnimationType;
@property(retain, nonatomic) NSString *resourcePath; // @synthesize resourcePath=_resourcePath;
@property(retain, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(nonatomic) _Bool alpha; // @synthesize alpha=_alpha;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) long long cycleCount; // @synthesize cycleCount=_cycleCount;
@property(nonatomic) long long fps; // @synthesize fps=_fps;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)animationMovingImagesWithMirror;
- (id)animationStaticImagesWithMirror;
- (id)animationStaticImagesWithOrgImgs:(id)arg1;
- (double)getCutPostionWithScale:(double)arg1;
- (id)cutImage:(id)arg1 xCutPos:(double)arg2;
- (id)cutVoicePrintImagesWithXPos:(double)arg1 data:(id)arg2;
- (void)cutVoicePrintImagesWithXPos:(double)arg1;
- (_Bool)isMovingFileExist;
- (id)loadAnimationImagesDic;
- (_Bool)isAnimationMovingImagesComplete;
- (_Bool)isAnimationTurnBackImagesComplete;
- (_Bool)isAnimationVoicePrintImagesComplete:(double)arg1;
- (_Bool)isAnimationMixImageComplete;
- (_Bool)isAnimationFrameImagesComplete;
- (_Bool)isAnimationStaticImagesComplete;
- (id)getVoicePrintFirstFrameWithXCutPos:(double)arg1;
- (id)animationImagesWithImageRes:(id)arg1;
- (id)getAnimations;
- (void)setPrexImageNames:(id)arg1;
- (void)setImageNames:(id)arg1;

@end

