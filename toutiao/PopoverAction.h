//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIFont, UIImage;

@interface PopoverAction : NSObject
{
    _Bool _showRedDot;
    UIImage *_image;
    NSString *_title;
    NSString *_label;
    UIFont *_titleFont;
    UIImage *_titleImage;
    NSArray *_colors;
    CDUnknownBlockType _handler;
}

+ (id)actionWithImage:(id)arg1 title:(id)arg2 titleFont:(id)arg3 titleImage:(id)arg4 colors:(id)arg5 showRedDot:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;
+ (id)actionWithImage:(id)arg1 title:(id)arg2 colors:(id)arg3 showRedDot:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;
+ (id)actionWithImage:(id)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)actionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) UIImage *titleImage; // @synthesize titleImage=_titleImage;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end

