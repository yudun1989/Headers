//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TLSceneAd, UIImageView, UIView;

@interface TLSceneAdController : NSObject
{
    UIView *_sceneView;
    CDUnknownBlockType _openAdPageBlock;
    TLSceneAd *_sceneAd;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) TLSceneAd *sceneAd; // @synthesize sceneAd=_sceneAd;
@property(copy, nonatomic) CDUnknownBlockType openAdPageBlock; // @synthesize openAdPageBlock=_openAdPageBlock;
@property(nonatomic) __weak UIView *sceneView; // @synthesize sceneView=_sceneView;
- (void).cxx_destruct;
- (void)refreshSceneAd:(id)arg1;
- (void)showAdPage;
- (id)initWithSceneView:(id)arg1;

@end

