//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface MBKMoCarPaySuccessView : UIView
{
    UIImageView *_alertImgView;
    UILabel *_alertTitleLab;
}

@property(retain, nonatomic) UILabel *alertTitleLab; // @synthesize alertTitleLab=_alertTitleLab;
@property(retain, nonatomic) UIImageView *alertImgView; // @synthesize alertImgView=_alertImgView;
- (void).cxx_destruct;
- (void)seupSubViews;
- (void)stopImgAnimation;
- (void)startImgAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end

