//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavBaseCellView.h"

@class BeeAudioButtonView, UILabel;

@interface FavMusicCellView : FavBaseCellView
{
    BeeAudioButtonView *_audioView;
    UILabel *_songNameLabel;
    UILabel *_authorNameLabel;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) UILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
@property(retain, nonatomic) UILabel *songNameLabel; // @synthesize songNameLabel=_songNameLabel;
@property(retain, nonatomic) BeeAudioButtonView *audioView; // @synthesize audioView=_audioView;
- (void).cxx_destruct;
- (void)buildCell:(id)arg1;
- (void)buildConstraint;
- (void)buildSubView;

@end

