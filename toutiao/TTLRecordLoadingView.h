//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTLVVeboImage, TTLVVeboImageView, UIImageView;

@interface TTLRecordLoadingView : UIView
{
    UIImageView *_bgImageView;
    TTLVVeboImageView *_gifLoadingView;
    TTLVVeboImage *_gifImage;
}

@property(retain, nonatomic) TTLVVeboImage *gifImage; // @synthesize gifImage=_gifImage;
@property(retain, nonatomic) TTLVVeboImageView *gifLoadingView; // @synthesize gifLoadingView=_gifLoadingView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 animationCompletion:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

