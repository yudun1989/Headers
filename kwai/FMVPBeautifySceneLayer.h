//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMSceneLayer.h"

@class FMVPBeautifyFilter;

@interface FMVPBeautifySceneLayer : FMSceneLayer
{
    FMVPBeautifyFilter *_vpBeautifyFilter;
}

+ (id)sceneWithResource:(id)arg1 materialProvider:(id)arg2 layerName:(id)arg3;
@property(retain, nonatomic) FMVPBeautifyFilter *vpBeautifyFilter; // @synthesize vpBeautifyFilter=_vpBeautifyFilter;
- (void).cxx_destruct;
- (_Bool)faceRequired;
- (id)sceneFilter;

@end

