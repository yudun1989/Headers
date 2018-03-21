//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMSceneLayer.h"

#import "AVAudioPlayerDelegate-Protocol.h"

@class FMTouchAudioFilter, NSString;

@interface FMTouchAudioSceneLayer : FMSceneLayer <AVAudioPlayerDelegate>
{
    FMTouchAudioFilter *_filter;
}

+ (id)sceneWithResource:(id)arg1 materialProvider:(id)arg2 layerName:(id)arg3;
@property(retain, nonatomic) FMTouchAudioFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2 touchPosition:(struct CGPoint)arg3;
- (id)sceneFilter;
- (_Bool)faceRequired;
- (void)setActive:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

