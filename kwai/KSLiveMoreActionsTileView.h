//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSExtensionButton.h"

@class NSArray;

@interface KSLiveMoreActionsTileView : KSExtensionButton
{
    NSArray *_buttons;
}

+ (id)defaultItemButton;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)applyBackground;
- (void)layoutButtons:(id)arg1 underButton:(id)arg2;
- (void)removeSubviewInButtons:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
