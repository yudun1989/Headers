//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface MVFilmHeaderView : UIView
{
    UIView *topContainerView_;
    UILabel *_filmNameLabel;
    UILabel *_wantLabel;
    UILabel *_scoreLabel;
    UILabel *_descLabel;
    CDUnknownBlockType _clickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UILabel *wantLabel; // @synthesize wantLabel=_wantLabel;
@property(retain, nonatomic) UILabel *filmNameLabel; // @synthesize filmNameLabel=_filmNameLabel;
- (void).cxx_destruct;
- (void)goForward:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

