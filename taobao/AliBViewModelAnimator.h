//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliBT3dAbstractAnimator.h"

@class EZEntity, EZSkeletalAnimationClip, NSArray, NSDictionary;

@interface AliBViewModelAnimator : AliBT3dAbstractAnimator
{
    float _modelWidth;
    float _modelHeight;
    float _transX;
    float _transY;
    float _timeout;
    EZEntity *_modelEntity;
    NSDictionary *_transXDeviations;
    NSArray *_internalTextures;
    EZSkeletalAnimationClip *_curClip;
}

@property(retain, nonatomic) EZSkeletalAnimationClip *curClip; // @synthesize curClip=_curClip;
@property(nonatomic) float timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSArray *internalTextures; // @synthesize internalTextures=_internalTextures;
@property(nonatomic) float transY; // @synthesize transY=_transY;
@property(copy, nonatomic) NSDictionary *transXDeviations; // @synthesize transXDeviations=_transXDeviations;
@property(nonatomic) float transX; // @synthesize transX=_transX;
@property(nonatomic) float modelHeight; // @synthesize modelHeight=_modelHeight;
@property(nonatomic) float modelWidth; // @synthesize modelWidth=_modelWidth;
@property(retain, nonatomic) EZEntity *modelEntity; // @synthesize modelEntity=_modelEntity;
- (void).cxx_destruct;
- (void)loadEntity:(id)arg1;
- (void)finishComplete:(_Bool)arg1;
- (void)glRender;
- (_Bool)animate;
- (_Bool)isValid;
- (id)initWithKey:(id)arg1 info:(id)arg2;

@end

