//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OEnlargeButton.h"

#import "O2ODynamicProtocol-Protocol.h"

@class NSString, UIImage;

@interface O2OCommentCounterButton : O2OEnlargeButton <O2ODynamicProtocol>
{
    _Bool _positive;
    _Bool _needAnimate;
    int _counter;
    NSString *_originalTitle;
    UIImage *_normalImage;
    UIImage *_highlightedImage;
}

+ (id)buttonWithTitle:(id)arg1 normalImage:(id)arg2 highlightedImage:(id)arg3;
@property(nonatomic) _Bool needAnimate; // @synthesize needAnimate=_needAnimate;
@property(retain, nonatomic) UIImage *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(retain, nonatomic) NSString *originalTitle; // @synthesize originalTitle=_originalTitle;
@property(nonatomic) int counter; // @synthesize counter=_counter;
@property(nonatomic) _Bool positive; // @synthesize positive=_positive;
- (void).cxx_destruct;
- (id)fakeImageWithSize:(struct CGSize)arg1 color:(id)arg2;
- (void)setConfig:(id)arg1 children:(id)arg2 item:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

