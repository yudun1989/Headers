//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface NTLCardLoadingView : UIView
{
    UIImageView *_topImageView;
    UIImageView *_middleImageView;
    UIImageView *_bottomImageView;
    UIView *_viewFirstGap;
    UIView *_viewSecondGap;
}

@property(retain, nonatomic) UIView *viewSecondGap; // @synthesize viewSecondGap=_viewSecondGap;
@property(retain, nonatomic) UIView *viewFirstGap; // @synthesize viewFirstGap=_viewFirstGap;
@property(retain, nonatomic) UIImageView *bottomImageView; // @synthesize bottomImageView=_bottomImageView;
@property(retain, nonatomic) UIImageView *middleImageView; // @synthesize middleImageView=_middleImageView;
@property(retain, nonatomic) UIImageView *topImageView; // @synthesize topImageView=_topImageView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

