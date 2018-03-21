//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FFGoodsTag.h"

@class NSString, UIColor;

@interface FFGoodsImageTag : FFGoodsTag
{
    NSString *_title;
    UIColor *_color;
    NSString *_imageName;
    struct CGSize _imageSize;
}

@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)tagView;
- (struct CGSize)intrinsicContentSize;
- (_Bool)setupWithTag:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTag:(id)arg1;
- (id)initWithTag:(id)arg1 ImageName:(id)arg2 ImageSize:(struct CGSize)arg3 FontSize:(double)arg4 TextColor:(id)arg5;

@end

