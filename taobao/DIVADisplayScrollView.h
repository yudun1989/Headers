//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIImageView;

@interface DIVADisplayScrollView : UIScrollView <UIScrollViewDelegate>
{
    UIImageView *_contentImageView;
}

@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
- (void).cxx_destruct;
- (struct CGRect)frameToCenterForImageSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)setupMainView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

