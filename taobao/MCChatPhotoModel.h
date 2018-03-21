//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface MCChatPhotoModel : NSObject
{
    UIImage *_showImage;
    NSString *_placeholderImageURLString;
    NSString *_imageURLString;
    id _associatePhotoModelContext;
}

+ (id)placeholderImageURLString:(id)arg1 imageURLString:(id)arg2 showImage:(id)arg3 associatePhotoModelContext:(id)arg4;
@property(retain, nonatomic) id associatePhotoModelContext; // @synthesize associatePhotoModelContext=_associatePhotoModelContext;
@property(retain, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(retain, nonatomic) NSString *placeholderImageURLString; // @synthesize placeholderImageURLString=_placeholderImageURLString;
@property(retain, nonatomic) UIImage *showImage; // @synthesize showImage=_showImage;
- (void).cxx_destruct;

@end

