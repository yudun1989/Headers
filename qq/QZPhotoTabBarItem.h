//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QZPhotoModuleViewController, UIImage;

@interface QZPhotoTabBarItem : NSObject
{
    NSString *_title;
    UIImage *_image;
    UIImage *_selectedImage;
    QZPhotoModuleViewController *_tabBarVC;
}

@property(nonatomic) __weak QZPhotoModuleViewController *tabBarVC; // @synthesize tabBarVC=_tabBarVC;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3;

@end

