//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface aluRoundHeadImage : UIView
{
    UIImageView *_viewAddAvatarHint;
    UIImageView *_headImageView;
    UIImage *_addAvatarHintImage;
}

@property(retain, nonatomic) UIImage *addAvatarHintImage; // @synthesize addAvatarHintImage=_addAvatarHintImage;
@property(nonatomic) __weak UIImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void).cxx_destruct;
- (void)setHeadImage:(id)arg1 url:(id)arg2;
- (void)showAddAvatarHint:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

