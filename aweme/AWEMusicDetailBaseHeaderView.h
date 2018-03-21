//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEAVPlayerWrapperDelegate-Protocol.h"

@class AWEAVPlayerWrapper, AWEMusicModel, NSString;

@interface AWEMusicDetailBaseHeaderView : UIView <AWEAVPlayerWrapperDelegate>
{
    double _headerViewHeight;
    double _contentAlpha;
    AWEAVPlayerWrapper *_audioPlayer;
    AWEMusicModel *_model;
}

@property(retain, nonatomic) AWEMusicModel *model; // @synthesize model=_model;
@property(retain, nonatomic) AWEAVPlayerWrapper *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property(nonatomic) double headerViewHeight; // @synthesize headerViewHeight=_headerViewHeight;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

