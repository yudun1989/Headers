//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExploreDetailNatantHeaderItemBase.h"

@class ExploreDetailnatantActionButton;

@interface ExploreDetailNatantUserActionView : ExploreDetailNatantHeaderItemBase
{
    ExploreDetailnatantActionButton *_digButton;
    ExploreDetailnatantActionButton *_buryButton;
}

+ (double)heightForView;
@property(retain, nonatomic) ExploreDetailnatantActionButton *buryButton; // @synthesize buryButton=_buryButton;
@property(retain, nonatomic) ExploreDetailnatantActionButton *digButton; // @synthesize digButton=_digButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)refreshUI;
- (void)refreshWithWidth:(double)arg1;
- (void)themeChanged:(id)arg1;
- (struct CGRect)frameForButtonIsDig:(_Bool)arg1;
- (id)initWithWidth:(double)arg1;

@end

