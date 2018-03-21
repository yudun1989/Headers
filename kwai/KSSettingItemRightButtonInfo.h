//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImage;

@interface KSSettingItemRightButtonInfo : NSObject
{
    _Bool _hide;
    _Bool _loading;
    NSString *_title;
    NSString *_selectedTitle;
    UIImage *_image;
    UIImage *_selectedImage;
    UIImage *_backgroundImage;
    UIImage *_selectedBackgroundImage;
    double _width;
    UIColor *_titleColor;
    UIColor *_selectedTitleColor;
}

@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool hide; // @synthesize hide=_hide;
@property(retain, nonatomic) UIColor *selectedTitleColor; // @synthesize selectedTitleColor=_selectedTitleColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) UIImage *selectedBackgroundImage; // @synthesize selectedBackgroundImage=_selectedBackgroundImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *selectedTitle; // @synthesize selectedTitle=_selectedTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)init;

@end

