//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedImageView;

@interface TTNightMaskView : SSThemedView
{
    _Bool _enableRounded;
    SSThemedImageView *_maskImage;
}

@property(nonatomic) _Bool enableRounded; // @synthesize enableRounded=_enableRounded;
@property(retain, nonatomic) SSThemedImageView *maskImage; // @synthesize maskImage=_maskImage;
- (void).cxx_destruct;
- (void)themeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

