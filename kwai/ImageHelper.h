//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ImageHelper : NSObject
{
}

+ (id)ellipseImage:(id)arg1 withInset:(double)arg2;
+ (id)roundedBacksplashOfSize:(struct CGSize)arg1 andColor:(id)arg2 withRounding:(double)arg3 andInset:(double)arg4;
+ (id)roundedImage:(id)arg1 withOvalSize:(struct CGSize)arg2;
+ (id)roundedImage:(id)arg1 withOvalSize:(struct CGSize)arg2 withInset:(double)arg3;
+ (void)addRoundedRect:(struct CGRect)arg1 toContext:(struct CGContext *)arg2 withOvalSize:(struct CGSize)arg3;
+ (id)image:(id)arg1 fillView:(id)arg2;
+ (id)image:(id)arg1 fillSize:(struct CGSize)arg2;
+ (id)image:(id)arg1 centerInView:(id)arg2;
+ (id)image:(id)arg1 andBgImage:(id)arg2 fitInSize:(struct CGSize)arg3;
+ (id)image:(id)arg1 andBgImage:(id)arg2 centerInSize:(struct CGSize)arg3;
+ (id)image:(id)arg1 centerInSize:(struct CGSize)arg2;
+ (id)image:(id)arg1 fitInView:(id)arg2;
+ (id)image:(id)arg1 fitInSize:(struct CGSize)arg2;
+ (id)unrotateImage:(id)arg1;
+ (id)doUnrotateImage:(id)arg1;
+ (struct CGRect)frameSize:(struct CGSize)arg1 inSize:(struct CGSize)arg2;
+ (struct CGSize)fitSize:(struct CGSize)arg1 inSize:(struct CGSize)arg2;
+ (char *)bitmapFromImage:(id)arg1;
+ (id)imageWithBits:(char *)arg1 withSize:(struct CGSize)arg2;
+ (id)imageFromView:(id)arg1;
+ (id)convolveImageWithEdgeDetection:(id)arg1;
+ (id)convolveImage:(id)arg1 withBlurRadius:(int)arg2;

@end

