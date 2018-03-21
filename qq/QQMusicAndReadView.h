//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSTimer;

@interface QQMusicAndReadView : UIView
{
    int _curIndex;
    NSMutableArray *_curPlayingViews;
    NSTimer *_scrollTimer;
}

@property(nonatomic) int curIndex; // @synthesize curIndex=_curIndex;
@property(nonatomic) NSTimer *scrollTimer; // @synthesize scrollTimer=_scrollTimer;
@property(retain, nonatomic) NSMutableArray *curPlayingViews; // @synthesize curPlayingViews=_curPlayingViews;
- (void)autoScroll;
- (long long)getViewCount;
- (void)dealloc;
- (void)removeView:(id)arg1;
- (void)addView:(id)arg1;
- (void)onFontChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

