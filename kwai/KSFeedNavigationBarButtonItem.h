//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSButtonGroupItem.h"

@class NSMutableDictionary;

@interface KSFeedNavigationBarButtonItem : KSButtonGroupItem
{
    long long _style;
    NSMutableDictionary *_images;
}

+ (id)ks_imageWithKey:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *images; // @synthesize images=_images;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)hightlightWhenSelectedImage;
- (void)setHightlightWhenSelectedImage:(id)arg1;
- (id)selectedImage;
- (void)setSelectedImage:(id)arg1;
- (id)highlightImage;
- (void)setHighlightImage:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)imageForState:(unsigned long long)arg1 style:(long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3;
- (id)keyForState:(unsigned long long)arg1 style:(long long)arg2;

@end

