//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIImageView;

@interface GDMRedManFeedImageContentView : UIView
{
    UIImageView *_singleImageView;
    NSArray *_imageArray;
}

+ (double)heightOfFeedImageContentViewForModel:(id)arg1;
@property(retain, nonatomic) NSArray *imageArray; // @synthesize imageArray=_imageArray;
@property(retain, nonatomic) UIImageView *singleImageView; // @synthesize singleImageView=_singleImageView;
- (void).cxx_destruct;
- (void)resetSingleImageView;
- (void)resetImageArray;
- (void)setModel:(id)arg1;
- (void)initImageArray;
- (id)initWithFrame:(struct CGRect)arg1;

@end

