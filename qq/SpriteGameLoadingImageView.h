//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIImage;

@interface SpriteGameLoadingImageView : UIImageView
{
    UIImage *_maskImage;
    UIImage *_orgImage;
}

@property(retain, nonatomic) UIImage *orgImage; // @synthesize orgImage=_orgImage;
@property(retain, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
- (void).cxx_destruct;
- (id)compositeImageWithProgress:(double)arg1;
- (void)setProgress:(double)arg1;

@end

